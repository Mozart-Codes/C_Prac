#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"A is greater";
        }else 
        cout<<"C is greater";
    }else{
        if (b>c){
            cout<<"B is greater";
        }else{
            cout<<"C is greater";
        }
    }
    return 0;
}