//Print Linked List Using Iterative Method - O(n) Time and O(1) Space

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int new_data){
        this-> data = new_data;
        this-> next = nullptr;
    }
};

void PrintLinkedList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data;
        if(temp->next){
            cout << "->";
        }
        temp = temp-> next;
    }
}

int main(){
    Node* head = new Node(5);
    head -> next = new Node(6);
    head -> next -> next = new Node(7);
    head -> next -> next -> next = new Node(8);
    PrintLinkedList(head);

    return 0;
}
