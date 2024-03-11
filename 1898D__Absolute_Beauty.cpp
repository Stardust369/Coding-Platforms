//Sauce: https://codeforces.com/problemset/problem/1898/D

#include<bits/stdc++.h>
using namespace std;

int min_arr(int a[], int n){
    int min = a[0];
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            x = i;
        }
    }
    return x;
}

int max_arr(int a[], int n){
    int max = a[0];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            x = i;
        }
    }
    return x;
}


int main(){
    int p;
    cin >> p;
    int sum;
    while(p--){
        int n = 0;
        cin >> n;
        int a[n], b[n];
        sum = 0;
        for (int q = 0; q < n; q++){
            cin >> a[q];
        }
        for (int q = 0; q < n; q++){
            cin >> b[q];
        }

        for (int i = 0; i < n; i++){
            if (a[i]>b[i]){
                swap(a[i], b[i]);
            }
        }
        
        int min_index = min_arr(a, n);
        int max_index = max_arr(b, n);

        for (int i = 0; i < n; i++){
            if(i == min_index){
                swap(b[min_index], b[max_index]);
                break;
            }
        }

        for (int i = 0; i < n; i++){
            sum += abs(a[i] - b[i]);
        }
        cout << sum << endl;
    }
}


//test cases
// 6
// 3
// 1 3 5
// 3 3 3
// 2
// 1 2
// 1 2
// 2
// 1 2
// 2 1
// 4
// 1 2 3 4
// 5 6 7 8
// 10
// 1 8 2 5 3 5 3 1 1 3
// 2 9 2 4 8 2 3 5 3 1
// 3
// 47326 6958 358653
// 3587 35863 59474
