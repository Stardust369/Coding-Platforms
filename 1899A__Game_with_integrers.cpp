//Sauce:- https://codeforces.com/problemset/problem/1899/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++){
        a = 0;
        cin >> a;
        // vova has to avoid getting the integer div by 3
        // Vanya has to make the integer divisible by 3
        // on observing, only case where second wins is when a%3=0. HENCE,
        if (a % 3 == 0){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
}