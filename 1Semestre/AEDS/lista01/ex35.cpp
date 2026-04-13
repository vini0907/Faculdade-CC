//35

void raizes(float a, float b, float c){
	float delta= ((b*b)-4*a*c);
	float x1= (-b + sqrt(delta))/2*a;
	float x2= (-b - sqrt(delta))/2*a;
	if(delta>0){
		cout<<endl<<" Delta: "<<delta<<endl<<"Raizes da equacao: x1 = "<<x1<<" x2 = "<<x2;
	}else{
		cout<<"As raizes nao existem";
	}
}



int main(){
	float a,b,c;

	cout<<"CALCULE AS RAIZES DA EQUACAO DO 2 GRAU"<<endl<<"F(x) = a.x^2 + b.x + c";
	
	cout<<endl<<"Informe A: ";
	cin>>a;
	cout<<a;
	
	cout<<endl<<"Informe B: ";
	cin>>b;
	cout<<b;
	
	cout<<endl<<"informe C: ";
	cin>>c;
	cout<<c;
	
	raizes(a,b,c);
	

	return 0;
}