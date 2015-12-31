const int   X1 =  2;              //To dart board
const int   X2 =  3;              //To dart board
const int   X3 =  4;              //To dart board
const int   X4 =  5;              //To dart board
const int   X5 =  6;              //To dart board
const int   X6 =  7;              //To dart board
const int   X7 =  8;              //To dart board
const int   X8 =  9;              //To dart board
const int   X9 = 10;              //To dart board
const int  X10 = 11;              //To dart board
const int  X11 = 12;              //To dart board
const int  Alert = 13;                //To PISO shift register, Shift/Load. Also to game, telling it an event has occurred
const int  Binary0 = A0;              //To PISO shift register, binary input
const int  Binary1 = A1;              //To PISO shift register, binary input
const int  Binary2 = A2;              //To PISO shift register, binary input
const int  Binary3 = A3;              //To PISO shift register, binary input
int        val =  1;              //The state of each pin gets stored here before being checked

void setup() {

  pinMode(Alert, OUTPUT);             //This is an alert pin. When this goes high, it means something has struck the dart board.
  pinMode(X11, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode(X10, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X9, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X8, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X7, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X6, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X5, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X4, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X3, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X2, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  pinMode( X1, INPUT_PULLUP);     //This is one of the sensor pins going to the dart board. They are pulled high internally via a 50K ohm resistor.
  DDRC = B11111111;               //This initializes the analog pins as outputs. I believe it is also required for them to work in parallel, but I have not confirmed.
}


void loop() {

  val = digitalRead(X1);          //Read X1, the first row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00000100;            //Set the binary out ports (Analog Pins) to the value of 1
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X2);          //Read X2, the second row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00001000;            //Set the binary out ports (Analog Pins) to the value of2;
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X3);          //Read X3, the third row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00000011;            //Set the binary out ports (Analog Pins) to the value of 3;
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X4);          //Read X4, the fourth row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00000100;            //Set the binary out ports (Analog Pins) to the value of 1
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X5);          //Read X5, the fifth row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00010100;            //Set the binary out ports (Analog Pins) to the value of 5
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X6);          //Read X6, the sixth row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00011000;            //Set the binary out ports (Analog Pins) to the value of 6
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X7);          //Read X7, the seventh row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00011100;            //Set the binary out ports (Analog Pins) to the value of 7
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X8);          //Read X8, the eigth row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00100000;            //Set the binary out ports (Analog Pins) to the value of 8
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X9);          //Read X9, the ninth row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00100100;            //Set the binary out ports (Analog Pins) to the value of 9
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X10);         //Read X10, the tenth row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00101000;            //Set the binary out ports (Analog Pins) to the value of 10
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
  val = digitalRead(X11);         //Read X11, the eleventh row coming from the dart board. Store it to variable "val".
  if (val == LOW) {              //Since the value was stored to variable "val", check to see if it was low. Since it is pulled high, a low means an event occurred.
    PORTC = B00101100;            //Set the binary out ports (Analog Pins) to the value of 11
    digitalWrite(Alert, HIGH);       //Clocks once, alerting that an event was registered
    delayMicroseconds(1);         //Increase this delay if the device receiving the event alert is having problems seeing it. It should be active high.
    digitalWrite(Alert, LOW);        //Resets the alert pin.
    delay(1000);                  //This delay is to ignore any other inputs for atleast a second. This acts as a debounce.
    PORTC = B00000000;           //Resets the binary out port (analog pins) to all zeros.
    val = 1;
  }
}

