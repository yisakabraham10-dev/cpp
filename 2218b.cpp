#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test_cases;
    while(test_cases--){
        int max_num = INT_MIN;
        int sum = 0;
        for (int i = 1; i<=7; i++){
            int num;
            cin>>num;
            sum+=num;
            max_num = max(num, max_num);

        }
        cout << (2 * max_num - sum) << "\n";
    }
}