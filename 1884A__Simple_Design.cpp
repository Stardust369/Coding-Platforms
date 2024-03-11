//SAUCE: https://codeforces.com/problemset/problem/1884/A

#include<iostream>
using namespace std;

int DigitSum(int num, int k){
    int sum = 0;
    while(num != 0){
        sum += (num % 10);
        num = num / 10;
    }
    if(sum % k == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int kBeautiful(int x, int k){
    for (int i = 0; i < 100000; i++){
        if (DigitSum((x + i), k)){
            return (x + i);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k,x;
        cin >> x >> k;
        cout << kBeautiful(x, k) << endl;
    }
}