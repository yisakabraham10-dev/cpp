#include<iostream>
#include<set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s = {2,15,6,8};

    cout << s.size() << "\n"; // 4
    for (auto x : s) {
        cout << x << "\n";

    multiset<int> l;
    l.insert(5);
    l.insert(5);
    l.insert(5);
    cout << l.count(5) << "\n"; // 3
}
}