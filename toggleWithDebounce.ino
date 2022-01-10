int switchPin = SWITCH_PIN;
int ledPin = LED_PIN;
bool lastButton = LOW;
bool currentButton = LOW;
bool ledOn = false;

void setup()
{
	pinMode(switchPin, INPUT);
	pinMode(ledPin, OUTPUT);
}

bool debounce(bool last)
{
	bool current = digitalRead(switchPin);
	if (last != current)
	{
		delay(5);
		current = digitalRead(switchPin);
	}
	return current;
}

void loop()
{
	currentButton = debounce(lastButton);
	if (lastButton == LOW && currentButton == HIGH)
	{
		ledOn = !ledOn;
		lastButton = HIGH;
	}
	lastButton = currentButton;
	digitalWrite(ledPin, ledOn);
}