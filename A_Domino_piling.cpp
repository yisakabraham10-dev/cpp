#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;

    cin>>M>>N;

    if ((M *N)%2 ==0){
        cout<<((M*N)/2);
    }
    else{
        cout<<((M*N)-1)/2;
    }
}