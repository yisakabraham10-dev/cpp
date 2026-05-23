//263A
#include<bits/stdc++.h>
#include<cstdlib>


using namespace std;

int main (){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;

    int mat[5][5];

    for (int r =0; r < 5; r++){
        for (int c = 0; c<5; c++){
            cin>>mat[r][c];
            if (mat[r][c]==1){
                r++;
                c++;
                x =abs(3-r);
                y = abs(3-c);

                cout <<x+y;
                return 0;

            } 
        }
    }

    
}