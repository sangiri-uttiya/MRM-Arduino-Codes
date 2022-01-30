int RledPin = R_LED_PIN;
int GledPin = G_LED_PIN;
int BledPin = B_LED_PIN;
int switchPin = SWITCH_PIN;
int count = 0;
bool buttonState = LOW;

void setup()
{
    pinMode(switchPin, INPUT);
    pinMode(RledPin, OUTPUT);
    pinMode(GledPin, OUTPUT);
    pinMode(BledPin, OUTPUT);
}

void loop()
{
    digitalWrite(switchPin, LOW);
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
    buttonState = digitalRead(switchPin);

    if (count > 7)
    {
        count = 1;
    }

    if (buttonState == LOW)
    {
    }
    else
    {
        count++;
        delay(200);
    }

    if (count > 3)
    {
        digitalWrite(RledPin, HIGH);
    }
    else
    {
        digitalWrite(RledPin, LOW);
    }

    if (count == 2 || count == 3 || count == 6 || count == 7)
    {
        digitalWrite(GledPin, HIGH);
    }
    else
    {
        digitalWrite(GledPin, LOW);
    }

    if (count % 2 != 0)
    {
        digitalWrite(BledPin, HIGH);
    }
    else
    {
        digitalWrite(BledPin, LOW);
    }
}