//author name Neeraj jaiswal
//date 17 july 2019
/*
*       * 
* *   * * 
* * * * * 
* *   * * 
*       * 
*/
#include <iostream>
using namespace std;

int main(){
    int n,eqi,eqj; cin>>n;
    int hn=(n+1)/2;
    for (int i=1;i<=n;i=i+1){
        for (int j=1;j<=n;j=j+1){
            if (i<=hn) eqi=i; else eqi=n-i+1;
            if (j<=hn) eqj=j; else eqj=n-j+1;
                ///eqi+eqj<=hn+1
            if (eqi>=eqj) cout<<"*"<<" ";
             else cout<<"  ";
        }
        cout<<endl;
    }

}
