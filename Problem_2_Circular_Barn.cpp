#include<iostream>
#include<vector>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std; 

int main (){
    int N;
    cin>>N;
    
    vector<int>nums (N);
    for (int i = 0; i< N; i++){
        cin>>nums[i];
    }
    int num = INT_MAX;

    for(int positions =0; positions<N; positions++){
        int sum = 0;

        //try to find the number in which i can try to add the numbers
        for (int i =0; i< N; i++){
            //now add the numbers and check for the minimum number
            sum += nums[(positions +i)%N]*i;
        }
    num = min(num, sum);

    }
    cout<<num;
}