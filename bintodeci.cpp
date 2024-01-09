#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=0,t;
    float ans=0;
    cout<<"enter the binary number to convert into decimal ";
    cin>>n;
    t=n;
    while(t != 0){
       int digit=t % 10;
       if(digit==1){
        ans=pow(2,i) + ans;}
        t=t/10;
        i++;
    }
    cout<<"The decimal equivalent of binary number "<<n<<" is : "<<ans;
    return 0;
}
