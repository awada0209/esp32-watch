#include <lvgl.h>
#include <TFT_eSPI.h>
#include <ui.h>
#include "WiFi.h"
#include "HTTPClient.h"
#include "time.h"

//tab = "    "//一个tab等于四个空格
hw_timer_t * timer = NULL;

/*Don't forget to set Sketchbook location in File/Preferences to the path of your UI project (the parent foder of this INO file)*/
#define button 1//定义管脚序号
int i = 0;//初始化按钮次数
int hour1=0,min1=0,second=0,year=0,mon=0,day=0;
int c1=year/100,c2 = year%100;
int D = 0;
int W = 0;
const char* week[7] = {"星期二","星期三","星期四","星期五","星期六","星期日","星期一"};

int httpcode=0;
String GetUrl = "http://quan.suning.com/getSysTime.do";
/*Change to your screen resolution*/
static const uint16_t screenWidth  = 132;//设置屏幕宽度
static const uint16_t screenHeight = 132;//设置屏幕高度

const char* ssid = "K60";//wifi名称，WiFi频段为2.4G
const char* password = "q2582525785";//wifi密码

WiFiClient client;//创建wifi用户
HTTPClient http;//创建http用户

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}


void setup()
{
    Serial.begin( 115200 ); /* prepare for possible serial debug */
    // timer = timerBegin(0,240,true);//初始化
    // timerAttachInterrupt(timer,&onTimer, true);//调用中断函数
    // timerAlarmWrite(timer,1000000,true);//timebengin的参数2 240为esp32s3的频率为240MHz，1000000标识为1s
    


    pinMode(button,INPUT);//设置管脚模式
    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
#endif

    tft.begin();          /* TFT init */
    tft.setRotation( 0 ); /* Landscape orientation, flipped */

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init( &indev_drv );
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    lv_indev_drv_register( &indev_drv );


    ui_init();
    /*      coding begin    */
    
    WiFi.mode(WIFI_STA);//WiFi的station模式
    WiFi.begin(ssid,password);//wifi连接
    while(WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        lv_scr_load(ui_home);
        lv_refr_now(NULL);
        Serial.println(".");//检测是否连接，不连接的话一直打点
    }
    
    http.setTimeout(500);
    http.begin(client,GetUrl);
    httpcode = http.GET();
    if(httpcode > 0){
        if(httpcode = HTTP_CODE_OK){
        String response = http.getString();
        hour1 = response.substring(24).toInt();
        min1 = response.substring(27).toInt();
        second = response.substring(30).toInt();
        year = response.substring(13).toInt();
        mon = response.substring(18).toInt();
        day = response.substring(21).toInt();
        D = ((c1/4)-(2*c1)+c2+(c2/4)+((13*(mon+1))/5)+day-1);
        W = D % 7;
        }
        }
   Serial.println( "Setup done" );
   /*       coding end      */
    
}
//      lv_refr_now(NULL);  //更新全局
void loop()
{
    /*      coding begin    */
  //  timerAlarmEnable(timer);//定时器使能

    if(digitalRead(button) == HIGH)
    {
        
        i++;
        if(i>3) i=0;
        delay(300);
        switch (i)
        {
            case 1:
                {lv_scr_load(ui_timeall);
                http.setTimeout(500);
                http.begin(client,GetUrl);
                httpcode = http.GET();
                if(httpcode > 0){
                if(httpcode = HTTP_CODE_OK){
                String response = http.getString();
                hour1 = response.substring(24).toInt();
                min1 = response.substring(27).toInt();
                second = response.substring(30).toInt();
                year = response.substring(13).toInt();
                mon = response.substring(18).toInt();
                day = response.substring(21).toInt();
                D = ((c1/4)-(2*c1)+c2+(c2/4)+((13*(mon+1))/5)+day-1);
                W = D % 7;
                }
                }
                 lv_label_set_text_fmt(ui_Label1,"%.2d:%.2d",hour1,min1);
                 lv_label_set_text_fmt(ui_Label3,"%d/%.2d/%.2d",year,mon,day);
                 lv_label_set_text_fmt(ui_Label4, "%s",week[W]);
                lv_refr_now(NULL);}
                break;
            case 2:
                {lv_scr_load(ui_weather);lv_refr_now(NULL);}
                break;
            case 3:
                {lv_scr_load(ui_health);lv_refr_now(NULL);}
                break;
            case 0:
                {lv_scr_load(ui_home);lv_refr_now(NULL);}
                break;
            default:
                {lv_scr_load(ui_home);lv_refr_now(NULL);}
                break;
        }
    }
   
   /*       coding end      */
    
    
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
}
