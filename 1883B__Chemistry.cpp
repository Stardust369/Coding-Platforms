//SAUCE: https://codeforces.com/problemset/problem/1883/B

//INCOMPLETE
//got some idea at first but this is getting complex -__-
#include<bits/stdc++.h>
using namespace std;

int alleven(int abc[], int n){
    int x = 0;
    for (int i = 0; i < n; i++){
        if(abc[i] % 2 != 0){
            x++;
        }
    }
    return x;
}

int countodd(int abc[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(abc[i] % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int len, num;
        cin >> len >> num;
        string s;
        cin >> s;
        int abc[26] = {0};

        for (int i = 0; i < len; i++){
            int index = s[i] - 'a';
            abc[index]++;
        }
        int n = 26;
        if(len = 2 && num == 1)
            cout << "YES" << endl;
        else if(alleven(abc, n) == 0)
            cout << "YES" << endl;

        else if(alleven(abc, n) > 0){

            if(countodd(abc, n) == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}