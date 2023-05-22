#include "uKitExplore2En.h"

int x =0;

void setup() {
    Initialization();
    setServoAngle(11,0,100);

}

void loop() {
    Serial.print(readUltrasonicDistance(1));
    setRgbledColor(255,0,255);
  if(readUltrasonicDistance(1) >= 25){
    Serial.println(x);
      if(x==0){
        setMotorTurnAdj(1,-15,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        
      } else if(x==-90){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-80){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-70){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-60){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-50){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-40){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-30){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-20){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x==-10){
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      } else if(x== 0){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,-15,0xffff);
      } else if(x==10){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==20){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==30){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==40){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==50){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==60){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==70){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==80){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else if(x==90){
        setMotorTurnAdj(1,15,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        delay(1000);
        setServoAngle(11,0,100);
        x= 0; 
      }else{
             tone(131,100);

      }

  }else if(readUltrasonicDistance(1) < 25) {
        Serial.println(x);
        setMotorStop(1);
        setMotorStop(2);
    if(x == 0){
         setServoAngle(11,-90,500);
         x = -90;
    }else if(x== -90) {
          setServoAngle(11,-80,500);
         x = -80;
    }else if(x== -80) {
          setServoAngle(11,-70,500);
         x = -70;
    }else if(x== -70) {
          setServoAngle(11,-60,500);
         x = -60;
    }else if(x== -60) {
          setServoAngle(11,-50,500);
         x = -50;
    }else if(x== -50) {
          setServoAngle(11,-40,500);
         x = -40;
    }else if(x== -40) {
          setServoAngle(11,-30,500);
         x = -30;
    }else if(x== -30) {
          setServoAngle(11,-20,500);
         x = -20;
         
    }else if(x== -20) {
          setServoAngle(11,-10,500);
         x = -10;
         
    }else if(x== -10) {
          setServoAngle(11,10,500);
         x = 10;
    }else if(x== 10) {
          setServoAngle(11,20,500);
         x = 20;
    }else if(x== 20) {
          setServoAngle(11,30,500);
         x = 30;
    }else if(x== 30) {
          setServoAngle(11,40,500);
         x = 40;
    }else if(x== 40) {
          setServoAngle(11,50,500);
         x = 50;
    }else if(x== 50) {
          setServoAngle(11,60,500);
         x = 60;
    }else if(x== 60) {
          setServoAngle(11,70,500);
         x = 70;
    }else if(x== 70) {
          setServoAngle(11,80,500);
         x = 80;
    }else if(x== 80) {
          setServoAngle(11,90,500);
         x = 90;
    }else if(x== 90) {
          setServoAngle(11,0,500);
         x = 0;
    }else{
          tone(131,100);
        delay(1000);

    }
  }


}
