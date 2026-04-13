#include <iostream>
#include <string>

using namespace std;

//30
/*
void mult(int a, int b){
	if(a%b==0){
		cout<<"Sao Multiplos";
	}else{
		cout<<"Nao sao multiplos";
	}
}




int main (){
	int a,b;
	cout<<"Insira dois numeros: ";
	cin>>a;
	cin>>b;
	mult(a,b);
	return 0;
}
*/



//31
/*
void loginCerto(string u,string s){
	if(u=="admin" && s=="admin123"){
		cout<<"Logado!";
	}else{
		cout<<"Tente Novamente.";
	}
}


int main(){
	string u,s;
	cout<<"Digite seu usuario: ";
	cin>>u;
	cout<<"Digite sua senha: ";
	cin>>s;
	loginCerto(u,s);
	return 0;
}
*/




//32
/*
void desc(string paga, string vip, float com){
	if((paga=="vista" && vip=="sim") || com>=300){
		cout<<"Voce tem direito ao Desconto da Loja!!!";
	}else{
		cout<<"Realmente sem desconto.";
	}
}


int main(){
	string paga;
	string vip;
	float com;
	cout<<"Como deseja pagar? a ";
	cin>>paga;
	cout<<"Voce e cliente VIP? ";
	cin>>vip;
	cout<<"Quanto deu sua Compra? ";
	cin>>com;
	desc(paga,vip,com);
	
	return 0;
}
*/