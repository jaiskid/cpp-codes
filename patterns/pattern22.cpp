//author name Neeraj jaiswal
//date 17 july 2019
/*
1
11
111
1001
11111
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==j||j==1){
				cout<<1;
			}
			else{
				(i%2==0)?cout<<0:cout<<1;
			}
		}
		cout<<endl;
	}
}