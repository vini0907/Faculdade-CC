#include <iostream>

using namespace std;

float maior(float n1, float n2){
	float m;
	if(n1>n2){
		m=n1;
	}
	else{
		m=n2;
		return m;
	}
}

float menor(float n1, float n2){
	float m;
	if(n1<n2){
		m=n1;
	}
	else{
		m=n2;
		return m;
	}
}

float carteira(float i){
	float m;
	if(i>=18){
		cout<<"Voce esta apto para tirar carteira!!!";
	}
	else{
		cout<<"Espera mais um pouco parceiro...";
		return m;
	}
}


int main (){
	float n1,n2,i;
	cout<<"fala um numero n1: ";
	cin>>n1;
	cout<<"agora um n2: ";
	cin>>n2;
	cout<<"este e o maior: "<<maior(n1,n2)<<endl;
	cout<<"este e o menor: "<<menor(n1,n2)<<endl;
	cout<<"Me fala sua idade chefe: ";
	cin>>i;
	cout<<carteira(i);

	return 0;
}
