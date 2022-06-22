#include <AFMotor.h>
#include <Servo.h>

Servo s1;
Servo s2;

AF_DCMotor motor1_esq(1);
AF_DCMotor motor1_dir(2);
AF_DCMotor motor2_esq(3);
AF_DCMotor motor2_dir(4);

#define sens_1 35
#define sens_2 37
#define sens_3 39
#define sens_4 41
#define sens_5 43
#define vel 255

int pos = 0;

void setup(){
    Serial,begin(9600);
    pinMode(sens_1, INPUT);
    pinMode(sens_2, INPUT);
    pinMode(sens_3, INPUT);
    pinMode(sens_4, INPUT);
    pinMode(sens_5, INPUT);

    motor1_esq.setSpeed(vel);
    motor1_dir.setSpeed(vel);
    motor2_esq.setSpeed(vel);
    motor2_dir.setSpeed(vel);
    motor1_esq.run(RELEASE);
    motor1_dir.run(RELEASE);
    motor2_esq.run(RELEASE);
    motor2_dir.run(RELEASE);

    s1.attach(10);
    s2.attach(9);
    s1.write(90);
    s2.write(50);
}
void pegar(){
    motor1_esq.run(RELEASE);
    motor1_dir.run(RELEASE);
    motor2_esq.run(RELEASE);
    motor2_dir.run(RELEASE);
    for(int pos=90; pos >=0;pos--){
        s1.write(pos);
        delay(15);
    }
    for(int pos = 50; pos >=10;pos--){
        s2.write(pos);
        delay(15);
    }
    int i = 5;
}