//Renzo Julian Vicente Ticona
//2024-114053
#include<iostream>

using namespace std;

int main(){
	int n;
	int parc=0;
	int imparc=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==0){
			parc++;
		}
		else{
			imparc++;
		}
	}
	int par[parc];
	int impar [imparc];
	parc=0;
	imparc=0;
	for(int j=0;j<n;j++){
	if (a[j]%2==0){
		par[parc]=a[j];
		parc++;
	}
	else{
		impar[imparc]=a[j];
		imparc++;
	}
	}
	cout<<"El arreglo de los numeros pares contiene: "<<endl;
	for(int k=0; k<parc; k++){
		cout<<par[k]<<endl;
	}
	cout<<"El arreglo de los numeros impares contiene: "<<endl;
	for(int l=0; l<imparc; l++){
		cout<<impar[l]<<endl;
	}
	return 0;
}