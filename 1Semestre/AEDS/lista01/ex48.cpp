#include <iostream>
using namespace std;

void valorPagar(float v1, float v2, int q1, int q2, float IPI, string c1, string c2){
	float formula;


	formula=((v1*q1)+(v2*q2))*((IPI/100)+1);
	cout<<"nas pecas "<<c1<<" e "<<c2<<" e de: "<<formula;
	
}

int main(){
	float v1, v2, IPI;
	int q1, q2;
	string c1, c2;

	cout<<"Informe a percentagem do IPI: ";
	cin>>IPI;
	cout<<IPI<<endl;
	
	cout<<"Informe o codigo, o valor unitario e a quantidade de pecas 1: ";
	cin>>c1>>v1>>q1;
	cout<<c1<<" "<<v1<<" "<<q1<<endl;
	
	cout<<"Informe o codigo, o valor unitario e a quantidade de pecas 2: ";
	cin>>c2>>v2>>q2;
	cout<<c2<<" "<<v2<<" "<<q2<<endl;
	
	cout<<"Valor a ser pago: ";
	valorPagar(v1, v2, q1, q2, IPI, c1, c2);
	
	return 0;
}