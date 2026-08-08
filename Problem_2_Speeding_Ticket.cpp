#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    vector<int> speed_limit(100);
    int index = 0;

    for (int i=0; i<n; i++){
        int length, speed;
        cin>>length>>speed;

        for (int j=0; j<length; j++){
            speed_limit[index++]= speed;
        }

    }

    vector<int> bessie_actual_speed(100);
    index =0;

    for (int i=0; i<m; i++){
        int length, speed;
        cin>>length>>speed;

        for (int j=0; j<length; j++){
            bessie_actual_speed[index++]= speed;
        }

    }    
    int max_over = 0;
    for (int i= 0; i<100; i++){
        int difference = bessie_actual_speed[i] - speed_limit[i];
        max_over = max (max_over, difference);
    
    }
    cout<<max_over;
}