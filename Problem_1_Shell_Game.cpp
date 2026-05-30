#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int x;
    cin >> x;

    vector<vector<int>> universes = {
        {1, 0, 0}, // Universe 1: Pebble starts at Shell 1 (Index 0)
        {0, 1, 0}, // Universe 2: Pebble starts at Shell 2 (Index 1)
        {0, 0, 1}  // Universe 3: Pebble starts at Shell 3 (Index 2)
    };

    // Tracks the independent scores for each universe
    vector<int> points{0, 0, 0};

    while (x--) {
        int a, b, g;
        cin >> a >> b >> g;
        
        a = a - 1;
        b = b - 1;
        g = g - 1;

        for (int i = 0; i < 3; i++) {
            swap(universes[i][a], universes[i][b]);

            if (universes[i][g] == 1) {
                points[i] += 1;
            }
        }
    }

    int max_points = max({points[0], points[1], points[2]});
    
    cout << max_points << "\n";



    return 0;
}