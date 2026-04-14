#include <iostream>
#include <math.h>

using namespace std;

//ex38
/*
void preco(int c, int u){
	float p;
	switch (c){
		case 100:
			p=2.20*u;
			break;
		case 101:
			p=3.30*u;
			break;
		case 102:
			p=3.50*u;
			break;
		case 103:
			p=5.20*u;
		case 104:
			p=7.30*u;
			break;
		case 105:
			p=2*u;
			break;
		default:
			cout<<"Opcao invalida!";
	}
	cout<<p;
}


int main(){
	int c,u;
	
	cout<<"| **Especificacao** | **Codigo** | **Preco** |"<<endl;
	cout<<"| Cachorro quente   |     100    |    2,20   |"<<endl;
	cout<<"| Bauru simples     |     101    |    3,30   |"<<endl;
	cout<<"| Bauru com ovo     |     102    |    3,50   |"<<endl;
	cout<<"| Hamburguer        |     103    |    5,20   |"<<endl;
	cout<<"| Cheeseburguer     |     104    |    7,30   |"<<endl;
	cout<<"| Refrigerante      |     105    |    2,00   |"<<endl;
	
	cout<<"Digite o codigo do pedido: ";
	cin>>c;
	
	cout<<"Quantas unidades? ";
	cin>>u;
	
	cout<<"Seu pedido deu: ";
	preco(c,u);
	
	return 0;
}
*/

//ex39
/*
void mes(int m){
	if(m==12 && 1>=m<=3){
		cout<<"Verao";
	}else if(4>=m<=6){
		cout<<"Outono";
	}else if(7>=m<=9){
		cout<<"Inverno";
	}else if(m==10 && m==11){
		cout<<"Primavera";
	}else{
		cout<<"Opcao Invalida";
	}
	
}


int main(){
	int m;
	cout<<"Informe o mes: ";
	cin>>m;
	
	cout<<"Estacao: ";
	mes(m);
	return 0;
}
*/

//ex40
/*
void dia(int n){
	switch(n){
		case 1:
			cout<<"DOMINGO";
			break;
		case 2:
			cout<<"SEGUNDA-FEIRA";
			break;
		case 3:
			cout<<"TERCA-FEIRA";
			break;
		case 4:
			cout<<"QUARTA-FEIRA";
			break;
		case 5:
			cout<<"QUINTA-FEIRA";
			break;
		case 6:
			cout<<"SEXTA-FEIRA";
			break;
		case 7:
			cout<<"SABADO";
			break;
		default:
			cout<<"Dia da semana invalido";
	}
}

int main(){
	int n;
	cout<<"Insira um numero: ";
	cin>>n;
	
	cout<<"Este numero corresponde a(o) ";
	dia(n);
	
	return 0;
}
*/

//ex41
/*
void preco(int c, int u){
	float p;
	switch (c){
		case 1001:
			p=5,3*u;
			break;
		case 1324:
			p=6.45*u;
			break;
		case 6548:
			p=2.37*u;
		case 987:
			p=5.32*u;
			break;
		case 7623:
			p=6.45*u;
			break;
		default:
			cout<<"Opcao invalida!";
	}
	cout<<p;
}

int main(){
	int c,u;
	
	cout<<"| Codigo | Preco |"<<endl;
	cout<<"|  1001  |  5,3  |"<<endl;
	cout<<"|  1324  |  6,45 |"<<endl;
	cout<<"|  6548  |  2,37 |"<<endl;
	cout<<"|  0987  |  5,32 |"<<endl;
	cout<<"|  7623  |  6,45 |"<<endl;
	
	cout<<"Qual o codigo do produto que voce comprou? ";
	cin>>c;
	
	cout<<"Quantos foram comprados? ";
	cin>>u;
	
	cout<<"Preco a pagar: ";
	preco(c,u);
	
	return 0;
}
*/

