//Author : Neeraj jaiswal
//Date : 31th july 2019
/*
Inputs
1
10111 10000
Output
00111
*/
#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	string s1,s2,s3;
	cin>>s1>>s2;
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]==s2[i]){
			s3.append("0");
		}
		else{
			s3.append("1");
		}
	}
	cout<<s3<<endl;
	}
}