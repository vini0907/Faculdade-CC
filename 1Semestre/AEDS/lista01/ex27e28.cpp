//27 e 28

float notas(float n1,float n2,float n3){
	float nr1;
	float nr2;
	float nr3;
	float media1;
	float media2;

	nr1=n1*2;
	nr2=n2*3;
	nr3=n3*5;
	media1=nr1+nr2+nr3;
	media2=media1/10;
	return media2;
	
}

void resultado(float n1, float n2, float n3){
	if(notas(n1,n2,n3) >= 6){
		cout<<" Parabens voce passou!!! ";
	}else{
		cout<<"Deu mole parceiro";
	}
}

int main(){
	float n1,n2,n3;
	cout<<"Me diga suas 3 notas: ";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cout<<"Sua media e "<< notas(n1,n2,n3)<<endl;
	resultado(n1,n2,n3);
	

	return 0;
}