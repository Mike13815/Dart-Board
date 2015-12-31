
void setup() {
  DDRD = B11111111;  //Initialize port D as outputs
  DDRC = B11111111;  //Initialize port C as outputs
}

void loop() {
  PORTD = B10000000;   //Set a high on first pin
  PORTC = B00000000;   //Set binary output to "0"

  PORTD = B01000000;   //Set a high on second pin
  PORTC = B00000010;   //Set binary output to "1"

  PORTD = B00100000;   //Set a high on third pin
  PORTC = B00000100;   //Set binary output to "2"

  PORTD = B00010000;   //Set a high on fourth pin
  PORTC = B00000110;   //Set binary output to "3"

  PORTD = B00001000;   //Set a high on fifth pin
  PORTC = B00001000;   //Set binary output to "4"

  PORTD = B00000100;   //Set a high on sixth pin
  PORTC = B00001010;   //Set binary output to "5"

  PORTB = B00000010;   //Set a high on seventh pin
  PORTC = B00001100;   //Set binary output to "6"

  PORTB = B00000001;   //Set a high on eighth pin
  PORTC = B00001110;   //Set binary output to "7"

}
