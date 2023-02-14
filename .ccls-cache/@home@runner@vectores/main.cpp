/* 
8/02/2023
autor: edwin sebastian pardo
tema: usar la bibliotecaria de vectores
*/

#include <iostream>
#include <vector> //declaro la bibliotecaria de vectores
using namespace std;

//funcion principal
int main() {

// se declara tipo de vector de tipo entero
  vector<int> numerosv;

// se declara el tamaño del vector y con el numero que se incia
  numerosv.assign(5,0);
  for(int i=0; i < numerosv.size(); i++){ //recorro el vector y lo imprimo
    cout<<numerosv[i]<<endl;
    
  } //sobre escribo los datos y lo imprimo
  for(int j=0; j<numerosv.size();j++){ 
    numerosv[j]=2;
   cout<<numerosv[j]<<endl;
    }

 //borro los datos
numerosv.clear();
  
    }