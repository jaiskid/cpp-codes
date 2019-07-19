//Author : Neeraj jaiswal
// Date : 19th july
/*
COUNT DIGITS
Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.

Input Format:
Integer (A number) Integer (A digit)

Constraints:
0 <= N <= 1000000000 0 <= Digit <= 9

Output Format
Integer (count of times digit occurs in the number)

Sample Input
5433231 
3
Sample Output
3
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int key;
	cin>>key;
	int counter=0;
	for(;n>0;n=n/10){
		int rem=n%10;
		if(rem==key){
			counter++;
		}
	}
	cout<<counter<<endl;
}