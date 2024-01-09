#include<iostream>
using namespace std;

int main(){
   int arr[10],key,n;
   cout<<"Enter the 10 array elements in increasing order"<<endl;
   for(int i=0;i<10;i++){
    cin>>arr[i];
   }
   cout<<endl<<"Enter the key you want to search by binary search"<<endl;
   cin>>key;
   n=10;
   for(int i=(n/2);i<n;){
    if(key==arr[i])
    {cout<<"key Found at index : "<<i<<endl;
    break;}
    else if(key>arr[i]){
        i=i+1;
    }
    else if(key<arr[i]){
        n=i;
        i=n/2;
    }
   }
//    cout<<endl<<"Prenting reverse array"<<endl;
//    for(int i=0;i<10;i++){
//     cout<<arr[i]<<endl;
   
    return 0;
}
