//SAUCE:https://codeforces.com/problemset/problem/1873/C

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int sum = 0;
//         int target[10][10] = {
//             {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//             {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
//             {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
//             {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
//             {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
//             {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
//             {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
//             {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
//             {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
//             {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
//         };

//         char str[10][10];
//         for (int i = 0; i < 10; i++){
//             for (int j = 0; i < 10; j++){
//                 cin >> str[i][j];
//                 if(str[i][j] == 'X')
//                     sum += target[i][j];
//             }
//         }
//         cout << sum << endl;
//     }
// }
// //TIME LIMIT EXCEEDED HERE!!!

//PYTHON CODE:-
t = int(input())
while t > 0:
    sum = 0
    target = [
        [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
        [1, 2, 2, 2, 2, 2, 2, 2, 2, 1],
        [1, 2, 3, 3, 3, 3, 3, 3, 2, 1],
        [1, 2, 3, 4, 4, 4, 4, 3, 2, 1],
        [1, 2, 3, 4, 5, 5, 4, 3, 2, 1],
        [1, 2, 3, 4, 5, 5, 4, 3, 2, 1],
        [1, 2, 3, 4, 4, 4, 4, 3, 2, 1],
        [1, 2, 3, 3, 3, 3, 3, 3, 2, 1],
        [1, 2, 2, 2, 2, 2, 2, 2, 2, 1],
        [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    ]
    str = []
    for i in range(10):
        str.append(list(input()))
        for j in range(10):
            if str[i][j] == 'X':
                sum += target[i][j]
    print(sum)
    t -= 1

