//author : Neeraj jaiswal
//Date : 21th july 2019
/*
inputs
1
7
8 -8 9 -9 10 -11 12
output:
22
*/
#include<iostream>
using namespace std;
int kadane(int *arr,int n){
    int ms=0,cs=0;
    for(int i=0;i<n;i++){
    cs=cs+arr[i];
      if(cs<0){
        cs=0;
       }
       if(cs>ms){
        ms=cs;
    }
    }
    
    return ms;
    
}
int maxcircular(int *arr,int n){
    int maxkadane=kadane(arr,n);
    int a=0;
    for(int i=0;i<n;i++){
        a+=arr[i];
        arr[i]=-arr[i];
    }
    a=a+kadane(arr,n);
    return (a>maxkadane)?a:maxkadane;
    }

int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxcircular(arr,n)<<endl;
}
}