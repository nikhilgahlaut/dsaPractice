#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
        Node* head;
    LinkedList(){
        head = NULL;
    }
    //insert@tail
    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    //display Linked list
        void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

//reverse LinkedLIst
Node* reverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr= temp;
    }

    Node* new_head = prev;
    return new_head;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    ll.head = reverseLL(ll.head);
    ll.display();

    return 0;
}