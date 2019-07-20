//Author : Neeraj jaiswal
// Date : 20th july 2019
/*
PYTHAGORAS TRIPLET
Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".

Input Format:
A single integer N

Constraints:
N <= 10^9

Output Format
Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.

Sample Input
3
Sample Output
4 5
*/
#include <iostream>
using namespace std;
int main() {                           
 long long int n;cin>>n;
 if(n==1){
                cout<<-1;
            }else{
    if(n%2==0){
            
        long long int a=((n*n)/4)-1;
        long long int b=((n*n)/4)+1;
       
        cout<<a<<" "<<b;
    }else if(n%2!=0){
    long long int  a=((n*n)-1)/2;
    long long  int b=((n*n)+1)/2;
        cout<<a<<" "<<b;
    }
    else{
        cout<<-1<<endl;
    }
            }
    return 0;
}