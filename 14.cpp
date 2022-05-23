//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int vector_1[10];
  int vector_2[5];
  int vector_3[15];
  int cont = 0;

  for (int i = 0; i < 10; i++)
  {
    int n;
    cout << "Ingrese un numero para el vector numero 1: ";
    cin >> n;
    vector_1[i] = n;
    vector_3[cont] = n;
    cont++;
  }
  
  for (int i = 0; i < 5; i++)
  {
    int n;
    cout << "Ingrese un numero para el vector numero 2: ";
    cin >> n;
    vector_2[i] = n;
    vector_3[cont] = n;
    cont++;
  }

  for (int i = 0; i < 15; i++)
  {
    cout << vector_3[i] << endl;
  }
  



  return 0;
}