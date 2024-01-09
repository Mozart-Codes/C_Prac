#include<iostream>
using namespace std;

int main(){
    int n,i=1,j,space,k;
    cin>>n;
        while(i<=n)
    { j=1;
    space=n-i;
    while(space){
        cout<<' ';
        space--;
    }
        while(j<=i){
          
        cout<<j;
        
        j++;
        }
        k=i-1;
        while(k){
            
            cout<<k;
            k--;
        }
         
        
        cout<<'\n';
        i++;
    }
    return 0;
}