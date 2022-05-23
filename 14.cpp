//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  const int v1 = 10;
  const int v2 = 5;
  const int v3 = v1 + v2;
  int vector_1[v1];
  int vector_2[v2];
  int vector_3[v3];
  int cont = 0;

  for (int i = 0; i < 10; i++)
  {
    int n;
    cout << "Ingrese un numero para el vector numero 1: ";
    cin >> n;
    vector_1[i] = n;
  }

  for (int i = 0; i < 5; i++)
  {
    int n;
    cout << "Ingrese un numero para el vector numero 2: ";
    cin >> n;
    vector_2[i] = n;
  }

  for (int i = 0; i < 15; i++)
  {
    if(i < v1){
      vector_3[i] = vector_1[i];

    } else {
      vector_3[i] = vector_2[cont];
      cont++;
    }
  }

  for (int i = 0; i < v3; i++)
  {
    cout << vector_3[i] << endl;
  }

  return 0;
}