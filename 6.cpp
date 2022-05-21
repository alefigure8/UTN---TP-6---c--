//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int registro[100][4];
  int nroEntrenamiento;
  int cont = 0;

  cout << "Numero de entrenamiento: ";
  cin >> nroEntrenamiento;

  while(nroEntrenamiento != 0){

    int cliente, entrenamiento, tiempo;

    cout << "Cliente: ";
    cin >> cliente;
    cout << "Tipo de entrenamiento: ";
    cin >> entrenamiento;
    cout << "Tiempo de entrenamiento: ";
    cin >> tiempo;

    registro[cont][0] = nroEntrenamiento;
    registro[cont][1] = cliente;
    registro[cont][2] = entrenamiento;
    registro[cont][3] = tiempo;

    cont++;

    cout << "Numero de entrenamiento: ";
    cin >> nroEntrenamiento;

  }

  int registroCliente[20][4] = {};
  int nuevoCont = 0;

  for (int i = 0; i < cont; i++)
  {
    int bandera = 0;
    for (int j = 0; j < nuevoCont + 1; j++)
    {
      if(registroCliente[j][1] == registro[i][1] ){
      bandera = 1;
      registroCliente[j][3] += registro[i][3];
      }
    }
    if(bandera == 0){
      for (int h = 0; h < 4; h++)
      {
        registroCliente[nuevoCont][h] = registro[i][h];
      }
    }
    nuevoCont++;
  }

  for (int i = 0; i < nuevoCont; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << registro[i][j] <<endl;
    }
  }


  return 0;
}