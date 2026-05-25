#include<iostream>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int po;
    cin>>po;

    string x;
    cin>>x;

    int counter =0;



    int y = x.length() ;
    
    
    for (int i =1; i <y; i++){
        if (x[i]== x[i-1]){
        counter +=1;
        }

    }

    cout<< counter<<"\n";
}