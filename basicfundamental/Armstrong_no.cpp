//Author : Neeraj jaiswal
//Date : 19th july 2019
/*
IS ARMSTRONG NUMBER
Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where armstrong number is defined as follows

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
Print the value returned.

Input Format:
Integer

Constraints:
0 < N < 1000000000

Output Format
Boolean

Sample Input
371
Sample Output
true
*/

#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int d=n;
	int p=3,sum=0;
	for(;n>0;n=n/10){
		int rem=n%10;
		sum+=pow(rem,p);
	}
		if(sum==d){
			cout<<"true";
		}
		else{
			cout<<"false";
		}
	}