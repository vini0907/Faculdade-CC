#include <iostream>
using namespace std;


void media(float x1, float x2, float x3, string m){
	float mA, mP, mH;
	
	mA=(x1 + x2 + x3)/3;
	mP=((x1*3)+(x2*3)+(x3*4))/10;
	mH=3/((1/x1)+(1/x2)+(1/x3));
	
	if(m=="A"){
		cout<<"Sua media aritmetica:"<<mA;
	}else if(m=="P"){
		cout<<"Sua media Ponderada: "<<mP;
	}else{
		cout<<"Sua media Harmonica: "<<mH;
	}
}




int main(){
	float x1, x2, x3;
	string m;

	cout<<"Informe suas notas: x1 = ";
	cin>>x1;
	cout<<x1;
	
	cout<<endl<<" x2 = ";
	cin>>x2;
	cout<<x2;
	
	cout<<endl<<" x3 = ";
	cin>>x3;
	cout<<x3;
	
	cout<<endl<<"Qual tipo de media deseja calcular? // DIGITE 'A' aritmetica 'P' ponderada 'H' harmonica "<<endl;
	cin>>m;
	cout<<m<<endl;
	
	media(x1, x2, x3, m);
	

    
    return 0;

}