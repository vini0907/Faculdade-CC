//29


void maior(float n1,float n2,float n3){
	if(n1>n2 && n1>n3){
		cout<<n1;
	}else if(n2>n1 && n2>n3){
		cout<<n2;
	}else{
		cout<<n3;
	}
}



int main(){
	float n1;
	float n2;
	float n3;
	
	cout<<"Me diga 3 numeros chefe: ";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cout<<"Dentre "<<n1<<", "<<n2<<" e "<<n3<<" o maior e ";
	maior(n1,n2,n3);

	return 0;
}
