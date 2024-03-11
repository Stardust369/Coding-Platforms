//SAUCE: https://codeforces.com/problemset/problem/1879/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int str1, end1;
        cin >> str1 >> end1;
        bool chance = true;
        for (int i = 1; i < n; i++)
        {
            int str, end;
            cin >> str >> end;

            if(str>=str1 && end>=end1){
                chance = false;
            }
        }
        if(chance){
            cout << str1 << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}