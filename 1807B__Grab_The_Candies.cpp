//SAUCE: https://codeforces.com/problemset/problem/1807/B

#include<iostream>
using namespace std;

int evensum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(!(arr[i] & 1))
            sum += arr[i];
    }
    return sum;
}

int oddsum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] & 1)
            sum += arr[i];
    }
    return sum;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int Esum = evensum(arr, n);
        int Osum = oddsum(arr, n);

    //on observations we see that if sum of even elements is greater then Mihai wins and vice-versa
        
        if(Esum > Osum){
            cout << "Yes" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}