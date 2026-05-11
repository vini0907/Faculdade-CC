#include<iostream>
using namespace std;


void contagem(int n){
	int i=0;
	int soma=0;
	
	while(i<=n){
		soma=soma+i;
		i++;
	}
	cout<<soma<<endl;
}

int main(){
	int n;
	
	cout<<"Informe N: ";
	cin>>n;
	
	contagem(n);
	return 0;
}