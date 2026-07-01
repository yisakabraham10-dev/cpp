#include <iostream>
#include <string>

using namespace std;

void soln(string word, int counterA, int counterD, int nono = 0);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string word; 
    int num; 

    cin >> num >> word;
    
    soln(word, 0, 0, 0);

    return 0;
}
void soln(string word, int counterA, int counterD, int nono) {
    if (word.length() == nono) {
        if (counterA > counterD) {
            cout << "Anton\n";
        }
        else if (counterA < counterD) {
            cout << "Danik\n";
        }
        else {
            cout << "Friendship\n";
        }
        return; 
    }
    if (word[nono] == 'A') {
        counterA++;
    } else if (word[nono] == 'D') {
        counterD++;
    }
    soln(word, counterA, counterD, nono + 1);
}