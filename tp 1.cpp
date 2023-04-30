#include<bits/stdc++.h>
using namespace std;
bool EsMultiplode3 (int n);
int main(){
	int n;
	cout<<"Ingrese un numero:";
	cin>>n;
	bool m=EsMultiplode3(n);
	return 0;
}
 bool EsMultiplode3 (int n){
    bool multiplo;
	if(n%3==0){
    	multiplo=true;
    	cout<<"Es multiplo de tres";
	}
	else{
	multiplo=false;
	cout<<"No es multiplo de tres";
    }
	return multiplo;
}