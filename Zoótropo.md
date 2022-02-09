# Zoótropo

El zoótropo funciona atraves de una bateria, cables, un potenciometro, resistencias hacer un mecanismo que se conesta con un motor que este se regula su potencia y hacia que lado funciona con unos dos botones unos para la derecha y otro para la derecha y el potenciometro cuanta energia tiene. En el montaje de las piezas solo hubieron dos problemas que gracias al profesor los solucione, que fueron: la conecsion del cable A0 con el potenciometro que no me fije y problemas a la hora de la colocacion del potenciometro en la posicion que se conectara con los demas.

## Codigo

El codigo se escribio de manera adecuada, ademas de algunos errores de ortografia que se solucionaron en su momento todo acabo bien


```C+

const int controlPin1 = 2;
const int controlPin2 = 3;
const int enablePin = 9;
const int directionSwitchPin = 4;
const int onOffSwitchStateSwitchPin = 5;
const int potPin = A0;

int onOffSwitchState = 0;
int previousOnOffSwitchState = 0;
int directionSwitchState = 0;
int previousDirectionSwitchState = 0;

int motorEnabled = 0;
int motorSpeed = 0;
int motorDirection = 1;

void setup(){
  pinMode(directionSwitchPin, INPUT);
  pinMode(onOffSwitchStateSwitchPin, INPUT);
  pinMode(controlPin1, OUTPUT);
  pinMode(controlPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);

  digitalWrite(enablePin, LOW);
}

void loop(){
  onOffSwitchState =
  digitalRead(onOffSwitchStateSwitchPin);
  delay(1);
  directionSwitchState =
  digitalRead(directionSwitchPin);
  motorSpeed = analogRead(potPin)/4;
  if(onOffSwitchState != previousOnOffSwitchState){
    if(onOffSwitchState == HIGH){
      motorEnabled = !motorEnabled;
    }
  }

  if (directionSwitchState !=
  previousDirectionSwitchState) {
  if (directionSwitchState == HIGH) {
    motorDirection = !motorDirection;
  }
  }

  if (motorDirection == 1) {
    digitalWrite(controlPin1, HIGH);
    digitalWrite(controlPin2, LOW);
  }

  else {
    digitalWrite(controlPin1, LOW);
    digitalWrite(controlPin2, HIGH);

  }

  if (motorEnabled ==1) {
    analogWrite(enablePin, motorSpeed);
  }
  else {
    analogWrite(enablePin, 0);
  }

  previousDirectionSwitchState =
  directionSwitchState;
  previousOnOffSwitchState = onOffSwitchState;
}
```

https://github.com/Baelyn1/Arduino/blob/main/IMG_2561.JPG
