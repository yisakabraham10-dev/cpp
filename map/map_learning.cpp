#include <iostream>
#include <map>
#include <string>


using namespace std;

int main (){
    map <int, string> m1 = {{1, "Yisak"}};

    for (auto a: m1){
        cout<<a.first<<" "<< a.second;
    }
}

