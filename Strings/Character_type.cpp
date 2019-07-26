//Author : Neeraj jaiswal
//Date : 26Th july 2019
//Inputs A,a,^
//Output U,L,I
#include <iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='a'&&ch<='z'){
		cout<<"L";
	}
	else if(ch>='A'&&ch<='B'){
		cout<<"U";
	}
	else{
		cout<<"I";
	}
	return 0;
}