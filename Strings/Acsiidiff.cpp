//Author : Neeraj jaiswal
//Date : 27 th july 2019
/*
Inputs acb
Output a2c-1b
*/
#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		int d=s[i+1]-s[i];
		 if(i!=s.length()-1)
		cout<<s[i]+to_string(d);
		else{
			cout<<s[i];
		}
	}
}