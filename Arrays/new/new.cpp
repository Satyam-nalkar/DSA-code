#include<iostream>
using namespace std;

int main(){
    
    int year;
    cout <<"enter the year"<<endl; 
    cin >> year;
    if(year % 4 == 0){
        cout << "given year is leep year";
    }else{
        cout << "given year is not leep year";
    }
    
    return 0;
}

// 00:00
// 00:01
// 00:02
// 00:03
// 00:04
// 00:05

// 01:00
// 01:01

// int A = 00.00;
// int min = 1;
// for(int i = 0; i< 61; i++){
//     cout << "00:" << i << endl;

//     if(i == 60){
//     cout << min << endl;
//     }
    
// }


// int A = 1;

// while(true){
//      A++;
//     if(A == 10){
//         break;
//     } 
//     cout << A << endl;
//     }

//     cout << A << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int min = 0;

//     while (true) {
//         for (int sec = 0; sec < 60; sec += 4) {

//             // print minutes with 0 if needed
//             if (min < 10) cout << "0";
//             cout << min << ":";

//             // print seconds with 0 if needed
//             if (sec < 10) cout << "0";
//             cout << sec << endl;
//         }

//         min++;   // after 00:59, minute becomes 01
//     }

//     return 0;
// }
