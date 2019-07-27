//Author : Neeraj jaiswal
//date : 27th july 2019
/*Inputs: 
2
abba
output: 4
*/
#include<iostream>
using namespace std;
  int main() {
      int k;
      cin>>k;
      string a;
      cin>>a;
      int l1 = a.length();
      int left=0, ans=0;
      int count[] = {0,0};
      for (int i=0;i<l1;i++) {
          count[a[i]-'a']++;
          if(min(count[0], count[1]) > k) {
            count[a[left]-'a']--;
            left++;
          } else {
            ans++;
          }
        }
        cout<<ans;

     return 0;
}
