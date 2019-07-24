//author : Neeraj jaiswal
//Date : 24th july 2019
/*
Input
4545
output
4444
*/
#include<iostream>
using namespace std;
int main(){
	char a[100];
	cin>>a;
	int i=0;
	if(a[0]=='9')
	{
		i++;
	}
	for(;a[i]!='\0';i++){
		int digit=a[i]-'0';
		if(digit>=5){
			digit=9-digit;
			a[i]=digit+'0';
		}
	}
	cout<<a<<" ";
}