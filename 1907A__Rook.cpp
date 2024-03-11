//Sauce: https://codeforces.com/problemset/problem/1907/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char num[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char place[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char str[3];

    for (int i = 0; i < n; i++){
    cin >> str;
    for (int j = 0; j < 8; j++){
        if(str[0] == place[j]){
            for (int k = 0; k < 8; k++){
                if((str[1]-48) != (k+1)){
                    cout << str[0];
                    cout << k+1;
                    cout << endl;
                }
            }
        }
        else{
            cout << place[j];
            cout << str[1];
            cout << endl;
        }
    }
}
}