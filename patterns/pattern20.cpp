//author name Neeraj jaiswal
//date 17 july 2019
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(int k=1;k<=2*(n-i)-1;k++){
			cout<<"  ";
		}
		for(int j=i;j>=1;j--){
			if(j!=n)
			cout<<j<<" ";
		}
		cout<<endl;
	}
}