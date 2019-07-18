//Author: Neeraj jaiswal
//date: 18th july 2019
/*
SIMPLE INPUT
Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.

Input Format:
A list of integers to be processed

Constraints:
All numbers input are integers between -1000 and 1000.

Output Format
Print all the numbers before the cumulative sum become negative.

Sample Input
1
2
88
-100
49
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	while(true){
		cin>>n;
		sum+=n;
		if(sum>=0){
			cout<<n<<endl;
		}
		else{
			break;
		}
	}
}