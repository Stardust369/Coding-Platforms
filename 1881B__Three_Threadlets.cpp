//SAUCE: https://codeforces.com/problemset/problem/1881/B

#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int min = std::min(a, b, c);
        int max = std::max(a, b, c);
        if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0)
            cout << "NO" << endl;
        if((max / min) > 3)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}