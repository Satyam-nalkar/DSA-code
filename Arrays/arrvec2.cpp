#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);
    vec.push_back(16);
    vec.push_back(17);
    vec.push_back(18);
  cout << vec.size() << endl;
  cout << vec.capacity() << endl; 
    return 0;
}