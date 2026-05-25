#include <iostream>
#include <vector>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> words;

    
    words.push_back("Simon");
    words.push_back ("likes");
    words.push_back("fishes");

    auto first = words.begin();

    cout<<*first;



    cout <<words[0]<<"\n";
}