Definir la class

bool A.setValue(unsigned long i, int v): //Karen

//asigna el valor entero v a A[i], para
//0 ≤ i < n, y retorna true. Si i ≥ n, la operaci´on no tiene ning´un efecto sobre el
//arreglo, y retorna false.
int A.getValue(unsigned long i): //Mati
  //retorna el valor entero de A[i], para 0 ≤ i <n. 
  //Si i ≥ n, la operaci´on no tiene efecto sobre el arreglo, pero debe imprimir el
//mensaje “Error de acceso al arreglo” en el stream cerr, y finalizar la ejecuci´on
//del programa con exit(1).
void A.append(int v): //Karen
//agrega una nueva componente A[n] con valor entero v, haciendo crecer el arreglo.
void A.remove(): //Mati
  //elimina A[n − 1] del arreglo, haciendo que ´este decrezca en una
//componente.
unsigned long A.size(): //devuelve n, la cantidad actual de componentes del arreglo


