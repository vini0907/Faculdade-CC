#include <iostream>
using namespace std;

//EXERCICIO EM AULA

float aumento(float s){
	int p;
	
	if(s>=3000){
		p=1;
	}else if(s>2000 && s<3000){
		p=2;
	}else if(s<=2000){
		p=3;
	}else{
		p=4;
	}
	
	switch (p){
		case 1:
			p=s+s*0.04;
			break;
		case 2:
			p=s+s*0.06;
			break;
		case 3:
			p=s+s*0.07;
			break;
		case 4:
			cout<<"Valor invalido";
			break;
		default:
			cout<<"Valor invalido";
	}
	return p;

}

int main(){
	float s;
	
	cout<<"Informe seu salario: ";
	cin>>s;
	cout<<s<<endl;
	
	if (aumento(s)<1500){
		cout<<"Enviar para revisao";
	}else{
		cout<<"Seu novo salario sera "<<aumento(s);
	}

	return 0;
}