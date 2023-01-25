#include <Servo.h>

Servo LegA1, LegA2, LegA3;
Servo LegB1, LegB2, LegB3;
Servo LegC1, LegC2, LegC3;
Servo LegD1, LegD2, LegD3;

void stand();
void front();
void back();
void left();
void right();
void wave();
void start();

void setup() {
  Serial.begin(9600);
  while (!Serial);
  
  LegA1.attach(7);
  LegA2.attach(8);
  LegA3.attach(9);

  LegB1.attach(13);
  LegB2.attach(2);
  LegB3.attach(3);

  LegC1.attach(4);
  LegC2.attach(5);
  LegC3.attach(6);

  LegD1.attach(10);
  LegD2.attach(11);
  LegD3.attach(12);


}

void loop() {
  if(Serial.available()){
      char command = Serial.read();

      if(command == '1'){
        Serial.println("forward");
        forward();
      }else if(command == '2')
        Serial.println("backward");
      else if(command == '3')
        Serial.println("right");
      else if(command == '4')
        Serial.println("left");
      else if(command == '5'){
        Serial.println("Stand");
        stand();
      }else if(command == '6')
        Serial.println("Wave");
      
  }
}

void stand(){
  LegA1.write(120);
  delay(35);
  LegA2.write(100);//(Crescand o ia in sus, scazand, in jos)
  delay(35);
  LegA3.write(90);
  delay(35);
  
  LegB1.write(60);
  delay(35);
  LegB2.write(80);
  delay(35);
  LegB3.write(90);
  delay(35);
  
  LegC1.write(60);
  delay(35);
  LegC2.write(80);
  delay(35);
  LegC3.write(90);
  delay(35);
  
  LegD1.write(120);
  delay(35);
  LegD2.write(100);
  delay(35);
  LegD3.write(90);
  delay(35);
}

void forward(){
    start();

    delay(300);
    
    LegA1.write(90);
    LegA2.write(110);//(Crescand o ia in sus, scazand, in jos)
    LegA3.write(140);
    delay(100);
    LegA2.write(100);
    LegA1.write(120); 
    
    LegC1.write(90);
    LegC2.write(70);//(Crescand o ia in sus, scazand, in jos)
    LegC3.write(40);
    delay(100);
    LegC2.write(80);
    LegC1.write(60);
    
    LegD1.write(90);
    LegD2.write(110);//(Crescand o ia in sus, scazand, in jos)
    LegD3.write(40);
    delay(100);
    LegD2.write(100);
    LegD1.write(120);
    
    LegB1.write(90);
    LegB2.write(70);//(Crescand o ia in sus, scazand, in jos)
    LegB3.write(140);
    delay(100);
    LegB2.write(80);
    LegB1.write(60);
    
    LegA3.write(90);
    LegB3.write(90);
    LegC3.write(90);
    LegD3.write(90);

}

void start(){
    LegC1.write(90);
    LegC2.write(70);//(Crescand o ia in sus, scazand, in jos)
    LegC3.write(60);
    delay(100);
    LegC2.write(80);
    LegC1.write(60);

    LegB1.write(90);
    LegB2.write(70);//(Crescand o ia in sus, scazand, in jos)
    LegB3.write(120);
    delay(100);
    LegB2.write(80);
    LegB1.write(60);
    
    LegD1.write(90);
    LegD2.write(110);//(Crescand o ia in sus, scazand, in jos)
    LegD3.write(60);
    delay(100);
    LegD2.write(100);
    LegD1.write(120);
    delay(300);
    LegA1.write(90);
    LegA2.write(110);//(Crescand o ia in sus, scazand, in jos)
    LegA3.write(120);
    delay(100);
    LegA2.write(100);
    LegA1.write(120);  
  
}
