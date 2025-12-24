// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//   for(int i=0; i < n; i++){
//     for(int j = 0; j<i+1; j++){
//         cout << "*";
//     }
//     cout << endl;
//   }
//     return 0;
// }



// for numbers

/*#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i <<" ";
        }
        cout << endl;
    }
    return 0;
} */


//for character

/*#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n = 4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << ch <<" ";
        }
        cout << endl;
        ch++;

    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
  int n = 4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j <<" "; 
        }
        cout << endl;
    }

    return 0; 
} */

 
/*#include<iostream>
using namespace std;
int main(){
  int n = 4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j <<" "; 
        }
        cout << endl;
    }

    return 0; 
} */



// reverse Triangle
/* #include<iostream>
using namespace std;
int main(){
  int n = 4;
    for(int i = 1; i<=n; i++){
        for(int j = i;j>=1; j--){
            cout << j <<" "; 
        }
        cout << endl;
    }

    return 0; 
} */




// floyd's Triangle Patterns
/*#include<iostream>
using namespace std;
int main(){
  int n = 4;
  int num = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << num <<" "; 
            num++;
        }

        
        cout << endl;
    }
 
    return 0; 
} */

/*#include<iostream>
using namespace std;

int n = 4;
int main(){
    for(int i = 0; i<n; i++){ 
        for (int j = 0; j < i+1; j++){
            cout << "*"<<" "; 
        }
        cout<< endl;
    }
}*/


/*#include<iostream>
using namespace std;

int n = 4;
int main(){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < i+1; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}*/



/*#include<iostream>
using namespace std;

int n = 5;
char ch = 'A';
int main(){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < i+1; j++){
            cout << ch << " ";
        }
        ch ++;
        cout << endl;
    }
}*/


#include<iostream>
using namespace std;

int n = 4;
int main(){
    for(int i = 0; i<n; i++){
        for(int j = 1; j <= i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}