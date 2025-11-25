//Insert a Node at Front of a Linked List
//Time Complexity: O(1), Auxiliary Space: O(1)

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        this->data=x;
        this->next=nullptr; 
    }
};

// Function to insert a new node at the beginning of the list
Node* insertInFront(Node* head, int x){
    Node* newNode = new Node(x);
    newNode-> next = head;
    return newNode;
}

void PrintList(Node* head){
    Node* curr = head;
    while(curr!=nullptr){
        cout << curr -> data;
        if(curr->next){
            cout << " -> ";
        }
        curr = curr -> next;
    }
}

int main(){
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    int x = 10;
    head = insertInFront(head, x);
    PrintList(head);

    return 0;
}
