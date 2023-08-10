#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int temp = n, number = 0;
    while(temp!=0){
        number = number*10 + temp%10;
        temp = temp/10;
    }
    if(n == number)
        return true;
    return false;
}

int subarrayWithPalindrome(vector<int> arr, int k){    // Works only with numbers from 0 to 9. Can make a better one very easily.
    int sum = 0;
    
    for(int i=0;i<k;i++){
        sum = sum*10 + arr[i];
    }
    if(isPalindrome(sum))
        return 0;
    
    for(int i=k;i<arr.size();i++){
        sum = sum*10 + arr[i] - arr[i-k]*pow(10,k);
        if(isPalindrome(sum))
            return i-k+1;
    }
    
    return -1;
}

int main(){
    vector<int> arr = {8,4,1,4,5,6,9,7};
    int start = subarrayWithPalindrome(arr, 3);
    for(int i=0;i<3;i++)
        cout<<arr[i+start]<<" ";
    cout<<"\n";
    return 0;
}