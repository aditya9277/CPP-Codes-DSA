//  Given a string, we have to find out all its subsequences of it. A String is a
//  subsequence of a given String, that is generated by deleting some character of a
//  given string without changing its order.

#include <bits/stdc++.h>
using namespace std;

void f(string &str, int i, string result, vector <string> &li){
    if(i== str.length()){
        li.push_back(result);
        return;
    }
    f(str, i+1 , result + str[i], li);
    f(str, i+1 , result, li);
}

int main(){

vector<string> v;
string str = "abc";
f(str , 0 , " " , v);
for(int i=0;i< v.size();i++){
    cout<<v[i]<<" ";
}

return 0;
}

/*
CH soln lec 37
*/

