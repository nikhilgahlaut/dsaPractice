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

    //insert at tail
    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    //display linkedList
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

//delete duplicate LinkedList

void deleteDuplicate(Node* &head){
    Node* curr_node = head;
    while(curr_node->next != NULL){
        while(curr_node->val == curr_node->next->val){
            Node* temp = curr_node ->next;
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        curr_node = curr_node->next;
    }
    
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(4);
    ll.insertAtTail(4);
    ll.insertAtTail(6);
    ll.display();

    deleteDuplicate(ll.head);
    ll.display();


    return 0;
}