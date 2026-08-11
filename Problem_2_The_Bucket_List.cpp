#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    cin>> N;

    vector<int> time(10000);

    for (int i = 0; i< N; i++){
        int s;
        int t;
        int b;
        cin>>s>>t>>b;

            for (int i=s; i<= t; i++){
                time[i]+=b;
            }

    }

    int m = *max_element(time.begin(), time.end());
    cout<<m;
    
}