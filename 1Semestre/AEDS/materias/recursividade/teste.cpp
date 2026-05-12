#include<iostream>
using namespace std;

//NO WHILE
/*
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
}*/

int fatorial(int n){
	if(n==0)
		return 1;
	else
		return n*fatorial(n-1);
}

int main(){
	int n;
	cin>>n;
	cout << fatorial(n);
	return 0;
}