#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int integer;

    cin>>integer;


    int step = integer / 5;

    if (integer %5 != 0){
        cout<<step +1;
        return 0;
    }
    cout <<step;
    return 0;


 }