//SAUCE: https://codeforces.com/problemset/problem/1921/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, f, a, b;
        cin >> n >> f >> a >>b;
        long long msg, prevmsg = 0;
        // long long sum = 0;
        for (long long i = 0; i < n; i++){
            cin >> msg;
            // since we need to do something every moment so we need to take minimum of b and a * ([i] - [i - 1])

            f -= min(b, a*(msg - prevmsg));
            prevmsg = msg;
        }
        if(f <= 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}