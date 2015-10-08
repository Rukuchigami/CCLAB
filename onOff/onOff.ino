//global variables
int switch1 = 2;
int ledpin = 13;
boolean flag = true;

void setup() {
pinMode(ledpin, OUTPUT);
pinMode(switch1, INPUT_PULLUP);

}//end setup

void loop() {
if(digitalRead(switch1) == LOW){
  delay(5);
  flipflop();
}
}//end void loop

void flipflop(){
  flag = !flag;
  Serial.print("flag =  "); 
  Serial.println(flag);

  if (flag == HIGH){
    digitalWrite(ledpin,HIGH);
  }
  if (flag == LOW){
    digitalWrite(ledpin,LOW);
  }
  while(digitalRead(switch1)==LOW);
  delay(50);
}//end of flipflop

