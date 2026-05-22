#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string x;
        cin >> x;

        int y = x.length();

        if (y > 10) {
            cout << x[0] << (y - 2) << x[y - 1] << '\n';
        }
        else {
            cout << x << '\n';
        }
    }

    return 0;
}