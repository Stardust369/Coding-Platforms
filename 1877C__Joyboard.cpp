#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while (t--){
        int n, m, k;
        cin >> n >> m >> k;

        if (k > 3)
            cout << 0 << endl;

        int cnt1 = (m - n) / n;
        if (k == 3){
            if (n > m)
                cout << 0 << endl;
            else
                cout << m - n - cnt1 << endl;
        }

        if (k == 2){
            if (n > m)
                cout << m << endl;
            else
                cout << n + cnt1 << endl;
        }
        
        if (k == 1)
            cout << 1 << endl;
    }
    return 0;
}