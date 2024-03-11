//SAUCE: https://codeforces.com/problemset/problem/1791/E

#include <bits/stdc++.h>
using namespace std;

int check(int x, int y){
    if((x >= 0 && y >= 0) || (x < 0 && y < 0))
        return x + y;
    
    if(x < 0 && y > 0){
        if(abs(x) > y)
            return x - y;

        else if(abs(y) > x)
            return y - x;
    }
    return x + y;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0, x, m = INT_MAX, count = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if(x < 0)
                count++;

            sum += abs(x);
            m = min(abs(x), m);
        }

        if (count & 1)      sum -= m * 2;

        cout << sum << endl;
    }
}