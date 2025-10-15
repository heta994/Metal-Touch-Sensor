int AInput = A0;/*Analog Input from sensor
taken at A0 pin of Arduino*/
int DInput = 3;/*Digital Input from sensor
taken at 3 pin of Arduino*/
void setup (){
pinMode (AInput, INPUT);/*Setting the pin
to take INPUT*/
pinMode (DInput, INPUT);/*Setting the pin
to take INPUT*/
Serial.begin (9600);/*Setting the baud rate
of communication be 9600*/
}
void loop (){
float analogValue;
/*Defining the variable "analogValue" */
int digitalValue;
/*Defining the variable "digitalValue" */
/* Current value will be read and converted
to the voltage*/
analogValue = analogRead (AInput) * (5.0 /
1023.0);/*Reading the analog value from
sensor and converting it to Volts*/
digitalValue = digitalRead (DInput);
/*Reading the digital value from the sensor
and outputted here*/
Serial.print ("Analog voltage value:");
Serial.print (analogValue);
Serial.print ("V, ");
Serial.print ("Touch input:");
if(digitalValue==1)/*if the digtial read
value from the sensor = 1*/
{
 Serial.println (" detected"); /*print
on screen - detected*/
}
else{
 Serial.println (" not detected");
/*otherwise, print on screen - non detected
*/
}
Serial.println ("---------------------");
delay (250);
}
