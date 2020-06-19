#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int s=0;
	int e=n-1;
	while(s<=e){
	int mid=(s+e)/2;
	if(mid<e && arr[mid]>arr[mid+1]){
	cout<<mid<<" ";
	break;
	}
	if(mid>s && arr[mid]<arr[mid-1]){
	cout<<mid-1<<" ";
	break;
	}
	if(arr[s]>=arr[mid]){
	e=mid-1;
	}
	else{
	s=mid+1;
	}
	}
	if(s>e){
	cout<<"pivot element doesn't exist";
	}
}