int ledPin = LED_PIN;
int switchPin = SWITCh_PIN;
bool buttonState = false;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(switchPin, INPUT);
}

void loop()
{
    bool buttonState = digitalRead(switchPin);
    if (buttonState == HIGH)
    {
        digitalWrite(ledPin, HIGH);
    }
    else if (buttonState == LOW)
    {
        digitalWrite(ledPin, LOW);
    }
}