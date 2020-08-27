#ifndef FUNCIONES_H
#define FUNCIONES_H

class Funciones
{
  public:
    Funciones(){};
    long int sumaIterativa(long int n);
    long int sumaRecursiva(long int n);
    long int sumaDirecta(long int n);
};

long int Funciones::sumaIterativa(long int n)
{
  long int suma = 0;
  for(long int i=1; i<=n; i++)
  {
    suma = suma+i; 
  }
  return suma;
}
long int Funciones::sumaRecursiva(long int n)
{
  if(n==0)
    return 0;
  else
    return n + sumaRecursiva(n-1);
}

long int Funciones::sumaDirecta(long int n)
{
  long int suma =  0;
  long int i = 1;
  while(i<=n)
  {
    suma= suma+i;
    i++;
  }
  return suma;
}

#endif