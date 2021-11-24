# Theremin óptico

Un theremin es un instrumento que produce sonido en base a los movvimientos de las manos del músico alrededor del instrumento.
Probablemente hayas escuchado alguno en películas de terror. El theremin detecta dónde están las manos del músico en relación a dos antenas,
leyendo la transformación capacitiva en las antenas.
Estas antenas están conectadas a un circuito analógico que crea el sonido. Una antena controla la frecuencia del sonido, y la otra controla el volumen.
Aunque el Arduino no pueda replicar exactamente los sonidos misteriosos de este instrumento, es posible emularlos usando la función tone(). 
La Figura 1 representa la diferencia entre los pulsos emitidos por analogWrite() y tone(). Esto permite que un transductor, como altavoz o un piezo, 
se mueva hacia delante y hacia atrás a diferentes velocidades.


El codigo es :

int sensorValue;

int sensorLow = 1023;

int sensorHigh = 0;

const int ledPin = 13;

void setup() {

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  
  while (millis() < 5000) {

    sensorValue = analogRead(A0);
    if(sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }

  digitalWrite(ledPin, LOW);
  }

void loop() {
  sensorValue = analogRead(A0);
  int pitch =
  map(sensorValue,sensorLow,sensorHigh, 50, 4000);

  tone(8,pitch,20);
  delay(10);
}

En el proceso de la programacion en arduino se produjeron ubos tres errores menores del tipo de errores de ortografia.

 https://drive.google.com/file/d/1n029gC80UcmxTaZn93llXE8KRqyc6Ydk/view?usp=sharing









## Variante

En la variante que haremos sera una en la que funcionara como un boton de hartware y dandole al software unos ajustes.








### Snippet Kill Switch 

Esto viene de: github.com/chechiliaa/arduino

https://github.com/chechiliaa/arduino/blob/main/snippet_kill_switch.cpp

``` C++

//Colocar en la sección de variables globales.
int switchState = 0;
bool isTheButtonBeingPressed = false;
bool play = false;

int buttonPin = 2;
// Incluir dentro del setup.
pinMode(buttonPin, INPUT);
//Sustituir loop.

void loop() {
  checkButton();
  if (play) {
  // incluir aquí el código a ejecutar   
  }
}

//función checkbutton 
void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH && !isTheButtonBeingPressed){
    play = !play;
    isTheButtonBeingPressed = true;
  }
  
  if (switchState == LOW)
  {
  isTheButtonBeingPressed = false;
  }

}
``` 





Frangmento de código que no funciona por si mismo que sirve para una funcion concreta.

Los snipes se copian, se pegan y, mente se adaptan al código a mano por le programadores.









