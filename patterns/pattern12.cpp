//author name Neeraj jaiswal
//date 16 july 2019
/*
1 * * * * 
1 2 * * * 
1 2 3 * * 
1 2 3 4 * 
1 2 3 4 5 
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(int j=n-i;j>=1;j--){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}