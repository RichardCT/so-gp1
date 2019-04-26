# Objetivo 

Hacer un spike sobre IPC: señales, fork/exec, memoria compartida y archivos mapeados a memoria.

# Herramientas
+ git
+ xv6

# Conceptos:

+ IPC
  * Comunicación entre procesos

+ Señales:
  * Es un IPC, consta de un proceos emisor y un receptor. 
  El emisor manda una señal y el receptor deja de hacer lo que está haciendo y ejecuta el código de la señal.
  * Existen varias señales, para listarlas puedo usar el comando kill -l.
  
+ Memoria compartdia:
  * Se crea un bloque de memoria, el bloque de memoria tiene un key.
  * Cualquier proceso con el key se piede conectar al bloque.
  * El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.
  
+ Archivos mapeados a memoria.
  * Es un bloque de memoria compartida que está asocciado a un archivo.
  * Los cambios en el bloque se guardan automáticamente.
  
# Que aprendí:
+ Aprendimos el término de "spike" en programación, que es, un proceso pequeño que sirve para reducir la incertidumbre ante la posible solución de un problema antes de crear un proceso más grande y robusto. Como se mencionó anteriormente, el objetivo de esta práctica fue crear un spike en IPC (Inter-Process Communications). 
+ Para lograr el objetivo, aprendimos la teoría de señales entre procesos, memoria compartida y archivos mapeados a memoria. 
  * La señales entre procesos son como las interrupciones, pues avisan que ocurrió un evento, sin embargo, la diferencia es que una señal modifica el estado de un proceso, por ende modificando su ejecución normal.
  * La memoria compartida es un método de IPC muy usado. Los procesos pueden comunicarse directamente entre sí compartiendo partes de su espacio de direccionamiento virtual, por lo que podrán leer y escribir datos en la memoria compartida. Para lograrlo, se crea un segmento fuera del  espacio  de  direccionamiento  de  un  proceso  y  cada  proceso  que  necesite  acceder  a  dicha  región,  la  incluirá  como  parte de su espacio de direccionamiento virtual. De esta manera todos los procesos pueden acceder a la misma información.
  * Por último vimos que la manera más eficiente de escribir a memoria es con archivos mapeados a memoria. Esto se logra creando una porción de memoria virtual que se correlaciona directamente byte por byte con una dirección física en memoria.
+ Finalmente aprendimos a interpretar programas escritos por 3ros. Específicamente utilizamos la siguiente guía: http://beej.us/guide/bgipc/html/single/bgipc.html. La cual nos sirvió para crear programas demos que cambiaran el estado de un proceso, compartieran memoria y crearan archivos mapeados a memoria.

# URL del commit:
https://github.com/RichardCT/so-gp1/commit/b2fa42e093e9d1b61586cbaefa10249840a2971c

https://github.com/RichardCT/so-gp1/commit/7af217d4506b29815c807cfd624e91a721f2414f
