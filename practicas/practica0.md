# Practica 0

## Objetivo:
Compilar y correr xv6

## Herramientas:
*gcc -> compilador

*qemu -> maquina virtual

*make -> automatizaciones

## Conceptos:
Un programa esta compuesto de un codigo fuente. Un sistema operativo esta formado por un kernel y de aplicaciones del sistema.

## Que aprendí:
* Aprendí el concepto de la herramienta make, la cual sirve para la gestión de dependencias entre los archivos que componen fuente de un programa que dirigen la compilación de este.
* También revisamos el archivo makefile del repositorio obtenido del MIT. Aprendimos a modificar dicho archivo para correr la máquina virtual qemu dentor de nuestra máquina virtual coreana. El profesor explicó que qemu no tiene interfaz gráfica y que se necesita únicamente un CPU del servidor coreano para correr qemu.
* Corrimos qemu en nuestra máquina virtual y vimos que no tiene función exit. Nuestra tarea de las siguientes clases será crear dicha función, por lo que aprendimos que para apagar una máquina por software, muchas instrucciones se deben de ejecutar.
* Finalmente aprendimos que el compilador (en nuestro caso GCC) recibe un código fuente y genera un programa ejecutable en binario (código objeto).

URL commit: https://github.com/RichardCT/so-gp1/commit/30adc58e2850959eabe20a864c2ccb8154b1707f
