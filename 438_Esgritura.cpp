#include <iostream>     // std::cout
//#include <string> 
using namespace std;

int main(){
	int i, cantExcl,cantLetras;
	cantExcl=0;
	cantLetras=0;
	string linea;
	char signo;

	getline(cin,linea);
	while(!linea.empty()){
				
		for(i=0;i<linea.length();i++){
			signo=linea[i];
			if(signo=='!') cantExcl++;
			if(isalpha(signo)) cantLetras++;			
		}
		if (cantExcl>cantLetras){
			cout << "ESGRITO\n";
		}else{
			cout << "escrito\n";			
		}
		
		cantExcl=0;
		cantLetras=0;
		getline(cin,linea);
	}			
   	return 0;
}
