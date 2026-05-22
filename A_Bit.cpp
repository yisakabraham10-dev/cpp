#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y = 0;

    int x;
    cin>>x;

    while(x--){
        string z;
        cin>>z;

        if (z == "X++"|| z=="++X"){
            y+=1;
        }
        else{
            y-=1;
        }

    }
    cout<<y;
}