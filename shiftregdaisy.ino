int latchPin = 11;      
int dataPin = 8;
int clockPin = 10;
// Patterns for characters 0,1,2,3,4,5,6,7,8,9
int numarray[10] = {B11111010, B01100000, B11011100, B11110100, B01100110, B10110110, B10111110, B11100000, B11111110, B11110110};
 

void setup() {
 pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

void loop() {
  for (int n= 0; n< 10; n++){
  for (int i= 0; i< 10; i++)
  {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, numarray[i]);
  shiftOut(dataPin, clockPin, LSBFIRST, numarray[n]);
  digitalWrite(latchPin, HIGH);
  delay(400);
  }

  }
}
