# Analog Read

El analog Read es un ultimetro 

A0--- cuanto voltaje hay?

Por diguital

PIN 2 ¿Cuantos hay:
5v




int notes[] = {262,294,330,349};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int KeyVal = analogRead(A0);

  Serial.println(KeyVal);

if(KeyVal == 1023){
  tone(8, notes[0]);
}
  else if(KeyVal >= 990 && KeyVal <= 1010){
    tone(8, notes[1]);
  }
  else if(KeyVal >= 505 && KeyVal <= 515){
    tone(8, notes[2]);
  }
  else if(KeyVal >= 5 && KeyVal <= 10){
    tone(8, notes[3]);
  }

  else{
    noTone(8);
    
  }
  }

