# Objetivo 

Hacer un spike sobre hilos, semáforos y locks.

# Herramientas
+ git
+ xv6

# Conceptos:

+ Hilos
  * Es un proceso ligero que solo consta de un stack. El código y el heap se comparten con el proceso principal.
  * Pueden ejecutar funciones diferentes. 

+ Semáforo:
  * Es una variable global.
  * Soporta dos operaciones.
    ** Incrementar (sem_post) siempre incrementa en uno.
    ** Decrementar (sem_wait) si el valor del semáforo es mayor que 0, decrementa; si es igual a 0, se suspende.
  * Controlar acceso a recursos.
  
+ Lock:
  * Es una variable global.
  * Soporta dos operaciones.
    ** lock (bloqueo) --> adquirir el lock. Si el lock ya está tomado, el hilo/proceso se suspende.
    ** unlock (desbloquear) --> liberar el lock.
  * Secciones críticas.
  
# Que aprendí:


# URL del commit:
