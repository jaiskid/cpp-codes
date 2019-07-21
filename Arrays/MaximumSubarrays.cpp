//Author : Neeraj jaiswal
//Date : 21th july 2019
//Application of kadane algorithm
/*
2
4
1 2 3 4
3
-10 5 10
output
10
15
*/
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int ms=INT_MIN;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int cs=0;
	for(int i=0;i<n;i++){
	cs+=arr[i];
	if(cs<0){
	cs=0;
	}
	ms=max(cs,ms);
	}
	cout<<ms<<endl;
	}
}