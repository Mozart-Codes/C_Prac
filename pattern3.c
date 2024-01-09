#include<iostream>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        for(int j=i;j>0;j--){
        cout<<j;
        }
        cout<<'\n';
    }
    return 0;
}