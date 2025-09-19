#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>&arr, int st, int end){
    int idx = st-1,  pivot = arr[end];
    for(int j = st; j <end;j++){
    if(arr[j] <= pivot){
       idx ++;
       swap(arr[j],arr[idx]); 
      }
    }

    idx ++;
    swap(arr[idx], arr[end]);
    return idx; 
}


void quickSort(vector<int>&arr, int st, int end){
   if(st < end){
    int PivIdx = partition(arr, st, end);   
    quickSort(arr, st, PivIdx-1);  //left half
    quickSort(arr, PivIdx+1, end); //right half

   }
}


int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    quickSort(arr, 0, arr.size()-1); 

    for(int val : arr){
      cout << val << " ";    
    } 

    return 0;
}