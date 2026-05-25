#include<bits/stdc++.h>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set <char> x;
    int y;

    string z;
    int a;

    cin>>z;
    a = z.length();

    for (int i = 0; i<a; i++){
        x.insert(z[i]);
    }


    if (x.size()%2 == 0){
        cout<<"CHAT WITH HER!";
        return 0;
    }
    cout<<"IGNORE HIM!";
    return 0;
}