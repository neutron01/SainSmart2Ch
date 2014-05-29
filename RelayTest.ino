/*
 Relay test
 Tests two relays for singly on and all on
 from conversation with Jonathan Wallick and negative logic
 modified Raul Ocampo
 moddate 5/27/2014
*/

/* Circuit
  SainSmart 2-Channel 5V, 20-018-100
  Vcc Module -> 5V DC power
  IN1 Module -> Uno pin 6
  IN2 Module -> Uno pin 7
  Gnd Module -> 5V Gnd, Uno Gnd
*/
const int PINREL1 = 6;
const int PINREL2 = 7;
const int SECOND = 1000;

void setup()
{
  pinMode(PINREL1, OUTPUT);
  digitalWrite(PINREL1, HIGH);
  pinMode(PINREL2, OUTPUT);
  digitalWrite(PINREL2, HIGH);
}
  
void loop()
{
  digitalWrite(PINREL1, LOW);
  delay(SECOND);
  digitalWrite(PINREL1, HIGH);
  delay(2*SECOND);
  digitalWrite(PINREL2, LOW);
  delay(SECOND);
  digitalWrite(PINREL2, HIGH);
  delay(2*SECOND);
  digitalWrite(PINREL1, LOW);
  digitalWrite(PINREL2, LOW);
  delay(SECOND);
  digitalWrite(PINREL1, HIGH);
  digitalWrite(PINREL2, HIGH);
  delay(2*SECOND);
}

