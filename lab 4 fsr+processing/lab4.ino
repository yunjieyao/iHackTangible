
/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

int potPinLedAll = A0;    // Analog input pin that the potentiometer is attached to
int potValueLedAll = 0;  // value read from the pot

int potPinColor = A1;    // Analog input pin that the potentiometer is attached to
int potValueColor = 0;  // value read from the pot

int potPinBlink = A2;    // Analog input pin that the potentiometer is attached to
int potValueBlink = 0;  // value read from the pot

int ledRed = 9;      // PWM pin that the LED is on.  n.b. PWM 0 is on digital pin 9
int ledGreen = 10;      // PWM pin that the LED is on.  n.b. PWM 0 is on digital pin 9
int ledBlue = 11;      // PWM pin that the LED is on.  n.b. PWM 0 is on digital pin 9

movingText myText;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  // declare the led pin as an output:
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);


}
 
void loop() {
  potValueLedAll = analogRead(potPinLedAll); // read the pot value
  analogWrite(ledRed, potValueLedAll/3);  // PWM the LED with the pot value (divided by 4 to fit in a byte)
  analogWrite(ledGreen, potValueLedAll/3);  // PWM the LED with the pot value (divided by 4 to fit in a byte)
  analogWrite(ledBlue, potValueLedAll/3);  // PWM the LED with the pot value (divided by 4 to fit in a byte)
  delay(100);                     // wait 10 milliseconds before the next loop

 // potValueColor = analogRead(potPinColor); // read the pot value
 // analogWrite(ledRed, potValueColor/2);  // PWM the LED with the pot value (divided by 4 to fit in a byte)
 // analogWrite(ledGreen, potValueColor/4);  // PWM the LED with the pot value (divided by 4 to fit in a byte)
 // analogWrite(ledBlue, potValueColor/3);  // PWM the LED with the pot value (divided by 4 to fit in a byte)
 // Serial.println("change color");      // print the pot value back to the debugger pane
 // delay(10);                     // wait 10 milliseconds before the next loop

  Serial.println(potValueLedAll);
  //int potBlinkSpeed = analogRead(A2);
 // digitalWrite(ledRed, HIGH);
 // delay(potBlinkSpeed);
 // digitalWrite(ledRed, LOW);
  //delay(potBlinkSpeed);
  
 // digitalWrite(ledGreen, HIGH);
//  delay(potBlinkSpeed);
 // digitalWrite(ledGreen, LOW);
 // delay(potBlinkSpeed);
  
 // digitalWrite(ledBlue, HIGH);
  //delay(potBlinkSpeed);
 // digitalWrite(ledBlue, LOW);
 // delay(potBlinkSpeed);
  
}
  
 
