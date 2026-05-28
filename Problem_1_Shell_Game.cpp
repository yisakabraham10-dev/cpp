#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin>> x;

    vector<int>possiblities{0,0,0};

    //possiblites for the pebble to be inside 1
    // numbers get inserted in
    vector<int>universe1{1,0,0};
    while(x--){
        int a,b,g;
        cin>> a >> b>> g;
        a = a-1;
        b = b-1;
        g = g-1; 



        // we swap it and then check if elisse gets the answer correct. If she is correct we will add to a counter

        swap(universe1[a],universe1[b]);

        // if the universe1's elisse's guesses are correct, add a point for elisse
        int points= 0;
        if (universe1[g]==universe1[a]){
            points +=1;
        }
    }

}