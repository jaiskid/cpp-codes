//Author: Neeraj jaiswal
//Date 24th july 2019
/* input
1 10
output 
4
*/
#include <iostream>
using namespace std;
void prime(int *p,int n){
	p[0]=p[1]=0;
	p[2]=1;
	for(int i=3;i<=n;i+=2){
		p[i]=1;
	}
	for(int i=3;i<=n;i+=2){
		if(p[i]){
			for(int j=i*i;j<=n;j+=2*i){
				p[j]=0;
			}
		}
	}
	return;
}
using namespace std;
int main(){
	int p[100000]={0};
	int a;
	cin>>a;
	int n;
	cin>>n;
	prime(p,n);
	int count=0;
	for(int i=a;i<=n;i++){
		if(p[i]){
			count++;
		}
	}
	cout<<count;
}