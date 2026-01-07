// class Solution {
//     public:
//     ListNode* reveseList(ListNode head){
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;

//         while(curr != NULL){
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr -> next
//         }  
//         return prev;
//     }
// }


#include<iostream>
using namespace std;

class ListNode{
public:
    int data;
    ListNode* next;

    ListNode(int val){
        data = val;
        next = NULL;
    }
};


class Solution{
public:
    ListNode* reverseList(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;
    
    while (curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;    
    }
     return prev;   
    }
};


void printList(ListNode* head){
    while (head != NULL){
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);

    cout << "Original List :";
    printList(head);

    Solution sol;
    head = sol. reverseList(head);    

    cout << "Reverse List: ";
    printList(head);

    return 0;
}