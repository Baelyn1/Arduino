# Codigo

En el proceso de programar el codigo del altavoz, no consegui ver por completo lo que se havia escrito y con la ayuda del profesor Prieto que me ayudo a poner las cosas pertinentes en su sitio y alguna que otra correccion menor se consiguio completar la programacion.

```C++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
const int buttonPin=6;
const int pinaltavoz =8;

const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 667;

 
void setup() {
  

 
  pinMode(buttonPin, INPUT);
}


void loop(){
    checkButton();
 if (play) {
    tocarMelodia();
  }

  

}


void tocarMelodia() {
  tocarNota(1,0.5);
  tocarNota(3,2);
  tocarNota(-1,1);
}
 


void tocarNota(int numeroNota, float duracionNota){
 int pin = pinaltavoz;
 int duracionmilisegundos = duracionNegra * duracionNota;
 ///
 if (numeroNota == -1) {
    //tocar un silencio
    noTone(pin);
    delay(duracionmilisegundos);
 }
 else {
   //tocar una nota
 int frecuencia = freqs[numeroNota];
  tone(pin,frecuencia, duracionmilisegundos);
 delay(duracionmilisegundos);
 }
 


}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
 //vuelve al inicio del bucle



# Cancion de Rodolfo el Reno

En el proceso de programar el altavoz para poner la cancion tuvimos problemas para hacer que el tiempo de la cancion sonara como la cancion de Rodolfo el Reno, pero al final despues de poner los espacios pertinentes, se consiguio que sonara apropiadanente.

int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
const int buttonPin=6;
const int pinAltavoz = 8;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 450;

 
void setup() {
  
  
   pinMode(buttonPin, INPUT);
}


void loop(){
    checkButton();
 if (play) {
   tocarMelodia();
  }

}

void tocarMelodia(){
  tocarNota(1,0.5);
  tocarNota(2,1);
  tocarNota(1,0.5);
  tocarNota(1,0.5);
  tocarNota(1,1);
  tocarNota(6,0.5);
  tocarNota(4,0.5);
  tocarNota(2,0.5);
  tocarNota(-1,0.5);
  tocarNota(1,0.5);
  tocarNota(1,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(4,0.5);
  tocarNota(3,1);

  tocarNota(-1,2);
}

void tocarNota(int numeroNota, float duracionNota){
  int pin = pinAltavoz;
  int duracionMilisegundos = duracionNegra * duracionNota;
  
  if (numeroNota == -1){
    noTone(pin);
    delay(duracionMilisegundos);
    
  }
  else { 
   
  int frecuencia = freqs[numeroNota];
  tone(pin,frecuencia,duracionMilisegundos);
  delay(duracionMilisegundos);
  }
}

void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}


