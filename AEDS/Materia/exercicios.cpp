#include <iostream>

using namespace std;

/*01*//*
int main() {
	cout <<"Ola Mundo!"<<endl<<"Idade: 18"<<endl<< "Peso: 50"<<endl<<"Altura:1.78"<<endl;
	cout<<"Motor: 1.8"<<endl<<"Eixos: 1.58"<<endl<<"Peso: 1540kg";
	return 0;
}*/



//22
/*

void par(int a){
	if (a % 2 == 0){
		cout<<"Par e ";
	}
	else{
		cout<<"Impar e ";
	}
}

void posi(int a){
	if (a>=0){
		cout<<"Positivo";
	}else{
		cout<<"Negativo";
	}
}


int main(){
	float p;
	cout<<"Fala um numero chefe: ";
	cin>>p;
	par(p);
	posi(p);
	return 0;
}
*/




//23
/*
void ambospar(int a, int b){
	if ((a % 2 == 0) && (b % 2 == 0)){
		cout<<"Ambos sao pares"<<endl;
	}
	else{
		cout<<"Um dos dois nao e par";
	}
}



int main(){
	float a, b;
	cout<<"Fala um numero chefe: ";
	cin>>a;
	cout<<"Fala outro agora chefe: ";
	cin>>b;
	ambospar(a,b);
	return 0;
}
*/


//24
/*
void par(int a, int b){
	if ((a % 2 == 0) or (b % 2 == 0)){
		cout<<"Ambos ou um dos numeros e pares";
	}
	else{
		cout<<"Ambos sao Impares";
	}
}



int main(){
	float p, p2;
	cout<<"Fala um numero chefe: ";
	cin>>p;
	cout<<"Fala outro agora chefe: ";
	cin>>p2;
	par(p,p2);
	return 0;
}
*/

//25

bool verificaTriangulo(){
    float a1, a2, a3;
    cout << "Informe o angulo 1:";
    cin >> a1;
    cout << "Informe o angulo 2:";
    cin >> a2;
    cout << "Informe o angulo 3:";
    cin >> a3;
    float soma = a1 + a2 + a3;

    if(soma == 180){
        return true;
    }else{
        return false;
    }
}

int main(){
    bool resposta = verificaTriangulo();

		if(resposta = true){
			 cout << "Os angulos formam um triangulo" << endl;
		}else{
			 cout << "Os angulos não formam um triangulo" << endl;	
		}

    return 0;
}