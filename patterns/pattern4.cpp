//author name Neeraj jaiswal
//date 16 july 2019
/*
    *
   **
  ***
 ****
*****
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}