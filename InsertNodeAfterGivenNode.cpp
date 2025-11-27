//Insert a Node after a given Node in Linked List

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data){
        this-> data = data;
        this -> next = nullptr;
    }
};

Node* insertNodeAfterGivenNode(Node* head, int key, int newData){
    Node* curr = head;
    while(curr!=nullptr){
        if(curr->data==key){
            break;
        };
        curr=curr->next;
    }
    if(curr == nullptr){ //Edge Case
        cout<<"Key not found"<<endl;
        return head;
    } 

    Node* newNode = new Node(newData);
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

void printList(Node* node){
    while(node!=nullptr){
        cout<<node->data;
        cout<<" -> ";
        node = node->next;
    }
}

int main(){
    Node* head = new Node(10);
    head-> next = new Node(20);
    head -> next -> next = new Node(40);
    int key = 20, newData = 30;
    head = insertNodeAfterGivenNode(head, key, newData);
    printList(head);
    return 0;
}



