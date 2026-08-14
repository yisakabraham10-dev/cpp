#include<iostream>
#include <vector>
#include<string>
#include<algorithm>

using namespace std;

struct traffic{
    string type;
    int low;
    int high;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int N; 
    cin>>N;

    vector<traffic> traffics(N);


    for (int i = 0; i < N; i++){
        cin>>traffics[i].type>>traffics[i].low>>traffics[i].high;
    }

    

}