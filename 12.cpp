//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int provincias[24];
  int region;
  int regionesCant[9];

  for (int i = 0; i < 9; i++)
  {
    regionesCant[i] = 0;
  }

  for (int i = 0; i < 24; i++)
  {
    provincias[i] = 0;
    cout << "Ingrese la region para la provincia " << i + 1 << ":";
    cin >> region;
    provincias[i] = region;
  }

  for (int i = 0; i < 24; i++)
  {
    regionesCant[provincias[i]-1] += 1;
  }

  cout << endl << "===========================" << endl << endl;
  for (int i = 0; i < 9; i++)
  {
    if(regionesCant[i] >= 3) {
      cout << "La region " << i + 1 << " tiene " << regionesCant[i] << " provincias"<< endl;
    }
  }

  return 0;
}