//Author Neeraj jaiswal
//Date 18th july 2019
/*
VON NEUMAN LOVES BINARY
Given a binary number ,help Von Neuman to find out its decimal representation.
 For eg 000111 in binary is 7 in decimal.

Input Format:
The first line contains N , the number of binary numbers.
 Next N lines contain N integers each representing binary represenation of number.

Constraints:
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
*/
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=0,p=1;
		for(;n>0;n=n/10){
			int last_digit=n%10;
			ans+=last_digit*p;
			p=p*2;
		}
		cout<<ans<<endl;
	}

}