#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Board{
    string front, back;
};

int main (){
    int N; cin>>N;

    vector<Board> boards (N);
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm', 'n','o', 'p', 'q','r','s','t', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<int> number (26);

    for (int i = 0; i < N; i++){
        cin>>boards[i].front>>boards[i].back;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j< alphabet.size(); j++){
            int a = 0; 
            int b = 0;

            for (int k = 0; k<3; k++ ){
                if (boards[i].front[k] == alphabet[j])
                a+=1;
            }
            for (int k = 0; k<3; k++ ){
                if (boards[i].back[k] == alphabet[j])
                b+=1;
            }
            int x = (max(a,b));
            number[j] +=x;

        }
    }

    for (int num: number){
        cout<<num<<endl;
    }
}