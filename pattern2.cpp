#include<iostream>
using namespace std;

int main(){
    int y=563;
    int n;
    cout<<y;
    cin>>n;
    for(int i=1;i<n+1;i++)
    {     
       for(int j=0;j<i;j++){
        cout<<j+i;
       }
               
        cout<<'\n';
    }
    return 0;
}