// //SAUCE: https://codeforces.com/problemset/problem/1834/A

// #include<iostream>
// using namespace std;

// int sign(int arr[], int n){
//     int negcount = 0;
//     int poscount = 0;
//     for (int i = 0; i < n; i++){
//         if(arr[i] < 0)
//             negcount++;
//         if(arr[i] > 0){
//             poscount++;
//         }
//     }
//     int diff = (negcount - poscount);
//     if(diff < 0){}
//         for (int i = 0; i < n; i++)
//         {   
//             if(negcount - poscount == i){
//                 int ans = i;
//             }
//         }   
//     }
//     // if all negatives then we have to change sign of all
//     if(negcount == n){
//         return n;
//     }
//     else if(poscount == n){
//         return 0;
//     }
//     else if (diff == 0){
//         return 1;
//     }
    
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         int p = sign(arr, n);
//         cout << p << endl;
//     }
// }

//COPIED CODE:
#include <iostream>

int main() {
    long t;
    std::cin >> t;
    
    while (t--) {
        long n;
        std::cin >> n;
        
        long pos = 0, neg = 0;
        
        for (long p = 0; p < n; p++) {
            int x;
            std::cin >> x;
            
            pos += (x > 0);
            neg += (x < 0);
        }
        
        long move = 0;
        
        if (pos < neg) {
            move = (neg - pos + 1) / 2;
            pos += move;
            neg -= move;
        }
        
        if (neg % 2) {
            ++move;
        }
        
        std::cout << move << std::endl;
    }
    
    return 0;
}

