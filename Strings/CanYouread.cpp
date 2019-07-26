/*
Author : Neeraj jaiswal
Date : 26th july 2019
Input :IAmACompetitiveProgrammer
output :
I
Am
A
Competitive
Programmer
*/
#include <iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;s[i]!='\0';i++){
		if(i==0&&s[i]>='A'&&s[i]<='Z'){
			cout<<s[i];
		}
		else if(s[i]>='a'&&s[i]<='z'){
			cout<<s[i];
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			cout<<endl;
			cout<<s[i];
		}
	}
}