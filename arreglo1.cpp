//Renzo Julian Vicente Ticona
//2024-114053
#include<iostream>

using namespace std;

int main(){
	int n;
	int contador=0;
	int suma=0;
	float por;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		suma=suma+a[j];
		if(a[j]==0){
			contador++;
		}
	}
	por=(contador*100)/n;
	cout<<"La suma es "<<suma<<" y "<<por<<"% de los numeros son ceros"<<endl;
	return 0;
}