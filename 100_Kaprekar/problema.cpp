#include <iostream>     // std::cout
#include <algorithm>
#include <stdlib.h>
using namespace std;

bool myfunctionMayor (int i,int j) { return (i>j); }

string mayor(string& numero){
	sort(numero.begin(),numero.end(),myfunctionMayor);
	return numero;
}

string menor(string& numero){
	sort(numero.begin(),numero.end());
	return numero;
}

int resolver(string numero, int cant){
	
	if (numero=="6174") return cant;
	
	int resta,Imayor,Imenor;
	string Nmayor, Nmenor;
	
	Nmayor=mayor(numero);
	Nmenor=menor(numero);
	
	Imayor = stoi(Nmayor);
	if (Imayor>9999) return cant;
	Imenor = stoi(Nmenor);
	resta=Imayor-Imenor;
	if(resta==0) return 8;
	while(resta<1000){
		resta=resta*10;
	}
	
	return (resolver(to_string(resta),cant+1));
}

int main(){
	int casos,i;
	string numero;
	cin >> casos;
	
	for(i=0;i<casos;i++){
		cin >> numero;	
		cout << resolver(numero,0) << "\n";		
	}
			
   	return 0;
}
