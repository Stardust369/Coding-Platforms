//SAUCE: https://codeforces.com/problemset/problem/1849/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int b, c, h, layers = 0;
        cin >> b >> c >> h;
        if(b <= (c + h)){
            layers = 2 * b - 1;
        }
        else{
            layers = 2 * (c + h) + 1;
        }
        cout << layers << endl;
    }
}