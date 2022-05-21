//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int ventas[15][4];
  int nroArt;
  int stock[15];

    for (int i = 0; i < 15; i++)
  {
    stock[i] = 0;
  }

  for (int i = 0; i < 15; i++){
    int cantStock;
    cout << "Ingrese el stock del articulo " << i + 1 << ": ";
    cin >> cantStock;
    stock[i] = cantStock;
  }

  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      ventas[i][j] = 0;
    }
  }

  cout << endl << "************************" << endl << endl;

  cout << "Ingrese el numero del articulo: ";
  cin >> nroArt;

  while(nroArt != 0){
    int cantVendida, nroSuc;

    cout << "Ingrese la cantidad vendida: ";
    cin >> cantVendida;
    cout << "Ingrese el numero de sucursal: ";
    cin >> nroSuc;

    ventas[nroArt - 1][nroSuc - 1] = cantVendida;

    cout << endl << "************************" << endl << endl;
    cout << "Ingrese el numero del articulo: ";
    cin >> nroArt;
  }

  cout << endl << "************************" << endl << endl;

  for (int i = 0; i < 15; i++){
    int totalVenSuc = 0;
    int maxArtSuc = 0;
    int maxArtSucNro;

    for (int j = 0; j < 4; j++){
      totalVenSuc += ventas[i][j];
      if(ventas[i][j] > maxArtSuc){
        maxArtSuc = ventas[i][j];
        maxArtSucNro = j + 1;
      }
    }

    if(totalVenSuc != 0){
      cout << endl << "El articulo " << i +1 << " vendio un total de " << totalVenSuc << endl;
    }
    if((stock[i] - totalVenSuc) < stock[i] / 2){
      cout << "El stock de la articulo " << i + 1 << " se redujo a mas de la mitad" << endl;
    }
    stock[i] -= totalVenSuc;
    if(maxArtSuc !=0){
      cout << "La sucursal en la que mas se vendio fue la " << maxArtSucNro << ", con un total de " << maxArtSuc << " articulos." <<  endl;
    }

  }

  cout << endl << "************************" << endl << endl;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 15; j++)
    {
      if(ventas[j][i] > 15){
        cout << "El articulo " << j + 1 << " de la sucursal " << i +1 << " vendio mas de 15 articulos" << endl;
      }
    }
  }

  for (int i = 0; i < 15; i++)
  {
    if(stock[i] == 0){
      cout << "El stock del articulo " << i + 1 << " quedo en cero (0)" << endl;
    }
  }

  return 0;
}