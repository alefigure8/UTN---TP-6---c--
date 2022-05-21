//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int listaEmpl[6][2];
  int horasEmpl[6][30];
  int hora;
  int extra;
  int nroEmpleado;
  int dia;
  int totalHoras;

  for (int i = 0; i < 6; i++)
  {
    cout << "Cuales el valo de la hora del empleado " << 1 + i << ": ";
    cin >> hora;
    cout << "Cuales el valo de la hora extra del empleado " << 1 + i << ": ";
    cin >> extra;

    listaEmpl[i][0] = hora;
    listaEmpl[i][1] = extra;
  }

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 30; j++)
    {
      horasEmpl[i][j] = 0;
    }
  }

  cout << endl << "======================" << endl;

  cout << "Numero de empleado: ";
  cin >> nroEmpleado;

  while (nroEmpleado != 0){

    cout << "Para el empleado: " << nroEmpleado;
    cout << "Dia: ";
    cin >> dia;
    cout << "Total horas trabajadas en el dia: ";
    cin >> totalHoras;

    horasEmpl[nroEmpleado - 1][dia - 1] = totalHoras;

    cout << endl << "======================" << endl;
    cout << "Numero de empleado: ";
    cin >> nroEmpleado;
  }

  cout << endl << "======================" << endl;

  for (int i = 0; i < 6; i++)
  {
    int sueldoEmpleado = 0;
    for (int j = 0; j < 30; j++)
    {
      int horasSimples= (horasEmpl[i][j] - (horasEmpl[i][j] % 8)) * listaEmpl[i][0];
      int horasExtra = (horasEmpl[i][j] % 8) * listaEmpl[i][1];

      sueldoEmpleado += horasSimples + horasExtra;

    }
    if(sueldoEmpleado !=0){
      cout << "El empleado " << i + 1 << " hizo durante el mes un total de " << sueldoEmpleado << endl;
    }
  }
  

  return 0;
}