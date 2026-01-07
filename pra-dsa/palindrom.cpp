#include<iostream>
#include<string>
using namespace std;


bool isPalindrome(string s){
    string rev = string(s.rbegin(),s.rend());
    return s == rev;

}

int main(){
    string s = "madam";
    if(isPalindrome(s))
    cout << "Palindrome";
    else
    cout << "Not palindrome";

    return 0;

}