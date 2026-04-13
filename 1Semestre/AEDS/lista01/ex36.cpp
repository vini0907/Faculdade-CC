#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void situacao(float p, float a){
    float imc = p / (a * a);

    if (imc < 16){
        cout << "Magreza grave";
    } else if (imc >= 16 && imc < 17){
        cout << "Magreza moderada";
    } else if (imc >= 17 && imc < 18.5){
        cout << "Magreza leve";
    } else if (imc >= 18.5 && imc < 25){
        cout << "Saudavel";
    } else if (imc >= 25 && imc < 30){
        cout << "Sobrepeso";
    } else if (imc >= 30 && imc < 35){
        cout << "Obesidade grau I";
    } else if (imc >= 35 && imc < 40){
        cout << "Obesidade grau II (severa)";
    } else {
        cout << "Obesidade grau III (morbida)";
    }
}

int main(){
    float p, a;

    cout << "Informe seu peso: ";
    cin>>p;
    
	cout<< "Agora sua altura: ";
    cin >> a;

    cout << "Sua situacao e: ";
    situacao(p, a);

    return 0;
}