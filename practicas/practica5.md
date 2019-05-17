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
  * Aprendí que un hilo es un proceso ligero que se desprende de un proceso principal. Estos son convenientes para evitar el peso y la lentitud de crear un proceso para una acción simple o que se necesita velocidad. Hay muchos modelos de hilos: muchos a uno, que muchos hilos apuntan a un solo proceso; uno a uno, que un hilo apunta a un solo proceso; y muchos a muchos, en el cual muchos hilos apuntan a muchos otros procesos.
  * Aprendí que un hilo solo tiene stack para variables globales y comparte el heap y la memoria de código con el proceso principal. Esta memoria compartida es parte del Protocolo de Comunicaciones entre procesos, pues al tener memoria compartida, los hilos pueden compartir información entre ellos.
  * Al tener memoria compartida, existen diferentes situaciones de riesgo que hacen que una acción pueda no terminar de la manera adecuada. Existe la condición de carrera, en la cual el resultado dependerá de que hilo modificó una variable compartida primero. Si un segundo hilo intenta modificar una variable mientras otro hilo la está modificando, el resultado no podrá ser predecido.
  * Al igual que la condición de carrera, existe el riesgo de un deadlock. Esto ocurre cuando dos hilos o procesos necesitan utilizar variables que están en control del otro, por lo que esperan eternamente. Hay diferentes maneras de prevenir deadlocks, como procesos "pre-emptive" o semáforos.
  * Finalmente aprendí acerca del sistema de archivos de Linux. La estrucutra de datos que utiliza el sistema de archivos de UNIX se llama i-node. Además de que aprendimos que un archivo es una representación lógica de como se acomoda información en memoria. Es por eso que las funciones cambiar directorio y eliminar son bastante rápidas, pues únicamente se cambia la información de donde "se supone que está guardado el archivo" a nivel de software.
  *Pd: aprendimos a resolver el problema de la cena de los filósofos, la cual se obtiene por medio de la implementación de un semáforo que cuenta el número de recursos que los filósofos están utilizando.

# URL del commit:
https://github.com/RichardCT/so-gp1/commit/f9e9b2aebc80ed4420ccd4e10516db96900fd4e9
