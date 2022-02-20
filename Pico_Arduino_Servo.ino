 // Servo Motor control Pi Pico
 
 #include <Servo.h>
 Servo smotor;  // 오브젝트 생성

 int angle = 0 ; 
   
 void setup() {
   smotor.attach(16);  //  16 번 핀에 모터
   Serial.begin(9600);
   smotor.write(0); // initilize to 0 degree  
 }
 
 void loop() {
     angle = 0 ;
     smotor.write(angle); 
     Serial.println(angle);            
     delay(3000);
    
     angle = 180 ;
     smotor.write(angle); 
     Serial.println(angle);            
     delay(3000);
 }
