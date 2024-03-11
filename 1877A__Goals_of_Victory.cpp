//sauce: https://codeforces.com/problemset/problem/1877/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    scanf("%d", &a);
    int  eff_sum;
    int eff, n;
    for (int j = 0; j < a; j++){
        cin >> n;
        eff_sum = 0;
        for (int i = 1; i < n; i++)
        {
            scanf("%d", &eff);
            eff_sum += eff;
        }
        cout << -(eff_sum) << "\n";
    }
}