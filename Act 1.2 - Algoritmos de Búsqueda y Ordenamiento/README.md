----------------------------------------------
ordenaSeleccion

**Análisis de complejidad temporal**

Consiste en encontrar el menor de todos los elementos del arreglo o vector e intercambiarlo con el que está en la primera posición. Luego el segundo mas pequeño, y así sucesivamente hasta ordenarlo todo. Su complejidad temporal es O(n^2) para el peor de los casos.

----------------------------------------------
ordenaBurbuja

**Análisis de complejidad temporal**

Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, intercambiándolos de posición si están en el orden equivocado. Cada pasada a lo largo de la lista ubica el siguiente valor más grande en su lugar apropiado. Su complejidad temporal es O(n^2) para el peor de los casos.

----------------------------------------------
ordenaMerge

**Análisis de complejidad temporal**

El algoritmo funciona recursivamente, funciona dividiendo un array hasta tener un elemento en cada array, luego lo compara con el elemento que esta a su lado segun corresponda y lo situara donde corresponde. Su complejidad temporal es O(n log(n)) para el peor de los casos.

----------------------------------------------
busqSecuencial

**Análisis de complejidad temporal**
Consiste en una busqueda comenzando en el primer ítem de la lista, simplemente nos trasladamos de un numero a otro, siguiendo el orden secuencial subyacente hasta que encontremos lo que buscamos o nos quedemos sin numeros. Su complejidad temporal es O(n) para el peor de los casos.

----------------------------------------------
busqBinaria

**Análisis de complejidad temporal**

Consiste en dividir el array por su elemento medio en dos subarrays más pequeños y comparar el elemento con el del centro. Si coniciden, la busqueda terminara. Si el elemento es menor, esta en el primer subarray y si es mayor, está en el segundo subarray. Su complejidad temporal es O(log(n)) para el peor de los casos
