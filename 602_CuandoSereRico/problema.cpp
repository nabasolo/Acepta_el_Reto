#include <iostream>
#include <vector>
using namespace std;

int busquedaBinaria (vector<int> &cantidadCentesimos, int inicio, int final, int objetivo){


  return 0;
}


int main() {
  int ncasos, objetivo, nuevoValor;

  vector<int> cantidadCentesimos;
  cantidadCentesimos.push_back(0);
  cantidadCentesimos.push_back(1);
  cantidadCentesimos.push_back(2);

  cin >> ncasos;
  for (int i = 0; i < ncasos ; ++i){
    cin >> objetivo;
   
    if (objetivo < cantidadCentesimos[cantidadCentesimos.size()-1]){
      while (objetivo > cantidadCentesimos[cantidadCentesimos.size()-1]){
        //Xn = 2*Xn-1 + Xn-2 - 2*Xn-3
        nuevoValor = (2*cantidadCentesimos[cantidadCentesimos.size()-1])+cantidadCentesimos[cantidadCentesimos.size()-2]-(2*cantidadCentesimos[cantidadCentesimos.size()-3]);
        cantidadCentesimos.push_back(nuevoValor);
      }
      cout << cantidadCentesimos.size()-1 << "\n";
    }else{
      busquedaBinaria(cantidadCentesimos,0,cantidadCentesimos.size(),objetivo);
    }
  }

  cout << "Vector: ";
  for (int i = 0 ; i < cantidadCentesimos.size() ; ++i){
    cout << cantidadCentesimos[i] << " ";
  }
  cout << "\n";

  return 0;
}