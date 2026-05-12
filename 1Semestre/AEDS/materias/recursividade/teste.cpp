#include<iostream>
using namespace std;

void fatorial(int n){
	int i=n;
	int fat=1;
	while(i>0){
		fat=fat*i;
		i--;
	}
	cout<<fat;
}

int main(){
	int n;
	cin>>n;
	fatorial(n);
	return 0;
}