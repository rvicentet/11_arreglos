//Renzo Julian Vicente Ticona
//2024-114053
#include<iostream>

using namespace std;

int main(){
	int n,m,nn,nm,bus;
	int min[7];
	int max[7];
	float media[7];
	for(int i=0; i<7; i++){
		cout<<"Ingrese las temperaturas para el dia "<<i+1<<endl;
		cin>>n;
		cin>>m;
		if(i==0){
		nn=n;
		}
		media[i]=(n+m)/2;
		if(n<m){
			min[i]=n;
			max[i]=m;
		}
		else{
			min[i]=m;
			max[i]=n;
		}
		if(min[i]<nn){
			nn=min[i];
			nm=i;
		}
	}
	cout<<"Ingrese la temperatura maxima que desea buscar: "<<endl;
	cin>>bus;
	cout<<" "<<endl;
	for(int i=0; i<7; i++){
	if(bus==max[i]){
		cout<<"Se encontro la busqueda: "<<bus<<endl;
		cout<<" "<<endl;
		break;
	}
	else if(i==6){
		cout<<"La busqueda ha fallado"<<endl;
	}
	}
	cout<<"La temperatura media de cada dia fue: "<<endl;
	for(int k=0; k<7; k++){
		cout<<media[k]<<endl;
	}
	cout<<"El dia con menor temperatura fue el dia: "<<nm<<" a una temperatura de "<<nn<<endl;
	return 0;
}