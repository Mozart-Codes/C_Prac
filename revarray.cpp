#include<iostream>
using namespace std;

int main(){
   int arr[9],temp;
   cout<<"Enter the 9 array elements"<<endl;
   for(int i=0;i<9;i++){
    cin>>arr[i];
   }
   cout<<endl<<"Reversing the array"<<endl;
   for(int i=0;i<5;i++){
    temp=arr[8-i];
    arr[8-i]=arr[i];
    arr[i]=temp;
   }
   cout<<endl<<"Prenting reverse array"<<endl;
   for(int i=0;i<9;i++){
    cout<<arr[i]<<endl;
   }

    return 0;
}
