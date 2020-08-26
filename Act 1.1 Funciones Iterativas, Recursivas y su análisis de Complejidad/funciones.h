#include <iostream>
using namespace std;

class Funciones
{
  public:
    int sumaIterativa(int n);
    int sumaRecursiva(int n);
    int sumaDirecta(int n);
};

int Funciones::sumaIterativa(int n)
{
  int suma = 0;
  for(int i=1; i<=n; i++)
  {
    suma = suma+i; 
  }
  return suma;
}
int Funciones::sumaRecursiva(int n)
{
  if(n==0)
    return 0;
  else
    return n + sumaRecursiva(n-1);
}

int Funciones::sumaDirecta(int n)
{
  int suma =  0;
  int i = 1;
  while(i<=n)
  {
    suma= suma+i;
    i++;
  }
  return suma;
}
