//Author : Neeraj jaiswal
//Date : 27th july 2019
/*
Inputs 1441
output true
*/
#include<iostream>
using namespace std;
bool pall(string si)
{
	int s=0;
	int e=si.length()-1;
	while(s<e){
		if(si[s]!=si[e]){
			return false;
		}
		s++;
		e--;
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	cout<<pall(s);
}