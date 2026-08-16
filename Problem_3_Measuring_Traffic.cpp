#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>


using namespace std; 

struct traffic{
    string onoroff;
    int low;
    int high;
};

int main (){

    int N;
    cin>>N;

    vector<traffic> traffics (N);

    for (int i =0; i < N; i++){
        cin>>traffics[i].onoroff>>traffics[i].low>>traffics[i].high;
    }

    //find the first and last none
    int found_the_last_none = -1;
    int found_the_first_none =-1;

    for (int i = N-1; i>=0; i--){
        if (traffics[i].onoroff=="none"){
            found_the_last_none= i;
            break;
        }
    }
    for (int i =0; i<N; i++){
        if(traffics[i].onoroff=="none"){
            found_the_first_none = i;
            break;
        }
    }
    //finding the initial range
    
    int high = INT_MAX;
    int low = INT_MIN;

    for (int i= found_the_last_none; i>=0; i--){
        if (traffics[i].onoroff== "none"){
            high = min(traffics[i].high, high);
            low = max(traffics[i].low, low);
        }
        if (traffics[i].onoroff=="on"){
            high -= traffics[i].low;
            low -= traffics[i].high; 
        }
        if (traffics[i].onoroff== "off"){
            high += traffics[i].low;
            low += traffics[i].high;
        }    
    }
    //is the intersection legit?
    if (low>high){
        return 0;
    }

    cout<< low<<" "<< high<<endl;


    //finding the final range

    high = INT_MAX;
    low = INT_MIN;

    for (int i= found_the_first_none; i < N; i++){
        if (traffics[i].onoroff== "none"){
            high = min(traffics[i].high, high);
            low = max(traffics[i].low, low);
        }
        if (traffics[i].onoroff=="on"){
            high += traffics[i].low;
            low += traffics[i].high; 
        }
        if (traffics[i].onoroff== "off"){
            high -= traffics[i].low;
            low -= traffics[i].high;
        } 

    }
    //is the intersection legit?
    if (low>high){
        return 0;
    cout <<low<<" "<<high;
}