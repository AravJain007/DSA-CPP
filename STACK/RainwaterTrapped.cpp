#include<bits/stdc++.h>
using namespace std;

int rainwaterTrapped(vector<int> a){
    stack<int> st;
    int n = a.size(), ans=0;
    for(int i=0;i<a.size();i++){
        while(!st.empty() && a[i]>a[st.top()]){
            int curr = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff = i - st.top() -1;
            ans += (min(a[st.top()],a[i]) - a[curr]) * diff;
        }
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rainwaterTrapped(a)<<endl;
    return 0;
}