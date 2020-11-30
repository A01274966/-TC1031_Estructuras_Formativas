----------------------------------------------
push

**Análisis de complejidad temporal**

El algoritmo agrega un nuevo elemento al arbol, este lo hace en orden en especifico que es de derecha a izquierda y por niveles de forma acendente a decendente empezando por la raiz. Igualmente el heap nos dice que el padre debe de ser menor a los hijos, de esta forma si el nuevo elemento es mayor a un padre se hara un swap. El nivel de complejidad seria de O(log n) para el peor de los casos.

----------------------------------------------
pop

**Análisis de complejidad temporal**

El algoritmo elimina la raiz del arbol o el valor mas pequeño y lo sustituye con el ultimo valor añadido. Despues de esto se realiza una reorganizacion de los valores para que se mantenga la estructura de min heap. El nivel de complejidad seria de O(log n) para el peor de los casos.

----------------------------------------------
top

**Análisis de complejidad temporal**

El algoritmo consulta el primer elemento del arbol que sería la raiz de este. El nivel de complejidad seria de O(1) para el peor de los casos.

----------------------------------------------
empty

**Análisis de complejidad temporal**

El algoritmo consulta el valor de la variable count que dependiendo si es 0 o no, este dara true o false. El nivel de complejidad seria de O(1) para el peor de los casos.

----------------------------------------------
size

**Análisis de complejidad temporal**

El algoritmo regresa el valor de la variable count, la cual contiene los datos almacenados del tamaño actual del arbol. El nivel de complejidad seria de O(1) para el peor de los casos.

----------------------------------------------
