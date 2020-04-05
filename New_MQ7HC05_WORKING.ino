#include <SoftwareSerial.h>
SoftwareSerial BTserial(0, 1); // RX | TX


const int AOUTpin=0;//the AOUT pin of the CO sensor goes into analog pin A0 of the arduino
const int DOUTpin=8;//the DOUT pin of the CO sensor goes into digital pin D8 of the arduino


int limit;
int value;

void setup() {
//Serial.begin(9600);//sets the baud rate
pinMode(DOUTpin, INPUT);//sets the pin as an input to the arduino
 BTserial.begin(9600);  


}

void loop()
{
value= analogRead(AOUTpin);//reads the analaog value from the CO sensor's AOUT pin
BTserial.println(value);
        
delay(3000); 
 

}
