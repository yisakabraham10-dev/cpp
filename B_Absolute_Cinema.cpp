#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;
long long soln(); // Changed return type to long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        cout << soln() << "\n";
    }
    return 0;
}

long long soln(){ // Changed return type to long long
    int iterations; 
    cin >> iterations;
    
    vector<int> arra(iterations);
    vector<int> arrb(iterations);
    
    for (int i = 0; i < iterations; i++){
        cin >> arra[i];
    }
    for (int i = 0; i < iterations; i++){
        cin >> arrb[i];
    }
    
    for (int i = 0; i < iterations; i++){
        if (arra[i] > arrb[i]){
            swap(arra[i], arrb[i]);
        }
    }
    
    long long m = 0; // Changed to long long to prevent overflow during summation
    for (int i = 0; i < iterations; i++){
        m += arrb[i];
    }
    
    int max_a = *max_element(arra.begin(), arra.end());
    
    return max_a + m; // The int max_a will be safely promoted to long long here
}