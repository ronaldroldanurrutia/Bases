#include<iostream>

using namespace std;

string convertir(int n,int m){
    char a ;
    if(n<m){
        string elemento="";
        elemento+=(n+'0');
        return elemento;
    }
    int k=n%m;
    if(k>9){
        a='A'+k-10;
        return convertir(n/m,m)+a;
    }
    a=(n%m)+'0';
    return convertir(n/m,m)+a;
}

int main(){
    int n,k;
    cout << "Numero: " ;
    cin>>n;
    cout << "Base: ";
    cin >>k;
    cout << convertir(n,k);
    return 0;

}
