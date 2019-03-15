
/* this code shows the output of the relay according to the gas sensor and flex sensor
 modified 14 March 2019
 by purnima.B
  
 */


#define relay 13
#define gas_Pin 12
#define flex_Pin A0


int gas_value;
int flex_value;
void setup() {
  
  // put your setup code here, to run once:
 Serial.begin(9600);

pinMode(13,OUTPUT);
pinMode(12,INPUT);
pinMode(A0,INPUT);
}

void loop()
{
  flex_value=digitalRead(flex_Pin);
  gas_value=digitalRead(gas_Pin);
  Serial.println(gas_value);
  Serial.println(flex_value);
  if((gas_value&&flex_value)==1)
  {
    digitalWrite(13, HIGH); 
  Serial.print("IGNITION ON");
  delay(100);
    }
  else
  {
    digitalWrite(13, LOW);   
 Serial.print("IGNITION OFF");
  delay(100);   
  }
  
  // put your main code here, to run repeatedly:

}
