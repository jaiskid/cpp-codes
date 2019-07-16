//author name Neeraj jaiswal
//date 16 july 2019
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int k=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<k<<" ";
			k++;
		}

		cout<<endl;

	}
	return 0;
}