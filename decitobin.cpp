#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=0,t;
    float ans=0;
    cout<<"enter the number to convert into binary ";
    cin>>n;
    t=n;
    while(t != 0){
       int bit=t & 1;
        ans=(pow(10,i)*bit) + ans;
        t=t >> 1;
        i++;
    }
    cout<<"The binary equivalent of "<<n<<" is : "<<ans;
    return 0;
}
