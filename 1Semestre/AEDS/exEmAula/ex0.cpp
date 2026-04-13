#include<iostream>
#include<math.h>
using namespace std;
int main (){
//comprando 500 no primeiro mes e 50 nos proximos (durante 3meses)
	float caixast= 500+50+50;
	float conta=10*200/1000*50;
	float gasto= caixast*conta;
	float lucro= gasto*0.20;
	cout << "seu lucro foi:" << lucro << endl;
//comprando 500 no primeiro mes e a quantidade do mes anterior mais 50 a cada mes (durante 3 meses)
	float total2=500+550+600;
	float gasto2=total2*conta;
	float lucro2=gasto2*0.20;
	cout << "seu lucro 2 foi:" << lucro2 << endl;

    return 0;
}