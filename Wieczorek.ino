int dioda = 13;
int czas = 500;
int czas2 = 1500;
void setup(){
    pinMode(dioda, OUTPUT);
}
void loop(){
    for (int i = 0; i < 3; i = i + 1){
        digitalWrite(dioda, HIGH);
        delay(czas);
        digitalWrite(dioda, LOW);
        delay(czas);
    }

    for (int i = 3; i < 6; i = i + 1){
      	digitalWrite(dioda, HIGH);
        delay(czas2);
        digitalWrite(dioda, LOW);
        delay(czas2);
    }

    for (int i = 6; i < 9; i = i + 1){
      	digitalWrite(dioda, HIGH);
        delay(czas);
        digitalWrite(dioda, LOW);
        delay(czas);


    }
    delay(3000);
  }
