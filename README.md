# UBTech_car

#include "uKitExplore2En.h"

volatile int angle;

void setup() {
    Initialization();
    angle = 0;
    setServoAngle(11,0,1000);
    delay(1000);

}

void loop() {
    Serial.print(readUltrasonicDistance(1));
    setRgbledColor(255,0,255);

    if (((readUltrasonicDistance(1) < 25)&(angle == 0))) {
        setMotorTurnAdj(1,0,0xffff);
        setMotorTurnAdj(2,0,0xffff);
        setServoAngle(11,-90,500);
        delay(500);
        angle = -90;
        if (((readUltrasonicDistance(1) < 25)&(angle == -90))) {
            setMotorTurnAdj(1,0,0xffff);
            setMotorTurnAdj(2,0,0xffff);
            setServoAngle(11,-80,500);
            delay(500);
            angle = -80;
            if (((readUltrasonicDistance(1) < 25)&(angle == -80))) {
                setMotorTurnAdj(1,0,0xffff);
                setMotorTurnAdj(2,0,0xffff);
                setServoAngle(11,-70,500);
                delay(500);
                angle = -70;
                if (((readUltrasonicDistance(1) < 25)&(angle == -70))) {
                    setMotorTurnAdj(1,0,0xffff);
                    setMotorTurnAdj(2,0,0xffff);
                    setServoAngle(11,-60,500);
                    delay(500);
                    angle = -60;
                    if (((readUltrasonicDistance(1) < 25)&(angle == -60))) {
                        setMotorTurnAdj(1,0,0xffff);
                        setMotorTurnAdj(2,0,0xffff);
                        setServoAngle(11,-50,500);
                        delay(500);
                        angle = -50;
                        if (((readUltrasonicDistance(1) < 25)&(angle == -50))) {
                            setMotorTurnAdj(1,0,0xffff);
                            setMotorTurnAdj(2,0,0xffff);
                            setServoAngle(11,-40,500);
                            delay(500);
                            angle = -40;
                            if (((readUltrasonicDistance(1) < 25)&(angle == -40))) {
                                setMotorTurnAdj(1,0,0xffff);
                                setMotorTurnAdj(2,0,0xffff);
                                setServoAngle(11,-30,500);
                                delay(500);
                                angle = -30;
                                if (((readUltrasonicDistance(1) < 25)&(angle == -30))) {
                                    setMotorTurnAdj(1,0,0xffff);
                                    setMotorTurnAdj(2,0,0xffff);
                                    setServoAngle(11,-20,500);
                                    delay(500);
                                    angle = -20;
                                    if (((readUltrasonicDistance(1) < 25)&(angle == -20))) {
                                        setMotorTurnAdj(1,0,0xffff);
                                        setMotorTurnAdj(2,0,0xffff);
                                        setServoAngle(11,-10,500);
                                        delay(500);
                                        angle = -10;
                                        if (((readUltrasonicDistance(1) < 25)&(angle == -10))) {
                                            setMotorTurnAdj(1,0,0xffff);
                                            setMotorTurnAdj(2,0,0xffff);
                                            setServoAngle(11,10,500);
                                            delay(500);
                                            angle = 10;
                                            if (((readUltrasonicDistance(1) < 25)&(angle == 10))) {
                                                setMotorTurnAdj(1,0,0xffff);
                                                setMotorTurnAdj(2,0,0xffff);
                                                setServoAngle(11,20,500);
                                                delay(500);
                                                angle = 20;
                                                if (((readUltrasonicDistance(1) < 25)&(angle == 20))) {
                                                    setMotorTurnAdj(1,0,0xffff);
                                                    setMotorTurnAdj(2,0,0xffff);
                                                    setServoAngle(11,30,500);
                                                    delay(500);
                                                    angle = 30;
                                                    if (((readUltrasonicDistance(1) < 25)&(angle == 30))) {
                                                        setMotorTurnAdj(1,0,0xffff);
                                                        setMotorTurnAdj(2,0,0xffff);
                                                        setServoAngle(11,40,500);
                                                        delay(500);
                                                        angle = 40;
                                                        if (((readUltrasonicDistance(1) < 25)&(angle == 40))) {
                                                            setMotorTurnAdj(1,0,0xffff);
                                                            setMotorTurnAdj(2,0,0xffff);
                                                            setServoAngle(11,50,500);
                                                            delay(500);
                                                            angle = 50;
                                                            if (((readUltrasonicDistance(1) < 25)&(angle == 50))) {
                                                                setMotorTurnAdj(1,0,0xffff);
                                                                setMotorTurnAdj(2,0,0xffff);
                                                                setServoAngle(11,60,500);
                                                                delay(500);
                                                                angle = 60;
                                                                if (((readUltrasonicDistance(1) < 25)&(angle == 60))) {
                                                                    setMotorTurnAdj(1,0,0xffff);
                                                                    setMotorTurnAdj(2,0,0xffff);
                                                                    setServoAngle(11,70,500);
                                                                    delay(500);
                                                                    angle = 70;
                                                                    if (((readUltrasonicDistance(1) < 25)&(angle == 70))) {
                                                                        setMotorTurnAdj(1,0,0xffff);
                                                                        setMotorTurnAdj(2,0,0xffff);
                                                                        setServoAngle(11,80,500);
                                                                        delay(500);
                                                                        angle = 80;
                                                                        if (((readUltrasonicDistance(1) < 25)&(angle == 80))) {
                                                                            setMotorTurnAdj(1,0,0xffff);
                                                                            setMotorTurnAdj(2,0,0xffff);
                                                                            setServoAngle(11,90,500);
                                                                            delay(500);
                                                                            angle = 90;
                                                                            if (((readUltrasonicDistance(1) < 25)&(angle == 90))) {
                                                                                setMotorTurnAdj(1,0,0xffff);
                                                                                setMotorTurnAdj(2,0,0xffff);
                                                                                setServoAngle(11,0,500);
                                                                                delay(500);
                                                                                angle = 0;

                                                                            }

                                                                        }

                                                                    }

                                                                }

                                                            }

                                                        }

                                                    }

                                                }

                                            }

                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }

        }

    }

    if (((readUltrasonicDistance(1) >= 25)&(angle == 0))) {
        setMotorTurnAdj(1,-15,0xffff);
        setMotorTurnAdj(2,15,0xffff);
        if (((readUltrasonicDistance(1) >= 25)&(angle == -90))) {
            setMotorTurnAdj(1,0,0xffff);
            setMotorTurnAdj(2,15,0xffff);
            setServoAngle(11,0,500);
            delay(500);
            angle = 0;
            if (((readUltrasonicDistance(1) >= 25)&(angle == -80))) {
                setMotorTurnAdj(1,0,0xffff);
                setMotorTurnAdj(2,15,0xffff);
                setServoAngle(11,0,500);
                delay(500);
                angle = 0;
                if (((readUltrasonicDistance(1) >= 25)&(angle == -70))) {
                    setMotorTurnAdj(1,0,0xffff);
                    setMotorTurnAdj(2,15,0xffff);
                    setServoAngle(11,0,500);
                    delay(500);
                    angle = 0;
                    if (((readUltrasonicDistance(1) >= 25)&(angle == -60))) {
                        setMotorTurnAdj(1,0,0xffff);
                        setMotorTurnAdj(2,15,0xffff);
                        setServoAngle(11,0,500);
                        delay(500);
                        angle = 0;
                        if (((readUltrasonicDistance(1) >= 25)&(angle == -50))) {
                            setMotorTurnAdj(1,0,0xffff);
                            setMotorTurnAdj(2,15,0xffff);
                            setServoAngle(11,0,500);
                            delay(500);
                            angle = 0;
                            if (((readUltrasonicDistance(1) >= 25)&(angle == -40))) {
                                setMotorTurnAdj(1,0,0xffff);
                                setMotorTurnAdj(2,15,0xffff);
                                delay(5000);
                                setServoAngle(11,0,500);
                                delay(500);
                                angle = 0;
                                if (((readUltrasonicDistance(1) >= 25)&(angle == -30))) {
                                    setMotorTurnAdj(1,0,0xffff);
                                    setMotorTurnAdj(2,15,0xffff);
                                    setServoAngle(11,0,500);
                                    delay(500);
                                    angle = 0;
                                    if (((readUltrasonicDistance(1) >= 25)&(angle == -20))) {
                                        setMotorTurnAdj(1,0,0xffff);
                                        setMotorTurnAdj(2,-15,0xffff);
                                        delay(5000);
                                        setServoAngle(11,0,500);
                                        delay(500);
                                        angle = 0;
                                        if (((readUltrasonicDistance(1) >= 25)&(angle == -10))) {
                                            setMotorTurnAdj(1,0,0xffff);
                                            setMotorTurnAdj(2,15,0xffff);
                                            setServoAngle(11,0,500);
                                            delay(500);
                                            angle = 0;
                                            if (((readUltrasonicDistance(1) >= 25)&(angle == 10))) {
                                                setMotorTurnAdj(1,15,0xffff);
                                                setMotorTurnAdj(2,0,0xffff);
                                                setServoAngle(11,0,500);
                                                delay(500);
                                                angle = 0;
                                                if (((readUltrasonicDistance(1) >= 25)&(angle == 20))) {
                                                    setMotorTurnAdj(1,-15,0xffff);
                                                    setMotorTurnAdj(2,0,0xffff);
                                                    setServoAngle(11,0,500);
                                                    delay(500);
                                                    if (((readUltrasonicDistance(1) >= 25)&(angle == 30))) {
                                                        setMotorTurnAdj(1,-15,0xffff);
                                                        setMotorTurnAdj(2,0,0xffff);
                                                        setServoAngle(11,0,500);
                                                        delay(500);
                                                        angle = 0;
                                                        if (((readUltrasonicDistance(1) >= 25)&(angle == 40))) {
                                                            setMotorTurnAdj(1,-15,0xffff);
                                                            setMotorTurnAdj(2,0,0xffff);
                                                            setServoAngle(11,0,500);
                                                            delay(500);
                                                            angle = 0;
                                                            if (((readUltrasonicDistance(1) >= 25)&(angle == 50))) {
                                                                setMotorTurnAdj(1,-15,0xffff);
                                                                setMotorTurnAdj(2,0,0xffff);
                                                                setServoAngle(11,0,500);
                                                                delay(500);
                                                                angle = 0;
                                                                if (((readUltrasonicDistance(1) >= 25)&(angle == 60))) {
                                                                    setMotorTurnAdj(1,-15,0xffff);
                                                                    setMotorTurnAdj(2,0,0xffff);
                                                                    delay(5000);
                                                                    setServoAngle(11,0,500);
                                                                    delay(500);
                                                                    angle = 0;
                                                                    if (((readUltrasonicDistance(1) >= 25)&(angle == 70))) {
                                                                        setMotorTurnAdj(1,-15,0xffff);
                                                                        setMotorTurnAdj(2,0,0xffff);
                                                                        setServoAngle(11,0,500);
                                                                        delay(500);
                                                                        angle = 0;
                                                                        if (((readUltrasonicDistance(1) >= 25)&(angle == 80))) {
                                                                            setMotorTurnAdj(1,-15,0xffff);
                                                                            setMotorTurnAdj(2,0,0xffff);
                                                                            setServoAngle(11,0,500);
                                                                            delay(500);
                                                                            angle = 0;

                                                                        }

                                                                    }

                                                                }

                                                            }

                                                        }

                                                    }

                                                }

                                            }

                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }

        }

    }


}
