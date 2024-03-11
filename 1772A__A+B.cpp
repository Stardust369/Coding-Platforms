//SAUCE: https://codeforces.com/problemset/problem/1772/A

#include<bits/stdc++.h>
using namespace std;

int secondnum(string str, int idx){
    int b = 0;
    for(int i = idx; i < str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            b = b * 10 + (str[i] - '0');
        }
    }
    return b;
}

int firstnum(string str){
    int a = 0;
    int b = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '+'){
            b = secondnum(str, i);
            break;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            a = a * 10 + (str[i] - '0');
        }
    }
    int sum = a + b;
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        cout << firstnum(str) << endl;
    }
}