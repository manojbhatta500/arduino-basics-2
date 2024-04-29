void setup() {
  // put your setup code here, to run once:

  pinMode(12,INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

// this is the example of thing 
// pinmode is used to access the pins 
// serial is kind of debug console of this 
// digitalRead is used to read
// digitalWrite is used to write
// complete
void loop() {
  // put your main code here, to run repeatedly:

   int value = digitalRead(12);

   Serial.println(value);

   digitalWrite(13,value);


}
