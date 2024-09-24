
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
     2.  En el siguiente programa se deberá prender de a UN LED POR VEZ.
        Por cada pulsación se deberá apagar el LED prendido y prender el LED más próximo de la derecha.
*/ 
int ledRojo = 3; // definimos los valores de los pines por cada led + el botón
int ledVerde1 = 2;
int ledVerde2 = 4;
int ledAmarillo = 5;
int boton = 6;
int orden = 2; // Variable que va diciendo cual pin se va prendiendo, se inicializa en 2 por ser el pin más bajo. Actuaría cómo contador

int valor; //variable que almacenará el valor que tiene el botón y sirve para prender o apagar botones en el futuro
bool estado = false; // booleano que sirve para que el led solo "acepte" una pulsación
/*orden de los botones:
 * 1° verde1
 * 2° rojo
 * 3° verde2
 * 4° amarillo
 */
void setup() {
pinMode(boton,INPUT);
pinMode(ledRojo, OUTPUT);
pinMode(ledVerde1, OUTPUT); //inicializamos cuales pines son de entrada o salida
pinMode(ledVerde2, OUTPUT);
pinMode(ledAmarillo, OUTPUT);
}

void loop() {
valor = digitalRead(boton); //almacenamos el estado del botón en la variable valor
if(valor == 1 && estado == false){
    digitalWrite(orden, HIGH);
    digitalWrite(orden - 1, LOW);
    estado = true;
    orden ++;
          if(orden == 2){
        digitalWrite(5,LOW);
        } else if( orden >= 6){
               orden = 1;  
      } 

  } else if(valor == 0) {
      estado = false;
    }


}
