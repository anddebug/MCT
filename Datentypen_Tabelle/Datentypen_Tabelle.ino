

void setup() 
{
  Serial.begin (9600);

  Serial.println ("Bitmuster\tint8_t");
  
  for (int i = 0; i <= 255; i++)
    {
      Serial.print (i, BIN);

      if (i <= 127)
      {
        Serial.print ("\t\t");
      }
      else
      {
        Serial.print ("\t");
      }

      Serial.println ((int8_t) i);
    }
}

void loop()
{}

