#include <bits/stdc++.h>
using namespace std;
string ProcesaPalabra(string f);
int main (){
	string f;
	
	cout<<"Ingresar una frase: ";
	getline(cin, f);
	
	cout<<ProcesaPalabra(f)<<endl;
	return 0;
}

string ProcesaPalabra(string f){
	
	
	for(int i = 0 ; i < f.size() ; i++){
			if(f[i] == 'a' || f[i] == 'A'){
			f[i]='b';
		}
		
	}
	
	
	return f;
	}
