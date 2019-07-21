//author : Neeraj jaiswal
// Date : 21 th july 2019
/*
input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
output
11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
*/
#include <iostream>
using namespace std;

int main() {

int m=0, n=0;
long arr[10][10];
cin>>m>>n;

for(int i=0; i<m; i++){
for(int j=0; j<n; j++){
cin>>arr[i][j];
}
}
for(int j=0;j<n;j++){
if(j%2==0){
for(int i=0;i<m;i++)

{
cout<<arr[i][j]<<", ";

}
}
else
{
for(int i=m-1;i>=0;i--)

{
cout<<arr[i][j]<<", ";

}
}
}

cout<<"END";
}