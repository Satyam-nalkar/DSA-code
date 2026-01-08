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


void insertAtBeginning(ListNode* &head, int val){
    ListNode * newNode = new ListNode(val);

    newNode -> next = head;
    head = newNode;
}

void insertAtEnd(ListNode* &head, int val){
    ListNode * newNode = new ListNode(val);
    
    if(head == NULL){
        head = newNode;
        return;
        
    }
    ListNode* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void printList(ListNode* head){
    while (head != NULL){
        cout << head -> data << "-> ";
        head = head -> next;
    }
    cout << "NULL" << endl;
}



int main(){

    ListNode* head = NULL;

    insertAtBeginning(head,2);
    insertAtBeginning(head,1);
    insertAtEnd(head,3);
    insertAtEnd(head,4);

    printList(head);

    return 0;
}