#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int x, y, m;

    cin>>x>>y>>m;

    for (int i=0; i<x; i++){
        string row;
        cin>>row;

        string new_row;
        for (int v =0; v<y; v++){
            new_row.append(m,row[v]);
        }
    for(int n=0; n<m; n++){
        cout<<new_row<<"\n";
    }

        

    }}
