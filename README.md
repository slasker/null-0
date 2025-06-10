# null-0
Ficha tecnica e información en torno a la obra null-0


null-0 es una obra escultorica/medial/instalativa consistente de dos partes, por un lado 4 display de siete segmentos, unidos a traves de alambre galbanizado el cual, conectados a un arduino bare-bones (atmega328 en una placa preperforada), el cual tambien contiene un pequeño buzzer; la otra parte es un tripode de madera que sostiene el display y el atmega328
![Imagen de WhatsApp 2025-06-02 a las 13 59 32_fb9e94e9](https://github.com/user-attachments/assets/d288a90f-19ae-4cf5-89a6-0b414b9f21fe)

![Imagen de WhatsApp 2025-06-02 a las 13 59 27_1dff0465](https://github.com/user-attachments/assets/e14b1cf3-c447-42bc-b054-1aeb098c51cc)

#####################-rebuild

Lamentablemente en el transcurso del tiempo el componente de alambre y displays sufrio su rotura debido a un mal manejo

![Imagen de WhatsApp 2025-06-02 a las 14 02 11_0b480e27](https://github.com/user-attachments/assets/49f7f0da-b799-4f45-bcfc-02bb67bb8714)

Lo siguiente es una guia con recomendaciones sobre la re construcción del aparato:

0.- Armar Arduino Barebones en un protoboard. Una vez armado el Arduino probar la comunicación USB a TTL cargando un sketch sencillo. 
Se deja el siguiente enlace de referencia, sientase libre de buscar cualquier otro apoyo bibliografico para la consecusión del proyecto.

https://docs.arduino.cc/retired/hacking/hardware/building-an-arduino-on-a-breadboard/

1.- Subir sketch a arduino Barebones (en protoboard) controlando 1 display 7 segmentos

2.- Subir sketch a arduino Barebones (en protoboard) controlando los 4 display 7 segmentos. 
En este punto se recomienda encarecidamente anotar el orden de los pines de arduino para el control de los display para despues poder replicarlo a la hora de soldar

3.- reconstruir arduino barebones en placa preperforada cuidando de dejar el espacio suficiente para soldar las partes más largas del alambre. 
Mucho cuidado porque esto implica soldar por detras y por delante, además de extender algunos pines del atmega en otras areas para poder calzar con los pines de los 7 segmentos

3.- Una vez armado arduino barebones subir sketch de prueba, una vez realizada la prueba, subir sketch de control de los 4 display. 

4.- Para comenzar a unir los display 7 segmentos, se recomienda lo siguiente:
unirlos entre ellos a traves del comun (GND o VCC dependiendo del modelo de display)

![esquem](https://github.com/user-attachments/assets/df743af6-992d-446a-8233-81d965d784e4)

disponerlos de manera alternada dejando uno adelante y otro un poco más atras:

display 1  display2  display 3   display 4
---------           -----------
          ---------             -----------

Esto facilitara posteriormente la soldadura de los alambres, facilitando que estos no se topen entre ellos.

5.- Comenzar a soldar los pines de los display con los alambres, primero soldar los alambres a los display, y solo al final comenzar a unir con arduino barebones. 

6.- Una vez unido todo, es necesario soldar las partes que van a la base de madera, entre ellas hay un par que baja desde la placa preperforada hacia la pieza de madera,
en este segmento es necesario soldar el jack de poder.


![jack_corrient](https://github.com/user-attachments/assets/55a3d4d2-9010-4b4b-9742-0289cb9338e6)

7.- Una vez todo soldado probar enchufar y echar andar para testear. 


