#include <iostream>
using namespace std;

//EXERCICIO EM AULA

void ppp(int a, int b, int c){
	if(a==b || b==c){
		cout<<"B e igual a A ou a C";
	}else if(a<b && b<c){
		cout<<"Os numeros estao em ordem crescente";
	}else{
		cout<<"Os numeros sao distintos";
	}
}

int main(){
	int a,b,c;
	
	cout<<"Informe 3 numeros: ";
	cin>>a;
	cin>>b;
	cin>>c;
	
	ppp(a,b,c);
	
	return 0;
}