//sauce: https://codeforces.com/problemset/problem/1895/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, x, y, n;
    cin >> a;
    for (int i = 0; i<a; i++){
        cin >> x >> y >> n;
    if (y > x){
        if((x+n==y)||(x+n>y)){
            cout << y << endl;
        }
        else{
            int time = (y - (x + n))*2;
            cout << x + n + time << endl;
        }
    }
    else{
        cout << x << endl;
    }
    }
}