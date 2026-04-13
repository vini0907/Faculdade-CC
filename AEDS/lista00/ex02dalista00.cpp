#include <iostream>
#include<math.h>

using namespace std;

float conta(float A, float B, float C){
	float R=(A+B)*(A+B);
	float S=(B+C)*(B+C);
	float d=(R+S)/2;
	return d;
}

int main(){
	float a, b, c;
	cout<<"insira o valor para A: "<< endl;
	cin >> a;
	cout<<"insira o valor para B: "<< endl;
	cin >> b;
	cout<<"insira o valor para C: "<< endl;
	cin >> c;
	cout << conta(a,b,c);
	return 0; 
}