//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int numero;
  int numeros [99];

  cout << "Elija un numero entre 0 y 99: ";
  cin >> numero;

  srand(time(0));

  while(numero != -1){

  if(numeros[numero] != 1 && numero < 99){
    numeros[numero] = 1;
  } else {
    cout << "El número no se encuentra disponible para la venta. ";
  }

  cout << "Elija un numero entre 0 y 99: ";
  cin >> numero;
  }

  int primero;
  int segundo;
  int banderaPrimero = 0;
  int banderaSegundo = 0;
  int primerPremio = 0;
  int segundoPremio = 0;

  primero = rand()%(100 - 1) + 1;
  segundo = rand()%(100 - 1) + 1;

  do {
    segundo = rand()%(100 - 1) + 1;
  } while (primero == segundo);

  int totalVendidos = 0;

  for (int i = 0; i < 99; i++)
  {
    if(numeros[i] == 1){
      totalVendidos += 1;
    }

    if(numeros[i] == 1 && i == primero){
      banderaPrimero = 1;
      primerPremio = 30000;
    }

    if(numeros[i] == 1 && i == segundo){
      banderaSegundo = 1;
      segundoPremio = 5000;
    }
  }

  int totalRecaudado = totalVendidos * 500;

  cout << endl << "====================" << endl;
  cout << "El total recaudado por las ventas es de $" << totalRecaudado << endl;
  cout << "El porcentaje de numeros no vendidos es de: " << (100 - totalVendidos) << "%" << endl;

  if(banderaPrimero != 1){
    cout << "El primer premio es para el numero " << primero << " y no fue elegido" <<  endl;
  } else{
    cout << "El primer premio es para el numero " << primero <<  endl;
  }

  if(banderaPrimero != 1){
    cout << "El segundo premio es para el numero " << segundo << " y no fue elegido" <<  endl;
  } else{
    cout << "El segundo premio es para el numero " << segundo << endl;
  }

  int ganancias = totalRecaudado - primerPremio - segundoPremio;

  if(ganancias < 0){
    cout << "Las perdidas fueron de $" << ganancias << endl;
  } else {
    cout << "Las ganancias fueron de $" << ganancias << endl;
  }
  cout << endl << "====================" << endl;

  return 0;
}