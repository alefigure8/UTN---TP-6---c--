//Nombre: NOMBRE
//TP Nº 6
//EJ Nº 3
//Comentarios: Hacer un programa donde se carguen 15 números enteros y luego muestre por pantalla el mínimo elemento del vector y además indique cuántas veces se repite el valor mínimo dentro del vector.

#include <iostream>
#include <vector>
using namespace std;

int main (void){

  vector<int> numeros;
  int minVec;
  int repetidos = 0;

  for (int i = 0; i < 15; i++)
  {
    int n;
    cout << "Ingrese un número: " << endl;
    cin >> n;
    numeros.push_back(n);

    if(i == 0 || n < minVec){
      minVec = n;
    }
  }

   for (int i = 0; i < numeros.size(); i++)
  {
    if(numeros[i] == minVec){
      repetidos++;
    }
  }

  cout << "El numero menor es " << minVec << " y se repite unas " << repetidos << " de veces" << endl;

  return 0;
}