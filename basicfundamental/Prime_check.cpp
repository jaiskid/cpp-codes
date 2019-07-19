//Author :Neeraj jaiswal
//Date :19th july 2019
/*
CHECK PRIME
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format:
Constraints:
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not prime"<<endl;
			return 0;
		}
		
	}
	cout<<"prime";
}