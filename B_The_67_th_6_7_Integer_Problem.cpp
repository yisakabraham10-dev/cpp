#include <bits/stdc++.h>
using namespace std;

int main (){

int x;
cin>> x;
for(int m =1 ; m <=x; m++){

    int A[7];
    int counter = -1;
    int sum =0;
    for (int i =0; i < 7; i++){
        cin>>A[i];
        sum += A[i];
        if (counter < A[i]){
            counter = A[i];
            
        }
    }
    cout << -(sum - (2*counter))<<"\n";
}
}