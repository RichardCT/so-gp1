## Objectivo
Modificar al programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar al programa anterior.

## Herramientas
make
gcc
git

## Conceptos
1) Proceso
* Instancia de un programa.
* Está compuesto de 3 partes: 
** Stack: variables, espacio limitado, crece de arriba hacia abajo, stack overflow.
** Heap: área de memoria dinámica = RAM + SWAP.
** Memoria de código: segmentado.

* Tiene estados
* Se crean mediante dos llamadas a sistema:
** fork: clone.
** exec: cambia código.

* Hay un proceso padre
** init

## Que aprendí
En esta práctica vimos la manera en la que un sistema operativo, a partir de un proceso padre, ejecuta algún programa seleccionado por el usuario. En esta práctica aprendimos que hay dos programas fundamentales para que dicha ejecución suceda: init y sh. Vimos que el programa init es el que inicializa el proceso padre de un sistema operativo, por ende, es el inicializador o la semilla de un sistema operativo. Por el otro lado, revisamos que el programa sh hace una copia o clon del proceso padre (llamado proceso hijo) y cambia el programa a ejecutar. De esta manera, a partir de un proceso padre, el sistema operativo ejecuta las tareas seleccionadas por el usuario. 

También aprendí que el identificador de procesos, pid, necesariamente debe de ser igual a 0 para que un proceso diferente al init se ejecute (es decir, un proceso hijo). 

Durante el proceso de la práctica, el profesor explicó que todo sistema operativo cuenta con un scheduler, el cual prganiza la ejecución de los distintos procesos que necesitan ejecutarse. Vimos tres tipos de schedulers: round robin, el cual es el scheduler más equitativo de todos, pues el scheduler ejecuta de manera secuencial los procesos; el clasificador de procesos, el cual ejecuta los programas dependiendo de las demandas que necesite un proceso, más CPU o más recursos; y por último, el scheduler por prioridas, el cual asigna una prioridad a cada proceso y los ejecuto dependiendo de la prioridad.

Finalmente, aprendí que el programa sh utiliza un buffer para almacenar los procesos que se han ejecutado en el sistema operativo. De esta manera, pudimos lograr la implementación de un proceso que ejecute el proceso anterior.

## URL
https://github.com/RichardCT/so-gp1/commit/ebb8a3ec75a5e4621de1974e497b648dc9f86121
