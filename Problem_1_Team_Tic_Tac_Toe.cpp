#include <iostream>
#include<set>
#include<vector>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int>r1;
    set<int>r2;
    set<int>r3;
    set<int>c1;
    set<int>c2;
    set<int>c3;
    set<int>lr;
    set<int>rl;

    vector<char> row1 (3);
    vector<char> row2 (3);
    vector<char> row3 (3);

    for (int i = 0; i < 3; i++){
        cin>>row1[i];
    }

    for (int i = 0; i < 3; i++){
        cin>>row2[i];
    }
    
    for (int i = 0; i < 3; i++){
        cin>>row3[i];
    }

    //rows
    r1.insert(row1[0]);
    r1.insert(row1[1]);
    r1.insert(row1[2]);

    r2.insert(row2[0]);
    r2.insert(row2[1]);
    r2.insert(row2[2]);

    r3.insert(row3[0]);
    r3.insert(row3[1]);
    r3.insert(row3[2]);

    //columns
    c1.insert(row1[0]);
    c1.insert(row2[0]);
    c1.insert(row3[0]);

    c2.insert(row1[1]);
    c2.insert(row2[1]);
    c2.insert(row3[1]);

    c3.insert(row1[2]);
    c3.insert(row2[2]);
    c3.insert(row3[2]);

    //diagonal
    lr.insert(row1[0]);
    lr.insert(row2[1]);
    lr.insert(row3[2]);

    rl.insert(row1[2]);
    rl.insert(row2[1]);
    rl.insert(row3[0]);

    int alpha1 = 0;
    int alpha2 = 0;

    //checking if it is correct
    if (r1.size()== 1){
        alpha1+=1;
    }
    if (r1.size()==2){
        alpha2+=1;
    }
    
    if (r2.size()== 1){
        alpha1+=1;
    }
    if (r2.size()==2){
        alpha2+=1;
    }

    if (r3.size()== 1){
        alpha1+=1;
    }
    if (r3.size()==2){
        alpha2+=1;
    }

    if (c1.size()== 1){
        alpha1+=1;
    }
    if (c1.size()==2){
        alpha2+=1;
    }

    if (c2.size()== 1){
        alpha1+=1;
    }
    if (c2.size()==2){
        alpha2+=1;
    }

    if (c3.size()== 1){
        alpha1+=1;
    }
    if (r3.size()==2){
        alpha2+=1;
    }

    if (lr.size()== 1){
        alpha1+=1;
    }
    if (lr.size()==2){
        alpha2+=1;
    }

    if (rl.size()== 1){
        alpha1+=1;
    }
    if (rl.size()==2){
        alpha2+=1;
    }

    cout<< alpha1<<endl;
    cout<<alpha2<<endl;

    return 0;
}