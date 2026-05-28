#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

int main (){

    int n;
    scanf("%d" ,&n);
    

    vector<int> position(3);

    for(int i =0; i<position.size(); i++){position[i] = i;}

    vector<int> counter(3);
    for (int i = 0; i <n; i++){
        int a; int b; int c;

        scanf("%d,%d,%d", &a, &b, &c);
    }

    return 0;


}