//ex42
/*
void credito(float sm){
	int c;
	float p;
	if(0<sm && sm<=200){
		c=1;
	}else if(200<sm && sm<=400){
		c=2;
	}else if(400<sm && sm<=600){
		c=3;
	}else if(sm>600){
		c=4;
	}
	
	switch (c){
		case 1:
			p=0;
			cout<<p;
			break;
		case 2:
			p=sm*0.2;
			cout<<p;
			break;
		case 3:
			p=sm*0.3;
			cout<<p;
			break;
		case 4:
			p=sm*0.4;
			cout<<p;
			break;
		default:
			cout<<"Valor invalido";
	}
}

int main(){
	float sm;
	
	cout<<"Informe seu saldo medio: ";
	cin>>sm;
	
	cout<<"Seu credito e de ";
	credito(sm);
	
	return 0;
}
*/

//ex43
/*
void aumento(float s, float c){
	float ns, d;
	if(c==101){
		ns=s*1.1;
		d=s*0.1;
	}else if(c==102){
		ns=s*1.2;
		d=s*0.2;
	}else if(c==103){
		ns=s*1.3;
		d=s*0.3;
	}else{
		ns=s*1.4;
		d=s*0.4;
	}
	
	cout<<ns<<endl<<"A diferenca: "<<d;
}

int main(){
	float s,c;
	
	cout<<"| Cdigo |    Cargo   | %%% |"<<endl;
	cout<<"|  101  |   Gerente  | 10% |"<<endl;
	cout<<"|  102  | Engenheiro | 20% |"<<endl;
	cout<<"|  103  |   Tecnico  | 30% |"<<endl;
	
	cout<<"Insira seu salario: ";
	cin>>s;
	
	cout<<"Insira seu cargo: ";
	cin>>c;
	
	cout<<"Antigo salario: "<<s<<endl;
	cout<<"Novo salario: ";
	aumento(s,c);
	
	return 0;
}
*/

//ex44
/*
#include <iostream>
using namespace std;

void ordem(int i, float a, float b, float c){
	float maior, meio, menor;
	if(a>=b && a>=c){
		maior=a;
		if(b>=c){
			meio=b;
			menor=c;
		}else{
			meio=c;
			menor=b;
		}
	}else if(b>=a && b>=c){
		maior=b;
		if(a>=c){
			meio=a;
			menor=c;
		}else{
			meio=c;
			menor=a;
		}
	}else{
		maior=c;
		if(a>=b){
			meio=a;
			menor=b;
		}else{
			meio=b;
			menor=a;
		}
	}
	
	switch(i){
		case 1:
			cout<<"Crescente "<<menor<<", "<<meio<<", "<<maior;
			break;
		case 2:
			cout<<"Decrescente "<<maior<<", "<<meio<<", "<<menor;
			break;
		case 3:
			cout<<"Maior no meio "<<meio<<", "<<maior<<", "<<menor;
			break;
		default:
			cout<<"Valor invalido";
	}
}

int main(){
	int i;
	float a,b,c;
	
	cout<<"Informe um número inteiro e positivo: ";
	cin>>i;
	
	cout<<"Informe outro numero qualquer: ";
	cin>>a;
	
	cout<<"Outro: ";
	cin>>b;
	
	cout<<"Outro: ";
	cin>>c;
	
	ordem(i,a,b,c);
	
	return 0;
}
*/

//ex45

void cedulas(int v){
  int cem=v/100;
  cout<<"Notas de cem: "<<cem<<endl;

  int cinq=(v%100)/50;
  cout<<"Notas de cinquenta: "<<cinq<<endl;

  int dez=((v%100)%50)/10;
  cout<<"Notas de dez: "<<dez<<endl;

  int cin=(((v%100)%50)%10)/5;
  cout<<"Notas de cinco: "<<cin<<endl;

  int um=((((v%100)%50)%10)%5)/1;
  cout<<"Moedas de 1: "<<um;
}

int main(){
  int v;

  cout<<"Informe um valor em R$: ";
  cin>>v;

  cedulas(v);

  return 0;
}



