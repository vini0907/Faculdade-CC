#include <iostream>
#include <math.h>

using namespace std;

void idade(int i){
	if(i<5){
		cout<<"Idade insuficiente";
		
	}else if(i>=5 && i<=7){
		cout<<"Infantil A";
		
	}else if(i>=8 && i<=10){
		cout<<"Infantil B";
		
	}else if(i>=11 && i<=13){
		cout<<"Juvenil A";
		
	}else if(i>=14 && i<=17){
		cout<<"Juvenil B";
		
	}else{
		cout<<"Adulto";
	}
}

int main(){
	int i;
	
	cout<<"Informe sua idade: ";
	cin>>i;
	
	idade(i);
	
	return 0;
}