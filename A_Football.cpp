#include <iostream>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin>>x;

    int counter = 1;

    for(int i=1; i< x.length(); i++){

        if (x[i]==x[i-1]){
            counter ++;
        
            if (counter == 7){
                cout<<"YES";
                return 0;
            }}
        else{
            counter =1;
        }
    }
    cout<<"NO";
    return 0;    

    }

