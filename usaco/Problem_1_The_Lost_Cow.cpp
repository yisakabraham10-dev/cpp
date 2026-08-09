#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin>>x>>y;

    int farmer = x;
    int bessie = y;
    int direction = 1;
    int total = 0;
    int start = x;;
    int step = 1;
    int direction = 1;

    while(true){
        int target = start + (direction * step);

        //if bessie is in walking range of the farmer
        if ((start<=bessie && bessie<= target) || (bessie<= start && target <= bessie)){
            total += abs(start - bessie);
            break;
        }
        

        total += abs (farmer -target);
        farmer = target;


        step*=2;
        direction *= -1;
    }
    cout <<total;
}