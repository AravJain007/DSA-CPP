#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    priority_queue<int,vector<int>> fuelOptions; // MaxHeap to store the fuel options available
    int currFuel,distanceToTown;
    cin >> distanceToTown >> currFuel;
    for(int i=0;i<n;i++){
        a[i].first = distanceToTown - a[i].first; // So now in first we have distance of fuel from our truck
    }
    sort(a.begin(),a.end());
    int ans = 0; // For counting the number of stops
    bool flag = 0;
    for(int i=0;i<n;i++){
        if(currFuel > distanceToTown)
            break;
        while(currFuel < a[i].first){
            if(fuelOptions.empty()){
                flag = 1;
                break;
            }
            ans++;
            currFuel += fuelOptions.top();
            fuelOptions.pop();
        }
        if(flag)
            break;
        fuelOptions.push(a[i].second);
    }
    if(!flag)
        cout << "The minimum number of stops is : " << ans << "\n";
    else
        cout << "Those cows never reach the destination and die of hunger and then are fed on by a bunch of lions." << "\n";
    return 0;
}