String voice;
int
relay1 = 11, //Connect RELAY 1 To Pin #2
relay2 = 10 //Connect RELAY 2 To Pin #3
;
//-----------------------------------------------------------------------//
void setup() {
Serial.begin(9600);
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);

digitalWrite(relay1, HIGH);
digitalWrite(relay2, HIGH);
}
//-----------------------------------------------------------------------//
void loop() {
while (Serial.available()){  //
delay(10); //
char c = Serial.read(); //
if (c == '#') {break;} //
voice += c; //
}
if (voice.length() > 0) {

 
//----------kontrol setiap relay dengan perintah---------------//
if(voice == "open") {digitalWrite(relay1, LOW);}
else if(voice == "close") {digitalWrite(relay1, HIGH      );}
//-----------------------------------------------------------------------//
voice="";}} //
