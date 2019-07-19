//Author :Neeraj jaiswal
//Date :19th july 2019
/*
PRINT SERIES
Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

Input Format:
Constraints:
0 < N1 < 100 0 < N2 < 100

Output Format
Sample Input
10 
4
Sample Output
5 
11 
14 
17 
23 
26 
29 
35 
38 
41
*/
#include<iostream>
using namespace std;
int main(){
	int n,q,w;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		int w=3*i+2;
		if(w%q!=0){
			cout<<w<<endl;
		}
		else{
			n++;
		}
	}

}