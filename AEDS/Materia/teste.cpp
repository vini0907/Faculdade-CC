#include <iostream>

using namespace std;

float maior(float n1, float n2){
	float m;
	if(n1>n2){
		m=n1;
		cout<<"oloquinho meu";
	}
	else{
		m=n2;
		cout<<"parou";
		return m;
	}
}

int main (){
	float n1,n2;
	cout<<"fala um numero n1: ";
	cin>>n1;
	cout<<"agora um n2: ";
	cin>>n2;
	cout<<maior(n1,n2);

	return 0;
}