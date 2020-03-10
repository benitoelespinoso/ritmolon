# ritmolon
Sobre el instrumento de percusión robótica y secuenciador de ritmos


**INTRO**

El ritmolón es un secuenciador de ritmos y sonidos (pero fundamentalmente golpes rítmicos)


[![Una muestra del Ritmolón](https://img.youtube.com/vi/JDnHeRFszOw/0.jpg)](https://youtu.be/JDnHeRFszOw "Una muestra del Ritmolón")


Se usa una placa arduino.
Se conectan solenoides.

Los solenoides suelen golpear objetos físicos: 
* altavoces
* latas, chapas metálicas
* una botella
* piezas de madera....

Estos objetos van provistos de piezoeléctrico. Así que se recoge el sonido de cada golpe individualmente. Se mezclan en una mesa. Y ya tenemos nuestro secuenciador rítmico.

He aquí algunas fotos 

![Ritmolon](img/rit_1.png "Ritmolon")


Por ultimo, a través de un portátil conectado a la placa, a través de la comunicación por serial, interactuamos con el instrumento: le cargamos los diferentes ritmos, añadimos modificaciones sobre éstos ritmos, pausamos todo, aumentamos/disminuimos la velocidad de ejecución del ritmo...
