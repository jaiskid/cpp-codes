#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cin>>str;
    int i;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        int count=1;
        while(str[i]==str[i+1]&&i<len-1){
            i++;
            count++;
        }
         cout<<str[i]<<count;
    }
   
}
