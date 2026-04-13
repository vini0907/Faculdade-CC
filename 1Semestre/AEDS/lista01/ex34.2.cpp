//SEGUNDO 34

float media(float n1, float n2, float n3){
	float m;
	if(n1>n2 && n1>n3){
		m= ((n1*4) + (n2*3) + (n3*3))/10;
	}else if(n2>n1 && n2>n3){
		m= ((n2*4) + (n1*3) + (n3*3))/10;
	}else{
		m= ((n3*4) + (n1*3) + (n2*3))/10;
	}
	return m;
	
}




int main(){
	int m;
	float n1,n2,n3;
	
	cout<<"PREZADO ALUNO"<<endl;
	cout<<"Informe sua matricula: ";
	cin>>m;
	cout<<m;
	
	cout<<endl<<"Informe sua nota 1: ";
	cin>>n1;
	cout<<n1;
	
	cout<<endl<<"Informe sua nota 2: ";
	cin>>n2;
	cout<<n2;
	
	cout<<endl<<"Informe sua nota 3: ";
	cin>>n3;
	cout<<n3;
	
	cout<<endl<<"Media ponderada: "<<media(n1,n2,n3);
	
	if(media(n1,n2,n3)>=5){
		cout<<endl<<"APROVADO!!!";
	}else{
		cout<<endl<<"REPROVADO!!!";
	}

	return 0;
}