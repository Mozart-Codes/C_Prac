#include<iostream>
using namespace std;

int main(){
    int n,i=1,j,space,k,t;
    cin>>n;
    while(i<=n)
    { j=0;
    
    space=1;
        while(space<=n-i+1){
        cout<<space;
        space++;
    }
    k=i-1;
        while(k){
            
            cout<<"**";
            k--;
        }
        j=n-i+1;
        while(j>=1){
          
        cout<<j;
        
        j--;
                }
        
         
        
        cout<<'\n';
        i++;
    }
    return 0;
}