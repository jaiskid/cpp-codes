//Author: Neeraj jaiswal
//date: 18th july 2019
/*
REVISING QUADRATIC EQUATIONS
Given coefficients of a quadratic equation , you need to print the nature of the roots (real and distinct , real and equal , imaginary).

Input Format:
First contains three coefficients a,b,c from the equation ax^2 + bx + c = 0.

Constraints:
-100 <= a, b, c <= 100

Output Format
Output contains one/two lines.
First line contains nature of the roots .
The next line contains roots separated by a space if they exist. 
If roots are imaginary do not print the roots.

Sample Input
1 -11 28
Sample Output
Real and Distinct
4 7
*/
#include <iostream>
#include<cmath>
using namespace std;
void calculate(int b,int d,int a){
    int x,y;
    x=(-b+sqrt(d))/2*a;
    y=(-b-sqrt(d))/2*a;
    if(y>x){
        cout<<x<<" "<<y;
    }
    else{
        cout<<y<<" "<<x;
    }
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int d=pow(b,2)-4*a*c;
    if(d==0){
        cout<<"Real and Equal"<<endl;
        float z=(-(b/(2*a)));
        cout<<z<<" "<<z;
    }
    else if(d>0){
        cout<<"Real and Distinct"<<endl;
        calculate(b,d,a);
    }
    else{
        cout<<"Imaginary"<<endl;
    }
    return 0;
}