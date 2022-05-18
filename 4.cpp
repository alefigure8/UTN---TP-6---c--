//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int numeros[10] = {};
  int n;
  int max;

  for (int i = 0; i < 9; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> n;

    numeros[i] = n;

    if(i == 0 || n > max){
      max = n;
    }
  }

  for (int i = 0; i < 9; i++)
  {
    if(numeros[i] == max){
      numeros[i] = numeros[i+1];
      max = numeros[i+1];
    }
  }

  for (int i = 0; i < 8; i++)
  {
    cout << numeros[i] << endl;
  }

  return 0;
}