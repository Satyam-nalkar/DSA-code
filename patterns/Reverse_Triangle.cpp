/*#include<iostream>
using namespace std;

int n = 4;
int main(){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j >= 1 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}*/


//floyd's Triangle Pattern
#include<iostream>
using namespace std;

int n = 4;
int num = 1;
int main(){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < i+1 ; j++){
            cout<< num << " ";
            num ++ ;
        }
        cout << endl;
    }
}