#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> twop;
    int y;
    cin>>y;

    int x=1;

    // This loop populates powers of 2 up to y
    while(x <= y){ // Changed to <= so it includes y if y is a power of 2
        twop.push_back(x);
        x*=2;
    }
    
    vector<int> binary(twop.size());

    int index=0;
    for (int i=twop.size()-1; i>=0 ; i--){
        if(y >= twop[i]){          // Changed to >=
            binary[index]=1;
            y = y - twop[i];       // FIXED: Use 'i' instead of 'index'
        }
        else{
            binary[index]=0;
        }
        index++;                   // FIXED: Moved outside the if/else so it increments every time
    }

    // Print the result to verify it works!
    for(int bit : binary) {
        cout << bit;
    }
    cout << endl;
}