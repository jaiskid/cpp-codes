//Author : Neeraj jaiswal
//Date : 21th July 2019
//Arrays-Max Value In array
/*
Inputs
5
1 2 3 4 5
output 
5
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(max<=arr[i])
		{
			max=arr[i];
		}
	}
	cout<<max<<endl;
}