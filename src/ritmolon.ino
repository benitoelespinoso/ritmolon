
/*

prueba para GITHUB
------------------

  caja de ritmos con 3 solenoides

  se ejecutan 4 ritmos mediante SERIAL

  cada ritmo tiene 3 capas (una por solenoide)


Ejecutar. Enviar comandos por Monitor Serial
----------------------------------------------

 KEY

  1 = tema 1
  2 = tema 2
  3 = tema 3
  4 = tema 4

para cada tema:

  a = capa 1 (A = la silencia)

  s = capa 2 (S = la silencia)

  d = capa 3 (D = la silencia)

  p = para todo


http://benitoelespinoso.com


*/



#include "c_tema.h"


int sol_k1 = sol_1;   // 
int sol_g1 = sol_2;   // 
int sol_a1 = sol_3;   // 

unsigned long interval = 20;        // 	

int _sub = 2;
int pulso = 48;
int compas = 9;
int m_compas = 2;

int uniqIndx = 1;


int ind_pista[4] = {0,0,0,0};
int ind_capa[4] = {0,0,0,0};


// (VARIABLES) auxiliares, de conteo de T, conteo de compases,...
unsigned long previousMillis = 0;        
int var_c = 0;
int var_mc = 0;
int var_p = 0;
int var_s = 0;

int _subIndx = 1;
int pulsoIndx = 1;
int compasIndx = 1;
int m_compasIndx = 1;


int _sub1;
int pulso1;
int compas1;
int m_compas1;

void setup() {
 pinMode(sol_a1, OUTPUT);
 pinMode(sol_g1, OUTPUT);
 pinMode(sol_k1, OUTPUT);

 Serial.begin(9600);
 delay(400);
}




void loop() {

 unsigned long currentMillis = millis();
 if ((unsigned long)(currentMillis - previousMillis) >= interval) {
  _subIndx++;
  previousMillis = currentMillis;
 }

 if (Serial.available()){
  char valor = Serial.read();  
  c_serial(valor);
 }

 int i;
 for (i=0;i<4;i=i+1) {
  pista(ind_pista[i]);      
 }


 f_contador();


} 
