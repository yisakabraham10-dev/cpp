#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void soln() {
    string s; 
    cin >> s;
    
    int pref2 = 0;
    int suf = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1' || s[i] == '3') {
            suf += 1;
        }
    }
    
    int ans = pref2 + suf;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '2') {
            pref2 += 1;
        }
        if (s[i] == '1' || s[i] == '3') {
            suf -= 1;
        }
        ans = max(ans, pref2 + suf);
    }
    
    cout << s.length() - ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases; 
    cin >> test_cases;
    while (test_cases--) {
        soln();
    }

    return 0;
}