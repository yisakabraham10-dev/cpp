#include<iostream>
using namespace std;

void Liftoff(int n){
    if (n==0){
        cout<<"Liftoff"<<endl;
        return;
    }
    cout<<n<<endl;
    Liftoff(n-1);
}

int main (){
    Liftoff(3);

}

// learned that we should put a return everytime on void statements but still recursive functions are unintuitve