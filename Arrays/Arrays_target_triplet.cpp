//author : Neeraj jaiswal
//Date : 21th july 2019
/*
Input
9
5
7
9
1
2
4
6
8
3
10
output
1,2 and 7
1,3 and 6
1,4 and 5
2,3 and 5
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum;
	cin>>sum;
	sort(a,a+n);
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(a[i]+a[j]+a[k]==sum){
					cout<<a[i]<<","<<a[j]<<" and "<<a[k]<<endl;
				}
			}
		}
	}
}