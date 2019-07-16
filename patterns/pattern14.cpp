//author name Neeraj jaiswal
//date 16 july 2019
/*
*
**
*
***
*
****
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s=2;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			cout<<"*";
		}else{
			
			for(int j=1;j<=s;j++){
				cout<<"*";
			}
			s++;
		}
		
		cout<<endl;
		
	}
}