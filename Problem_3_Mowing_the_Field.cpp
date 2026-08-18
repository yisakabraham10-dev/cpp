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

    int current = 0;

    for (int i =1; i<= N; i++){

        char a;
        cin>>a;
        
        int b;
        cin>>b;

        for (int j = 0; j<b; j++){

            current++;
            
            if (a =='N'){
                coordinates[current].x = coordinates[current-1].x;
                coordinates[current].y = coordinates[current-1].y+1;                
            }

            else if (a == 'E'){
                coordinates[current].x = coordinates[current-1].x+1;
                coordinates[current].y = coordinates[current-1].y;
            }
            else if (a == 'S'){
                coordinates[current].x = coordinates[current-1].x;
                coordinates[current].y = coordinates[current-1].y-1;
            }
            else if (a == 'W'){
                coordinates[current].x = coordinates[current-1].x-1;
                coordinates[current].y = coordinates[current-1].y;
            }
        }
    }
    // check the max
    int moka = INT_MAX;
    for (int i = 0; i <= current; i++){
        for (int j = i+1; j <=current; j++){
            if ((coordinates[i].x==coordinates[j].x)&&(coordinates[i].y==coordinates[j].y)){
                int no = j -i;
                moka = min(moka, no);
            }
        }
    }
    cout<<moka;


    return 0;
}