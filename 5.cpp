//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int numeros [10];
  int n;

  for (int i = 0; i < 9; i++){
    cout << "Ingresar un numero: ";
    cin >> n;

    numeros[i] = n;
  }

  cout << "Ingresar otro numero: ";
  cin >> n;
  numeros[9] = n;
  int siguiente;

  for (int i = 0; i < 10; i++)
  {
    if(n < numeros[i] || i == 9){
      siguiente = numeros[i];
      numeros[i] = n;
      n = siguiente;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    cout << numeros[i] << endl;
  }

  return 0;
}