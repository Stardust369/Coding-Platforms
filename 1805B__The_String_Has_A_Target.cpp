//SAUCE: https://codeforces.com/problemset/problem/1805/B

//INCOMPLETE

#include<iostream>
#include<string>
using namespace std;

string lexicmpr(string s, int n){
    string str;
    str = s;
    char temp;
    for (int i = 0; i < n- 1; i++){
        for (int j = 0; j < n - 1; j++){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;

            if((str[i] - s[j]) < 0){
                return str;
            }
            str = s;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        cout << lexicmpr(s, n) << endl;
    }   
}