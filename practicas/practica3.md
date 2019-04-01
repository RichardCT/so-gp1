# Objetivo
Crear un nuevo planificador basado en prioridades.
Crear un programa para probarlo.

# Herramientas
* git
* make 
* xv6

# Conceptos

*Planificación
  * Seleccionar el proceso a ejecutar.
  
* Cambio de contexto
  * Cambio que ocurre cuando el cpu deja de ejecutar un proceso y ejecuta otro.
  *Guardar el contexto: Stack pointer, Programa counter.
  
* Estado de un proceso


# Que aprendí
En esta práctica aprendí el tipo de schedulers que puede tener un sistema operativo. Esta el scheduler round robin, el cual es el más sencillo de implementar y el menos común en la industria. Este scheduler toma el primer proceso de la queue ready y le asigna un quantum size, que representa la cantidad de tiempo que el proceso tendrá control del CPU. Finalizado ese tiempo, el proceso se manda a la cola d ela queue ready y se repite el mismo método con el siguiente proceso. Otro tipo de scheduler es el First-Come First-Served que como su nombre indica, se le da prioridad a los procesos por orden de llegada. Y luego está el scheduler por prioridades, el cual le da servicio a los procesos dependiendo de la prioridad que tengan. Este tipo de schedulers fue el que implementamos en el xv6. Además aprendimos que los schedulers pueden ser preempitve o nonpreemptive. Un scheduler preemptive es aquel que permite que un proceso sea interrumpido a media ejecución por otro (como el scheduler Round Robin donde se interrumpe cuando se termina el quantum size), mientras que el nonpreemptive permite que el proceso mantenga el control del CPU hasta que este finalice (como es el caso de FCFS o por prioridades).

También vimos la PCB (Process Control Block), la cual es una tabla de procesos activos. Al explicarnos esta tabla, también revisamos la estructura de memoria que tiene un proceso activo. La memoria de dicho proceso se divide en 3 áreas: memoria de programa, donde se encuentra el código; el stack, donde se encuentran las variables temporales; y el heap, que es memoria de tamaño dinámico asignada en el run-time.


# URL del commit
https://github.com/RichardCT/so-gp1/commit/48a80afdef338ff3e0e4f2bdd796d81ac5c29540

