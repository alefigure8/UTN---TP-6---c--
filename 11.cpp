//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int edad;
  char clientes [99][2];

  for (int i = 0; i < 99; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      clientes[i][j] = ' ';
    }
  }

  cout << "Ingrese su edad: ";
  cin >> edad;

  while (edad != 0){
    char color;
    char sexo;
    cout << "Color elegido: ";
    cin >> color;
    cout << "Sexo: ";
    cin >> sexo;

    if(sexo == 'M'){
      clientes[edad -1][0] = color;
    } else {
      clientes[edad -1][1] = color;
    }

    cout <<endl << "===========================" << endl;
    cout <<endl << "Ingrese su edad: ";
    cin >> edad;
  }

  int negro=0, azul=0, blanco=0, otros=0;

  for (int i = 0; i < 99; i++)
  {
    switch (clientes[i][1])
    {
    case 'N':
     negro++;
      break;
    case 'A':
      azul++;
      break;
    case 'B':
      blanco++;
      break;
    case 'O':
      otros++;
      break;
    }
  }

  int colorMasElegido;
  string colorElegido;

  if(negro > azul){
    colorMasElegido = negro;
    colorElegido = "Negro";
  } else {
    colorMasElegido = azul;
    colorElegido = "Azul";
  }

  if(blanco > colorMasElegido){
    colorMasElegido = blanco;
    colorElegido = "Blanco";
  }

  if(otros > colorMasElegido){
    colorMasElegido = otros;
    colorElegido = "Otros";
  }

  cout <<endl << "===========================" << endl;
  cout << endl << "Color mas elegido entre mujeres es el: " << colorElegido << endl << endl;

  int edades[10];

  for (int i = 0; i < 10; i++){
    edades[i] = 0;
  }

  for (int i =0; i < 99; i++){
    for (int j = 0; j < 2; j++)
    {
        if(clientes[i][j] != ' '){
          edades[i/10] += 1;
        }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    cout << "Decada " << i << " cantidad " << edades[i] << endl;
  }

  return 0;
}