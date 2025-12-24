/*#include<iostream>
using namespace std;

int n = 5;
int main(){
    for(int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}  */


/*#include<iostream>
using namespace std;

int n =5;
int main(){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}*/

/*#include<iostream>
using namespace std;

int n =4;
int main(){
    for(int i = 0;i<n;i++){
        char ch = 'A';
        for(int j = 0; j<n; j++){
            cout << ch ;
            ch = ch + 1; 
        }
        cout << endl;
    }
} */


/*#include<iostream>
using namespace std;

int n = 3;
int num = 1; 
int main(){
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n; j++){
            cout<<num <<" ";
            num ++;
        }
        cout << endl;
    }
}*/

   
#include<iostream>
using namespace std;

int n = 3;
char ch = 'A';
int main(){
    for(int i = 0;i<n; i++){
        for(int j = 0; j<n; j++){
            cout << ch << " ";
            ch ++;
        }
        cout << endl;
    }
}