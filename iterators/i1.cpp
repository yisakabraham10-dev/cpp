#include <iostream>
#include <vector>
#include<unordered_set>

using namespace std;

int main(){
    vector<int> a{1,2,3,4,5};
    //range based iteration

    for (auto value: a){   
        cout<<value<<endl;
    }
    //iterating using iterators
    
    for (vector<int>::iterator m= a.begin(); m!= a.end(); m++){
        cout<<*m;
    }
    unordered_set<string, int> m;
        



}