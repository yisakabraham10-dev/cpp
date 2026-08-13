#include<iostream>
#include <vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin>>N;

    vector<string> onoroff(N);
    vector<int> lower_bound(N);
    vector<int> upper_bound(N);

    for (int i =0; i< N; i++){
        cin>>onoroff[i];
        cin>>lower_bound[i];
        cin>>upper_bound[i];
    }

    int lu = *max_element(lower_bound.begin(), lower_bound.end());
    int ll = *min_element(lower_bound.begin(), lower_bound.end());

    int uu = *max_element(upper_bound.begin(), upper_bound.end());
    int ul = *min_element(upper_bound.begin(), upper_bound.end());

    int a,b,c,d;

    for (int i = 0; i< N; i++){
        if(onoroff[i] == "on"|| onoroff[i]=="false"){
            continue;
        }
        if(onoroff[i] == "none"){
            
        }
    }

}