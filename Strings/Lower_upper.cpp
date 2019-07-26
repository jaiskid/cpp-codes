//Author: NeeraJ jaiswal
//Date :26th july 2019
//Inputs: a,A,$
//outputs:Lower,Upper,Invalid
#include <iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='a'&&ch<='z'){
		cout<<"Lower";
	}
	else if(ch>='A'&&ch<='Z'){
		cout<<"Upper";
	}
	else{
		cout<<"Invalid";
	}
	return 0;
}