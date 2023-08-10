#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    int m2[n2][n3];
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    int multiplicationArray[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            multiplicationArray[i][j]=0;
        }
    }
    int rowa=0;
    for (int i=0;i<n1;i++){//for the row of m1 and m3
        for(int j=0;j<n3;j++){//for the column of m2 and m3
            for(int k=0;k<n2;k++){//for the columns of m1 and rows of m2
                multiplicationArray[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<multiplicationArray[i][j]<<" ";
        }cout<<endl;
    }return 0;
}