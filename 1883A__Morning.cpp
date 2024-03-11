//SAUCE: https://codeforces.com/problemset/problem/1883/A

#include<iostream>
using namespace std;

int seconds(int pin){
    int sum = 4;
    int pastdigit = 10;
    int digit;

    for (int i = 0; i < 4; i++){

        //treat 0 as 10 here because order is 1234567890 (Line 18)
        digit = pin % 10;

        if(digit == 0){
            sum += abs(10 - pastdigit);
            digit = 10;
        }

        else{
            sum = sum + abs(digit - pastdigit);
        }

        pin = pin / 10;
        pastdigit = digit;
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int pin;
        cin>>pin;
        seconds(pin);
    }
}