## Objetivo
Crear dos llamadas a sistema con sus respectivos comandos para apagar y reiniciar.

## Herramientas
* Make
* gcc
* Git

## Conceptos
1) Llamadas a sistema:
* Estas son para acceder al hardware.
* Desde el comando son una interrupción.
* Desde el kernel utilizan el código del hardware específico.

2) Modo Kernel:
* Es el bit para acceder al hardware.
* Se ejecuta cuando prende el hardware.

3) Interrupciones:
* La manera en la que el hardware interactua con el CPU

4) Interrupciones vía Software (trap):
* Software comunica con el kernel, Software->CPU->Kernel.

## Que aprendí:
En esta práctica a prendimos a crear llamadas a sistema. Para lograr esto, aprendimos a añadir las funciones de dichas llamadas al vector de interrupción de nuestro sistema operativo. También aprendimos a crear la función que da servicio a las llamadas a sistema. En este caso, llamamos a una dirección de memoria, la cual contiene las instrucciones de paagar por software y reiniciar la computadora respectivamente para cada nueva llamada a sistema.

URL commit: 
https://github.com/RichardCT/so-gp1/commit/6973d7bcb1e25d629ffa5bd1a7c28c3872262e24
