#include<bits/stdc++.h>
using namespace std;

int main (){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>> n >> k;
    int counter = 0;

    int A[n];
    

    for (int m =0; m<n; m++){
        int x;
        cin>>x;
        A[m] = x;
    }

    for (int i = 0; i<n;  i++){
        if (A[i] > k){
            counter +=1;
        }
    }
    cout<<counter;


    


}