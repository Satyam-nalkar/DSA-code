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
/*#include<iostream>
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
}*/


// Inverted Triangle pattern
/*#include<iostream>
using namespace std;
int n = 4;

int main(){
    for (int i = 0; i < n; i++){
        for (int space = 0; space <= i; space++){
            cout << " ";
        }
        for (int j = 1; j < n-i+1 ; j++){
            cout << i+1 ;
        }
        cout << endl;
    }
    
}*/


// pyramid pattern
/*#include<iostream>
using namespace std;
int n = 4;

int main(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1 ; j++){
            cout << " ";
        }
        for (int j = 1; j <= i+1 ; j++){
            cout << j ;
        }
        for(int j =i; j >=1 ;j--){
            cout << j;
        }
        
        cout << endl;
    }
}*/



#include<iostream>
using namespace std;
int n = 4;

int main(){
    // up part
    for (int i = 0; i < n; i++){
        for(int j = 0;j<n-i-1; j++){
            cout <<" ";
        }
        cout << "*";

        if(i != 0){
            for(int j =0; j< 2*i -1; j++){
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }

    // bottom part
    for(int i = 0; i < n-1; i++){
    //    space
        for(int j =0; j < i+1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != n-2){
            // space
           for(int j = 0; j<2*(n-i)-5; j++){
            cout << " ";
           }
           cout << "*";
        }
        cout << endl;

    }
    return 0;
    }
