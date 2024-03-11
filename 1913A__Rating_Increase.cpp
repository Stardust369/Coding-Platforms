//SAUCE: https://codeforces.com/problemset/problem/1913/A

#include<bits/stdc++.h>
using namespace std;
//IDK HOW TO USE STRING AS AN INTEGER!!
int GetDivisor(string ab){
    for (int i = 1; i < ab.length(); ){
        int a = int(ab)/(pow(10, i));
        int b = int(ab) % (pow(10, i));
        if(a*b == int(ab)){
            return i;
        }
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string ab;
        int d = GetDivisor(ab);
        if(d = -1){
            cout << d << endl;
        }
        else{
            cout << (ab / (10 ** d)) << " " << (ab % (10 ** d)) << endl;
        }
    }
}
