//Author : Neeraj jaiswal
//Date : 23th july 2019
/*
Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
output
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
#include <iostream>
using namespace std;
int main(){
	int original[1000][1000],rotated[1000][1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>original[i][j];
		}
	}
	//transpose
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			rotated[j][i]=original[i][j];
		}
	}
	//mirror image of transpose
	for(int j=0;j<n;j++){
		for(int i=0;i<n/2;i++){
			int temp=rotated[i][j];
			rotated[i][j]=rotated[n-1-i][j];
			rotated[n-1-i][j]=temp;
		}
	}
	//output
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<rotated[i][j]<<" ";
	}
	cout<<endl;
}