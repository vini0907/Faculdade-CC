#include <iostream>
using namespace std;

void precoConta(float g){
	float pkw,i;

	if(g<=100){
		pkw=g*0.5;
		i=pkw*1.2;
		cout<<i;
	}else if(g>100 && g<=200){
		pkw=g*0.75;
		i=pkw*1.2;
		cout<<i;
	}else if(g>200 && g<=250){
		pkw=g*1.2;
		i=pkw*1.2;
		cout<<i;
	}else if(g>250){
		pkw=g*1.5;
		i=pkw*1.2;
		cout<<i;
	}
}

int main(){
	float g;

	cout<<"Informe seu gasto em kW: ";
	cin>>g;
	cout<<g<<endl;
	
	cout<<"Valor a pagar: ";
	precoConta(g);
	
	return 0;
}