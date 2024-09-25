void setup() 
{
  int8_t zahl1 = 126;
  int8_t zahl2 = 0b01010100;
  int8_t zahl3 = 0x54;

  Serial.begin (9600);

  Serial.println (zahl1);
  Serial.println (zahl1, BIN);
  Serial.println (zahl1, HEX);

  Serial.println ();

  Serial.println (zahl2);
  Serial.println (zahl2, BIN);
  Serial.println (zahl2, HEX);

  Serial.println ();

  Serial.println (zahl3);
  Serial.println (zahl3, BIN);
  Serial.println (zahl3, HEX);
}

void loop() 
{
 

}


