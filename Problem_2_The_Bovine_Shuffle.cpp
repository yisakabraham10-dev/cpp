#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    int shuffle_index[N];

    vector<int> cows_id(N);
    vector<int> updated_cows_id(N);
    

    cin>>N;

    //we insert the numbers in a manner that follows the indexing system for ordering it
    for (int i = 0; i < N; i++){
        int x; 
        cin>>x; 
        x-=1;
        shuffle_index[i]= x;
    }
    for (int i = 0; i < N; i++){
        cin>>cows_id[i];
    }

    for (int i = 0; i< N; i++){
        updated_cows_id[shuffle_index[i]]= cows_id[i]; 
    }

    for (int i = 0; i< N; i++){
        cout<<updated_cows_id[i]<<endl;
    }
}