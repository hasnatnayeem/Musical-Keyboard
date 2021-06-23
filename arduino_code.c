const int buzzer = 11;  

void setup()
{
    // Setting up input/output
    pinMode(buzzer, OUTPUT);    

    pinMode(10, INPUT);
    pinMode(9, INPUT);
    pinMode(8, INPUT);
    pinMode(7, INPUT);
    pinMode(6, INPUT);
    pinMode(5, INPUT);
    pinMode(4, INPUT);
    pinMode(3, INPUT);
    pinMode(2, INPUT);
    pinMode(1, INPUT);
    pinMode(0, INPUT);    
    
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(0, HIGH);    
}

void loop()
{
    // Checking which button is pressed
    // Playing different musical note for different switch

    if (digitalRead(10) == LOW)
    {
        tone(buzzer, 3136);
    }
    else if (digitalRead(9) == LOW)
    {
        tone(buzzer, 2794);
    }
    else if (digitalRead(8) == LOW)
    {
        tone(buzzer, 2637);
    }
    else if (digitalRead(7) == LOW)
    {
        tone(buzzer, 2349);
    }
    else if (digitalRead(6) == LOW)
    {
        tone(buzzer, 2093);
    }
    else if (digitalRead(5) == LOW)
    {
        tone(buzzer, 1976);
    }
    else if (digitalRead(4) == LOW)
    {
        tone(buzzer, 1760);
    }
    else if (digitalRead(3) == LOW)
    {
        tone(buzzer, 1568);
    }
    else if (digitalRead(2) == LOW)
    {
        tone(buzzer, 1397);
    }
    else if (digitalRead(1) == LOW)
    {
        tone(buzzer, 1319);
    }
    else if (digitalRead(0) == LOW)
    {
        tone(buzzer, 1175);
    }
    else
    {
       noTone(buzzer);
    }
}
