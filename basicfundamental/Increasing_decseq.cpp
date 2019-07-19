//Author : Neeraj jaiswal
//Date : 19th july 2019
/*
INCREASING DECREASING SEQUENCE
Take the following as input.

A number (N)
Take N more numerical inputs
The N inputs for a sequence S = s1, s2, .., sN. Compute if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format:
Constraints:
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true
*/

#include<iostream>
using namespace std;
int  checkbitonic(int *a,int n){
	int i,j;
	for(i=1;i<n;i++){
	if(a[i]<a[i-1])
		continue;
		if(a[i]>=a[i-1])
		break;
	}
	if(i==n-1)
	return 1;
	for(j=i+1;j<n;j++){
	if(a[j]>a[j-1])
		continue;
		if(a[j]<=a[j-1])
		break;
	}
	i=j;
	if(i!=n)
	return 0;
	return 1;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	(checkbitonic(a,n)==1)?
	cout<<"true":
	cout<<"false";
	return 0;
}