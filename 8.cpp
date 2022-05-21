//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int nroEntrenamiento;
  int TipoECli[50][10];
  int maxTCli = TipoECli[0][0];
  int maxTCLiNro;


  /** Inicializar TipoECli en cero*/
  for (int i = 0; i < 50; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      TipoECli[i][j] = 0;
    }
  }

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

    /*Punto B y C Entrenamientos por clientes*/
    TipoECli[cliente-101][entrenamiento - 1] += tiempo;

    cout << endl << "===================================" << endl;

    cout << endl << "Numero de entrenamiento: ";
    cin >> nroEntrenamiento;

  }

  cout << endl << "===================================" << endl << endl;

   for (int i = 0; i < 50; i++){
    int tiempoCli = 0;

    for (int j = 0; j < 10; j++)
    {
      int hora = TipoECli[i][j] / 60;
      int minuto = TipoECli[i][j] % 60;

      /*Punto B y C*/
      if(TipoECli[i][j] > 0){
        cout << endl << "Cliente " << i + 101 << " Entrenamiento Numero: " << j + 1 << " Tiempo: " << hora << ":" << minuto<< endl;
        tiempoCli += TipoECli[i][j];
      }
    }

    /*Punto A*/
    int horaCli = tiempoCli / 60;
    int minutoCli = tiempoCli % 60;

    if(tiempoCli > 0){
      cout << "El tiempo del cliente " << 101 + i << " es de " << horaCli << ":" << minutoCli << endl;
      cout << endl << "===================================" << endl;

      if(tiempoCli > maxTCli){
        maxTCli = tiempoCli;
        maxTCLiNro = i + 101;
      }

    }

  }

  cout << "El cliente " << maxTCLiNro << " fue el que mas tiempo realizo con un total de: " << maxTCli;

  cout << endl << "===================================" << endl;
  for (int i = 0; i < 10; i++)
  {
    int entreanamiento = 0;
    for (int j = 0; j < 50; j++)
    {
      if(TipoECli[j][i] > 0){
        entreanamiento = 1;
      }
    }
    if(entreanamiento != 1){
      cout << "El entrenamiento numero " << i + 1 << " no se realizo" << endl;
    }
  }
  

  return 0;
}