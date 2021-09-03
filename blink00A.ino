// Primitiv-Test Blinken LED
/* So geht ein Kommentar über mehrere Zeilen!
Ja, so geht das!
Es sind 3 Zeilen. */


int ledPin = 13;

void setup() {
    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    Serial.println("++++++++  ");
}
