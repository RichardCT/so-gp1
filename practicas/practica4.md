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

# URL del commit:
https://github.com/RichardCT/so-gp1/commit/b2fa42e093e9d1b61586cbaefa10249840a2971c

