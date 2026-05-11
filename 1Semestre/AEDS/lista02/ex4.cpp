#include <iostream>

using namespace std;

void maiores(int n){
	int x1=0,x2=0,x3=0;
    
    int valor;
    int i = 0;
    
	while(i < n) {
        cout << "Informe um numero: ";
        cin >> valor;

        if(valor > x1){
            x3 = x2;
            x2 = x1;
            x1 = valor;
        }else if(valor>x2){
            x3 = x2;
            x2 = valor;
		} else if(valor > x3) {
		x3 = valor;
        }

    cout<<"Maiores valores: ";
    cout<<x1<<" "<<x2<<" "<<x3<<endl;
    i++;
}

    int soma = x1 + x2 + x3;

    cout << "Soma dos 3 maiores: " << soma << endl;
}

int main() {
    int n;
    cout << "Quantos numeros serao inseridos: ";
    cin >> n;
    
    maiores(n);


    return 0;
}