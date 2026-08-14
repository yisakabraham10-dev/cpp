#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
#include<climits>

using namespace std;

struct traffic{
    string onoroff;
    int lb;
    int ub;
};

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin>>N;

    vector<traffic> traffics(N);

    for (int i = 0; i< N; i++){
        cin>>traffics[i].onoroff>>traffics[i].lb>>traffics[i].ub;
    }
int ub_increment= 0;
int lb_increment = 0;
int initial_assump_lb = INT_MIN;
int initial_assump_ub = INT_MAX;

//for the inital stage
    for (int i =0; i < N; i++){
        if(traffics[i].onoroff == "on" ){
            lb_increment -= traffics[i].lb;
            ub_increment -= traffics[i].ub;

        }
        else if(traffics[i].onoroff== "off"){
            lb_increment += traffics[i].lb;
            ub_increment += traffics[i].ub;
        }
        else{
            if (traffics[i].lb< initial_assump_lb){
                initial_assump_lb = traffics[i].lb;
            }
            if (traffics[i].ub< initial_assump_ub){
                initial_assump_ub= traffics[i].ub;
            }
        }
    }
}