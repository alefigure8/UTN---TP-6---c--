//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  const int v1 = 5;
  const int v2 = 10;
  const int v3 = v1 + v2;
  int vector_1[v1];
  int vector_2[v2];
  int vector_3[v3];
  int cont = 0;

  for (int i = 0; i < v3; i++)
  {
    vector_3[i] = 0;
  }
  

  for (int i = 0; i < v1; i++)
  {
    int n;
    cout << "Ingrese un numero para el vector numero 1: ";
    cin >> n;
    vector_1[i] = n;
  }

  for (int i = 0; i < v2; i++)
  {
    int n;
    cout << "Ingrese un numero para el vector numero 2: ";
    cin >> n;
    vector_2[i] = n;
  }

  for (int  i = 0; i < v1; i++)
  {
    for (int j = 0; j < v2; j++)
    {
      if(vector_1[i] == vector_2[j]){
        vector_3[cont] = vector_1[i];
        cont++;
      }
    }
  }

  for (int i = 0; i < cont; i++)
  {
    cout << vector_3[i] << endl;
  }

  return 0;
}