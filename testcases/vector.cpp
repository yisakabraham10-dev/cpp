#include<iostream>
#include<vector>

using namespace std; 

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    pair<string, int> a = make_pair("Yisak", 20);

    cout<<a.first<<endl;
    cout<<a.second<<endl;
}