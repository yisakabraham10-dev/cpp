#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    cin>> N;

    vector<int> lower_time_interval;
    vector<int> higher_time_interval;
    vector<int> number_of_buckets;
    vector<int> time(10000);

    for (int i = 0; i< N; i++){
        int s;
        int t;
        int b;
        cin>>s>>t>>b;

        lower_time_interval.push_back(s);
        higher_time_interval.push_back(t);
        number_of_buckets.push_back(b);

            for (int i=s; i<= t; i++){
                time[i]+=b;
            }

    }

    int m = *max_element(time.begin(), time.end());
    cout<<m;
    
}