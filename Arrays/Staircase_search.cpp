//Author: Neeraj jaiswal
//Date : 26th july 2019
#include <iostream>
using namespace std;
bool staircase(int arr[][1000],int row,int col,int key){
	int i=0,j=col-1;
	while(i<=row&&j>=0){
		if(arr[i][j]==key){
			return true;
		}
		else if(arr[i][j]>key){

			j--;
		}
	
	else{
			i++;
		}
	
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int row,col;
	int arr[1000][1000];
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
		cin>>arr[i][j];
	}
	int key;
	cin>>key;
	cout<<staircase(arr,row,col,key)<<endl;
	return 0;
}