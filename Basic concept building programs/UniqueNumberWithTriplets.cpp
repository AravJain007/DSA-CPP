#include<bits/stdc++.h>
using namespace std;

bool getBit(int num, int pos){
    return((num & (1<<pos))!=0);
}

int setBit(int num, int pos){
    return(num | (1<<pos));
}

int unique(int arr[],int n){
    int result=0;
    for(int i=0;i<64;i++){ //Here we take i<64 because we know that int occupies at max only 64 bits
        int sum=0;
        for(int j=0;j<n;j++){
           if(getBit(arr[j],i)){
                sum++;
           } 
        }
        /*This will work for any integer as we wont be storing the whole sum. We will just store 1 where ever the condition           
          is not met and hence it will just be 1 and 0 and not a lot of big numbers so u can store it in single int*/
        if (sum%3!=0){  
             result=setBit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[10]={1,1,3,2,4,2,1,3,3,2};
    cout<<unique(arr,10);
    return 0;
}