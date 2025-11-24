// Representation of Doubly Linked List in Data Structure

#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

// Creating a Doubly Linked List with 4 Nodes
int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> prev = head;
    head -> next -> next = new Node(30);
    head -> next -> next -> prev = head -> next;
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> prev = head -> next -> next;

    Node* temp = head;
    
    while(temp!=nullptr){
        cout << temp -> data << "";
        if(temp->next != nullptr){
            cout << "<->";
        }
        temp = temp -> next;
    }
    return 0;
}
