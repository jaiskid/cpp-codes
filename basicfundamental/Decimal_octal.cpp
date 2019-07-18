//Author Neeraj jaiswal
//Date 18th july 2019
/*
DECIMAL TO OCTAL
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int p=1;
	for(;n>0;n=n/8){
		int last_digit=n%8;
		sum+=last_digit*p;
		p=p*10;
	}
	cout<<sum<<endl;
}