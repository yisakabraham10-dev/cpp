#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;


void soln(string &word,int n){
    if (n==word.length()){
        return;
    }
    if(word[n]== 'a'||word[n]== 'e'||word[n]== 'i'||word[n]== 'o'||word[n]== 'u'||word[n]== 'y'){}
    else{
        cout<<"."<<word[n];
    }
    soln(word, n+1);
}

int main (){
    string word;
    cin>>word;

    transform(word.begin(),word.end(), word.begin(), ::tolower);

    int index = 0;
    soln(word, index );
    
}