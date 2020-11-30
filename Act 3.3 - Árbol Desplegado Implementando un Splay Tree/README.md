----------------------------------------------
add

**Análisis de complejidad temporal**

El algoritmo agrega un nuevo elemento al arbol, este entra al arbol sigueindo el ordenamiento de splay. Este se comportara de la misma manera que un BST pero los elementos que se van agregando pasan a ser la raiz del arbol. Ya que recorre todo el arbol su analisis de complejidad seria de O(log n). 

----------------------------------------------
remove

**Análisis de complejidad temporal**

El algoritmo elimina un elemento del arbol, al hacer esto el arbol se reorganiza siguiendo las condiciones de splay y por lo tanto de un BST. Igualmente como el caso anterior, este no recorre todo el arbol asi que su analisis de complejidad seria de O(log n).

----------------------------------------------
find

**Análisis de complejidad temporal**

El algoritmo hace una busqueda por el arbol dependiendo del valor proporcionado, dependiendo si existe o no dicho valor se regresa un dato tipo boolean que sera true o false. Dado que en la busqueda no se recorre todas las ramas del arbol su analisis de complejidad seria de O(log n).

----------------------------------------------
inorder

**Análisis de complejidad temporal**

El algoritmo ordena todos los elementos del arbol y los imprime en forma de string. Ya que se tiene que recorrer todos los elementos su analisis de complejidad seria lineal o O(n).

----------------------------------------------
size

**Análisis de complejidad temporal**

El algoritmo regresa el valor de la variable tamano, la cual contiene los datos almacenados del tamaño actual del arbol. El nivel de complejidad seria de O(1) para el peor de los casos.

----------------------------------------------
