#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

struct coordinate{
    int x;
    int y;
};

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin>>N;

    vector<coordinate>coordinates(N);
    coordinates[0].x = 0;
    coordinates[0].y = 0;

    for (int i =1; i< N; i++){

        char a;cin>>a;
        int b;cin>>b;

        if (a = 'N'){
            coordinates[i].y = coordinates[i-1].y + b;
            coordinates[i].x = coordinates[i-1].x;
        }
        if (a = 'E'){
            coordinates[i].y = coordinates[i-1].y ;
            coordinates[i].x = coordinates[i-1].x + b;
        }
        if (a = 'S'){
            coordinates[i].y = coordinates[i-1].y - b;
            coordinates[i].x = coordinates[i-1].x;
        }
        if (a = 'W'){
            coordinates[i].y = coordinates[i-1].y;
            coordinates[i].x = coordinates[i-1].x- b;
        }
    }
    
    for (int i =0; i < N; i++){
        for (int i =0; i< N; i++){
            continue;
        }
    }

    return 0;
}