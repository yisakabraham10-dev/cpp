#include <iostream>
#include <set>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;

    for (int i=0; i<test; i++){
        int towers;
        cin>>towers;

        set<int> s;

        for (int m =0; m<towers; m++){
            int x;
            cin>>x;

            s.insert(x);

        }

        int begin= *s.begin();
        int end= *s.rbegin();

        cout<< end-begin+1<<"\n";

        
    }
}