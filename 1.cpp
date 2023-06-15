#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,flag=0;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[i][j]==a[i+1][j+1]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==1){
        cout<<"matrix is perrrrrrfect!!";
    }
    else{
        cout<<"Not a perfect matrix!!";
    }
    return 0;
}