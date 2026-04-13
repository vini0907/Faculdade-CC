#include <iostream>
using namespace std;



void grupos(float i){
	int g;

	if(i<=0.25){
		g=10;
	}else if(i>0.25 && i<0.4){
		g=1;
	}else if(i>=0.4 && i<0.5){
		g=2;
	}else if(i>=0.5){
		g=3;
	}
	
	switch (g){
		case 10:
			cout<<"Indice de poluicao Aceitavel";
			break;
		
		case 1:
			cout<<"Como medida preventiva, as industrias do 1º grupo terao que suspender imediatamente suas atividades";
			break;
		case 2:
			cout<<"Para diminuir os niveis de poluicao, as industrias do 1º e do 2º grupo devem interromper suas operacoes";
			break;
		case 3:
			cout<<"      !!!SITUACAO CRITICA!!!"<<endl<<endl<<endl<<"Para uma recuperacao ambiental, as industrias de todos os 3 grupos devem paras suas atividades";
			break;
	}
}

int main(){
	float i;

	cout<<"| INDICE POLUICAO |"<<endl;
	cout<<"|  0.0 - - - 0.5  |"<<endl;
	cout<<"Informe o indice de poluicao atual: ";
	cin>>i;
	cout<<i<<endl;
	
	grupos(i);

	return 0;
}