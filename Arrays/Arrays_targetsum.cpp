//author : Neeraj jaiswal
//Date : 21th July 2019
/*
5
1
3
4
2
5
5
output
1 and 4
2 and 3
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int sum;
	cin>>sum;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==sum)
				cout<<a[i]<<" and "<<a[j]<<endl;
		}
	}
}