//SAUCE: https://codeforces.com/problemset/problem/1909/A

#include<iostream>
using namespace std;
//COPIED LOGIC
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int x, y, u, d, r, l;
        u = d = r = l = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> x >> y;

            if(x > 0)
                r = 1;
            if(x < 0)
                l = 1;
            if(y > 0)
                u = 1;
            if (y < 0)
                d = 1;

        /*dont use else if because it would mean only one of four cases is possible which is wrong
        hence, use only if's here so that each case is checked*/

        }
        if((r + l + u + d) < 4){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}