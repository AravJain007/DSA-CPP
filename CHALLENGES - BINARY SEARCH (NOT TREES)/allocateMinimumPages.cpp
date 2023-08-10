/*                       ALLOCATE MINIMUM PAGES
    arr - Contains number of pages in n differenct books [ascending order]
    m - Number of students in which the pages have to be divided
    All the books have to be divided among m students consectively. Allocate
    the pages in such a way that the maximum amount of pages allocated to a 
    student is minimum.
*/
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int min/*We are taking mid as min, as it is the minimum value of pages allowes*/){
    int studentsRequired = 1, sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>min)
            return false;
        else if(arr[i]+sum > min){
            studentsRequired ++;
            sum = arr[i];
            if(studentsRequired > m)
                return false;
        }
        else
            sum += arr[i];
    }
    return true;
}

int allocateMinimum(int arr[],int n,int m){
    if(n<m)
        return -1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int start = 0, end = sum;
    int ans = INT_MAX;
    while(start < end){
        int mid = (start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans = min(ans,mid);
            end = mid-1;
        }
        else 
            start = mid+1;
    }
    return ans;
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    cout << "Minimum (Maximum Number of pages alloted) : " << allocateMinimum(arr,n,m) << "\n";
    return 0;
}