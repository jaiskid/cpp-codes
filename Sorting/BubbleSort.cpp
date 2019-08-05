//Author : Neeraj jaiswal
//Date : 05th Aug 2019
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}