//author name Neeraj jaiswal
//date 16 july 2019
/*
1 2 3 4 5 
1 2 3 4 * 
1 2 3 * * * 
1 2 * * * * * 
1 * * * * * * * 
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(int k=1;k<((n-i+1)*2-2);k++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}