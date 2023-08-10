#include<bits/stdc++.h>
using namespace std;

int Tiles(int n){
    if(n==0)
        return 0;  // we return 0 here coz at n==0 there is no way possible to place the tiles.
    if(n==1)
        return 1;  // we return 1 here coz there is a way to place the tiles.  
    int ans = Tiles(n-1)+Tiles(n-2);
    return ans;
    //the last 2 lines could have been replaced by one line :-
    //return (NumberOfTiles(n-1)+NumberOfTiles(n-2));
}
//if we notice here this is pretty similar to the fibonacci series question we did.
int main(){
    int n;
    cin>>n;
    cout<<Tiles(n);
    return 0;
}