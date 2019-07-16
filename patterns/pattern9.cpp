//author name Neeraj jaiswal
//date 16 july 2019
/*
rectangle
* * * * *
* * * * * 
* * * * * 
* * * * *

* * * *
* * * *
* * * *
* * * *
* * * * 
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int rows,columns;
	cin>>rows>>columns;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=columns;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}