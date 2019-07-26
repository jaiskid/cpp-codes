//Author : Neeraj jaiswal
//Date : 26th july 2019
//Input : aaaabbba
//Output :a
#include <iostream>
using namespace std;
#define Ascii 256
char mxfreq(char *str){
	int cons[Ascii]={0};
	int len=strlen(str);
	int max=0;
	char result;
	for(int i=0;i<len;i++){
		cons[str[i]]++;
		if(max<cons[str[i]]){
			max=cons[str[i]];
			result=str[i];
		}
	}
	return result;
}
int main(){
	char str[1000];
	cin>>str;
	cout<<mxfreq(str);
 }