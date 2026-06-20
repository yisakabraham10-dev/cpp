#include<iostream>
#include<algorithm>

using namespace std;

void soln(){
    int n, x, y, z; cin>>n>>x>>y>>z;
    
    //scenario one: when Maxim and Nikita are not using ai

    bool achieved1 = false; int hours1 = 0, code_written1 = 0;

    while(! achieved1){
        hours1+=1;
        code_written1 += x+y;

        if (code_written1>= n){
            achieved1 = true;
        }
        

    }

    int hours2=0, code_writeenv2= 0; bool achieved2 = false;
    while(! achieved2){
        hours2+=1;
        if(hours2> z){
            code_writeenv2 +=(10*y);
        }
        code_writeenv2+=x;
        if (code_writeenv2 >=n){
            achieved2=true;
        }
    }

    cout<<min(hours1,hours2)<<endl;
    

}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;cin>>test_cases;
    while(test_cases--){
        soln();
    }    



}