#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Limak, Bob;
    cin>> Limak>> Bob;

    bool is_smaller = true;
    int years = 0;
    
    while (is_smaller){
        if (Limak > Bob){
            cout << years;
            return 0;
        }
        Limak = Limak*3;
        Bob = Bob*2;
        years+=1;
    }
}