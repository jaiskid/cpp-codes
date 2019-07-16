//author name Neeraj jaiswal
//date 16 july 2019
#include <iostream>
using namespace std;
int main(){
	char n;
	cin>>n;
	char alpha='A';
	for(int i=1;i<=(n-'A'+1);i++){
		for(int j=1;j<=i;j++){
			cout<<alpha<<" ";
		}
		alpha++;
		cout<<endl;
	}
}