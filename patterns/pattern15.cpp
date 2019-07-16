//author name Neeraj jaiswal
//date 16 july 2019
/*
@    @ 
@  @ 
@@ 
@  @ 
@    @ 
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k=(n+1)/2;
	for(int i=1;i<=n;i++){
		if(i<=k){
			cout<<"@";
			for(int j=1;j<=((n+1)-(2*i));j++){
				cout<<" ";
			}
			cout<<"@";
			cout<<" "<<endl;
		}
		else{
			cout<<"@";
			for(int j=1;j<=((2*i)-(n+1));j++)
			{
				cout<<" ";
			}
			cout<<"@";
			cout<<" "<<endl;
		}
	}
}