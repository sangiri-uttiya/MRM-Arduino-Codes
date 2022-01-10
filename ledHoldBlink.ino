int ledPin = LED_PIN;
int switchPin = SWITCH_PIN;
bool buttonState = LOW;

void setup()
{
    pinMode(switchPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    bool buttonState = digitalRead(switchPin);
    if (buttonState == HIGH)
    {
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        delay(500);
    }
    else if (buttonState == LOW)
    {
        digitalWrite(ledPin, LOW);
    }
}