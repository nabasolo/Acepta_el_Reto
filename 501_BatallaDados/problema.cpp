#include <iostream>     // std::cout
#include <vector>     // std::vector
#include <algorithm>
using namespace std;

bool myfunctionMayor (int i,int j) { return (i>j); }

int main(){
	int td,ta,dd,da,no,i,j,min,tirada,defenseMin,attackMin;
	vector<int> dds, das;
	
	while(cin >> td){
		cin >> ta;
		cin >> dd;
		cin >> da;
		cin >> no;
		
		for(i=0;i<no;i++){
			
			defenseMin = std::min(td,dd);
			attackMin = std::min(ta,da);
			
			for (j=0;j<defenseMin;j++){
				cin >> tirada;
				dds.push_back(tirada);
			}
			for (j=0;j<attackMin;j++){
				cin >> tirada;
				das.push_back(tirada);
			}
			sort(dds.begin(),dds.end(),myfunctionMayor);
			sort(das.begin(),das.end(),myfunctionMayor);
			
			if (dds.size() <= das.size()){
				min = dds.size();
			}else{
				min = das.size();
			}
			
			for (j=0;j<min;j++){
				if (dds[j] >= das[j]){
					ta--;
				}else{
					td--;
				}
			}
			dds.clear();
			das.clear();		
		}			
		
		cout << td << " " << ta << "\n";
	}
	
	return 0;
}
