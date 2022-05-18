//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int n;
  int pos[100] = {};
  int nega[100] = {};
  int contPos = 0;
  int contNega = 0;

  srand(time(0));

for (int i = 0; i < 99; i++){

  n = rand() % (100 - (-100)) + (-100);

  if(n > 0){
    pos[contPos] = n;
    contPos++;
  }

  if( n < 0 ) {
    nega[contNega] = n;
    contNega++;
  }
}

cout << "Poisitivos " << contPos << endl;

for (int i = 0; i < contPos; i++)
{
  cout << pos[i] << endl;
}

cout << "Negativos " << contNega << endl;

for (int i = 0; i < contNega; i++)
{
  cout << nega[i] << endl;
}

  return 0;
}