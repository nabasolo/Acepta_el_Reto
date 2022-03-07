#include <iostream>
#include <vector>
using namespace std;

int main() {
  int sorteos, inumero, cantidad, result;
  bool varios;
  string numero;
  vector<int> numeros (10,0);

  cin >> sorteos;
  while (sorteos != 0){
    varios = false;
    cantidad = 0;
    result = 10;
    for (int i = 0; i < sorteos; ++i){
	    cin >> numero;      
      inumero = stoi(&(numero.back()));
      numeros[inumero]=numeros[inumero]+1;
      if (numeros[inumero]>cantidad){
        cantidad=numeros[inumero];      
      }
    }
    
    for (int j=0; j < 10; ++j){
      if (numeros[j]==cantidad){
        if (result<10){
          varios = true;
       }else{
          result=j;
        }
      }
      numeros[j]=0;
    }

    if (varios){
      cout << "VARIAS\n";
    }else{
      cout << result << "\n";
    }

    cin >> sorteos;   
  }

  return 0;
}