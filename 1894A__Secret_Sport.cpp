//SAUCE: https://codeforces.com/problemset/problem/1894/A

#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(s[n - 1] == 'A')
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
}