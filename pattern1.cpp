#include<iostream>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    for(int i=1;i<n+1;i++)
    { count=i;
        for(int j=1;j<=i;j++){
        cout<<count<<'\t';
        count++;
        }
        cout<<'\n';
    }
    return 0;
}