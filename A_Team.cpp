#include <bits/stdc++.h>
using namespace std;

int main (){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int number_of_problems_that_are_to_be_done;
    cin>>number_of_problems_that_are_to_be_done;

    int sure_answers= 0;



    while(number_of_problems_that_are_to_be_done-- ){
        int petya, vasya, tonya;
        cin>> petya>> vasya>> tonya;
        int sum = petya + vasya + tonya;
        if (sum >=2){
            sure_answers +=1;
        }

    }
    cout<<sure_answers;
    

}

