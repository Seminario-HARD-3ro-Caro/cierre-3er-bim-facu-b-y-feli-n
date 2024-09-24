
// Ejercicio evaluatorio 3er bimestre
/*
  Integrantes
    Nombre: Facundo
    Apellido: Benavente
    Curso: 3°D
    
    Nombre: Felipe 
    Apellido: Novella
    Curso: 3°D
  
Congisgnas
  Conexionado:
    En la protoboard, conectar 4 LEDs para que cada uno pueda ser controlado individualmente. Cada LED deberá tener su respectiva resistencia.
    Se debe conectar tambien, un pulsador que permita recibir información de un usuario.
    Indicar a continuación los pines a los cuales se conectó cada elemento y el valor de resistencias utilizado:
      Pines:
        Boton:
       LED1:2
        LED2:3
        LED3:4
        LED4:6
      Valor:
        R_boton: 820k Ohms 5%
        R_LEDs: 330 Ohms 1%

  Progamas:
    Se deben entregar un programa distinto por cada punto. Los programas son una modificación entre ellos.
    El código deberá estar comentado indicando qué se propone hacer con cada línea de código
    1.  El primer programa sirve para corroborar la correcta conexión de los elementos de hardware.
        El mismo deberá encender TODOS los LEDs cuando se presione el pulsador y apagarlos cuando éste se suelte.

*/ 
int ledRojo = 3; // definimos los valores de los pines por cada led + el botón
int ledVerde1 = 2;
int ledVerde2 = 4;
int ledAmarillo = 5;
int boton = 6;

int valor; //variable que almacenará el valor que tiene el botón y sirve para prender o apagar botones en el futuro
void setup() {
pinMode(boton,INPUT);
pinMode(ledRojo, OUTPUT);
pinMode(ledVerde1, OUTPUT); //inicializamos cuales pines son de entrada o salida
pinMode(ledVerde2, OUTPUT);
pinMode(ledAmarillo, OUTPUT);
}

void loop() {
valor = digitalRead(boton); //almacenamos el estado del botón en la variable valor
digitalWrite(ledRojo, valor);
digitalWrite(ledVerde1, valor);
digitalWrite(ledVerde2, valor);
digitalWrite(ledAmarillo, valor);//le damos el valor de valor a cada pin (si el botón esta en HIGH entonces los leds tambien)


}
