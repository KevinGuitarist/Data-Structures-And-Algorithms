//Insert Node at the End of a Linked List

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};

Node * insertAtEnd(Node *head, int newData){
    Node *newNode = new Node (newData);
    if(head ==nullptr){
        return newNode;
    }
    Node *temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }

    temp -> next = newNode;

    return head;
}

void printLL(Node *head){
    Node *temp = head;
    while(temp!=nullptr){
        cout << temp-> data;
        if(temp->next!=nullptr){
            cout << " -> ";
        }
        temp = temp -> next;
    }
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    cout << "Original Linked List: ";
    printLL(head);
    cout << " ";
    head = insertAtEnd(head, 50);
    printLL(head);
    return 0;
}
