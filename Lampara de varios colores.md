## Pum (Pulse width modulation)

Modulacion por ancho de Pulsos

¿Como 


Tengo un arduino que suministra 5V a un Led

A mayor intensidad de corriente (A)

El LED brilla mas

A menor intensidad de corriente el Led brilla menos (ver ley de OHM)

Si subimos o bajamos el voltaje haremos lo mismo con la intensidad 

Suponiendo que la resistencia del circuito es la misma

Entonces si conecto un LED con su resistencia de 200 veinte 

A un voltaje de 5V o de 3,3V

¿Entonces brillara mas con 5v y menos con 3,3v

Pulsos

Es una señal eléctrica

### Que es un pulso

Un Pulso uso electrico es una señal de voltaje medida en el tiempo.

Los ojos humanos podemos detectar cambios hasta entorno a 12h3 

Apartir de 24 o 30 h3 no somos capaces visualmente

Los Pulsos modulados en ancho

Crean la ilusion de voltajes intermedios entre o y 5v

Para ello usan pulsos muy cortos

Que usaremos a traves de Funcion 

Esta funcion funcionara en Pines con Piln

Los Pines con oinn están marcados con el simbolo en (la tinde de la eñe)

La funcion nos pide 2 cosas 

Por un lado el numero de pinn

Por otro lado un numero entre o y 225

0---- 0% de voltaje

y 255---- 100% de porcentaje (%)

int--- integer o numero entero

significa que nuestra variable es un tipo de dato numerico n odecimal

Le saigna un espacio en memoria

Sting---- cadena de caracteres

Boad---- voreano o falsol

Chaz---- 1 unico caracter

float---- que son numeros decimales






![](https://raw.githubusercontent.com/Baelyn1/Arduino/main/Captura%20de%20pantalla%20de%202021-11-09%2014-04-49.png)


## Codigo:

const int greenLEDPin = 9;

const int redLEDPin = 11;

const int blueLEDPin = 10;

const int redSensorPin = A0;

const int greenSensorPin = A1;

const int blueSensorPin = A2;


int redValue = 0;

int greenValue = 0;

int blueValue = 0;


int redSensorValue = 0;

int greenSensorValue = 0;

int blueSensorValue = 0;

void setup() {

Serial.begin(9600);

  pinMode(greenLEDPin, OUTPUT);

  pinMode(redLEDPin, OUTPUT);

  pinMode(blueLEDPin, OUTPUT);
}

void loop() {

 redSensorValue = analogRead(redSensorPin);
 
 delay(5);
 
 greenSensorValue = analogRead(greenSensorPin);
 
 delay(5);
 
 blueSensorValue = analogRead(blueSensorPin);

 Serial.print("Raw Sensor Values \t Red: ");
 
 Serial.print(redSensorValue);
 
 Serial.print("\t Green: ");
 
 Serial.print(greenSensorValue);
 
 Serial.print("\t Blue: ");
 
 Serial.print(blueSensorValue);

 redValue = redSensorValue/4;
 
 greenValue = greenSensorValue/4;
 
 blueValue = blueSensorValue/4;

 Serial.print ("Mapped Sensor Values \t Red: ");
 
 Serial.print (redValue);
 
 Serial.print ("\t Green: ");
 
 Serial.print (greenValue);
 
 Serial.print ("\t blue: ");
 
 Serial.print (blueValue);

 analogWrite(redLEDPin, redValue);
 
 analogWrite(greenLEDPin, greenValue);
 
 analogWrite(blueLEDPin, blueValue);
 
}


