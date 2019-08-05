//Author : Neeraj jaiswal
//Date: 05th aug 2019
#include<iostream>
using namespace std;
int main(){
    int row,col,minstrength,maxstrength;
    cin>>row>>col>>minstrength>>maxstrength;
    char a[100][100];
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    cin>>a[i][j];
    }
    }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    if(maxstrength>=0){
    if(a[i][j]=='.')
    maxstrength-=2;
    if(a[i][j]=='*')
    maxstrength+=5;
    if(a[i][j]=='#')
    break;
    if(j<col-1)
    maxstrength--;
    }
    }
    }
    if(maxstrength>=minstrength){
    cout<<"Yes"<<endl<<maxstrength;
    }
    else{
    cout<<"No";
    }
    return 0;
}