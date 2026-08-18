#include <iostream>
#include <vector>
#include <climits>
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

    vector<coordinate>coordinates(10001);

    coordinates[0].x = 0;
    coordinates[0].y = 0;

    for (int i =1; i< N; i++){

        char a;
        cin>>a;
        
        int b;
        cin>>b;

        if (a == 'N'){
            for (int j = 0; j<b; j++){
                coordinates[i+j].x = coordinates[i+j-1].x;
                coordinates[i+j].y = coordinates[i+j-1].y+1;
            }
        }
        if (a == 'E'){
            for (int j = 0; j<b; j++){
                coordinates[i+j].x = coordinates[i+j-1].x+1;
                coordinates[i+j].y = coordinates[i+j-1].y;
            }
        }
        if (a == 'S'){
            for (int j = 0; j<b; j++){
                coordinates[i+j].x = coordinates[i+j-1].x;
                coordinates[i+j].y = coordinates[i+j-1].y-1; 
            }
        }
        if (a == 'W'){
            for (int j = 0; j<b; j++){
                coordinates[i+j].x = coordinates[i+j-1].x-1;
                coordinates[i+j].y = coordinates[i+j-1].y;
            }
        }
    }
    // check the max
    int moka = INT_MIN;
    for (int i = 0; i < coordinates.size(); i++){
        for (int j = i; j <coordinates.size(); j++){
            if ((coordinates[i].x==coordinates[j].x)&&(coordinates[i].y==coordinates[j].y)){
                int no = j -i;
                moka = max(moka, no);
            }
        }
    }
    cout<<moka;


    return 0;
}