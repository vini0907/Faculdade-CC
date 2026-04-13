#include <iostream>
#include<math.h>

using namespace std;

float contax(float a, float b){
	float x=0;
	x=(b-a)*(b-a);
	return x;
}

float contay(float c, float d){
	float y=0;
	y=(d-c)*(d-c);
	return y;
}

int main(){
	float x1, x2, y1, y2;
	x1=0;
	x2=0;
	y1=0;
	y2=0;
	cout <<"Informe x1: ";
	cin >>x1;
	cout <<"Informe x2: ";
	cin >>x2;
	cout <<"Informe y1: ";
	cin >>y1;
	cout <<"Informe y2: ";
	cin >>y2;
	cout << sqrt(contax(x1,x2) + contay(y1,y2));
	return 0;
}









