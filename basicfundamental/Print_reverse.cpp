//Author Neeraj jaiswal
//Date 18th july 2019
/*
PRINT REVERSE
Take N as input, Calculate it's reverse also Print the reverse.

Input Format:
Constraints:
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	while(n!=0){
		
		int rem=n%10;
		sum=sum*10+rem;
		n/=10;
	}
	cout<<sum<<endl;
}