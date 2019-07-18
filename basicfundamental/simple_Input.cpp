//Author: Neeraj jaiswal
//date: 18th july 2019
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