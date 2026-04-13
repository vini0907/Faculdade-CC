//33 COM BOOL

void verificaViagem(bool passaporte,bool identidade,bool passagem) {
if ((passaporte ==true || identidade ==true) && passagem ==true) {
        cout <<"Pode viajar";
    }else {
        cout <<"Nao pode viajar";
    }
}

int main(){
	bool pa, id, p;
	cout<<"Responda (1 para SIM) e (0 para NAO)"<<endl;
	cout<<"Deseja apresentar PASSAPORTE? ";
	cin>>pa;
	cout<<"Deseja apresentar IDENTIDADE? ";
	cin>>id;
	cout<<"Comprou sua passagem? ";
	cin>>p;
	cout<<pa<<endl<<id<<endl<<p<<endl;
	verificaViagem(pa,id,p);

	return 0;
}
*/