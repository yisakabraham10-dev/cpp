#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Board{
    string name1, name2;
};
struct letter_representation{
    char alphabet; int amount;
};

int main (){
    int N; cin>>N;

    vector<Board> boards (N);
    vector<char> alphabet = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j","k", "l", "m", "n","o", "p", "q","r","s","t", "u", "v", "w", "x", "y", "z"};

    for (int i = 0; i < N; i++){
        cin>>boards[i].name1>>boards[i].name2;
    }
}