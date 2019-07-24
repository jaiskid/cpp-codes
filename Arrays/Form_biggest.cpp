//Author : Neeraj jaiswal
//Date :24th july 2019
/*
Input
4
54 546 548 60
output
6054854654
*/
#include <iostream>
#include<algorithm>
using namespace std;
int compare(string x,string y){
	string xy=x.append(y);
	string yx=y.append(x);
	return xy.compare(yx)>0?1:0;
}
int main(){
	int n;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}