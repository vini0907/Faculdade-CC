//SEGUNDO 33

void pesoIdeal(float a, string s){
	float m=72.7*a-58;
	float f=62.1*a-44.7;
	if(s=="masculino"){
		cout<<"Seu peso ideal e de: "<<m;
	}else{
		cout<<"Seu peso ideal e de: "<<f;
	}
}

int main(){
	float a;
	string s;

	cout<<"Informe sua altura: ";
	cin>>a;
	cout<<a;
	
	cout<<"Informe seu sexo: ";
	cin>>s;
	cout<<s;
	
	pesoIdeal(a,s);
	

	return 0;
}