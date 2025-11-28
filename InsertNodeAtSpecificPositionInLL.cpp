// Using Iterative Method - O(n) time and O(1) space:

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node *insertAtPosition(Node *head ,int data, int pos){
    if(pos<1){
        return head;
    }

    if(pos==1){
        Node* newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;
    for(int i = 1; i<pos-1 && curr!=nullptr; i++){ //Head->1->2->4->5->NULL
        curr = curr->next;
    }

    if(curr==nullptr){
        return head;
    }

    Node *newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

void PrintLL(Node *head){
    Node *curr = head;
    while(curr!=nullptr){
        cout<<curr->data<<"->";
        curr = curr->next;
    }
}

int main(){
    Node *head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(4);
    head -> next -> next -> next = new Node(5);
    cout << "Original Linked List: ";
    PrintLL(head);
    cout << endl;
    cout << "After insertion at specific position: ";
    head = insertAtPosition(head ,3, 3);
    PrintLL(head);
    
    return 0;
}
