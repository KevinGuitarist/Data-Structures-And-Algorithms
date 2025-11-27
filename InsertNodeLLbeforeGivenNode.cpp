//Insert a node in Linked List before a given node. Using Iteration - O(n) Time and O(n) Space.
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* insertBeforeNode(Node* head, int key, int newData){
    if (head == nullptr){
        return nullptr;
    }
    if(head->data==key){
        Node* newNode = new Node(newData);
        newNode->next = head;
        return newNode;
    }

    Node* curr = head;
    while(curr->next!=nullptr){
        if(curr->next->data==key){
            Node* newNode = new Node(newData);
            newNode->next = curr->next;
            curr->next = newNode;
            return head;
        }
        curr = curr->next;
    }
    cout << "Key not found!" << endl;
    return head;

}

void printLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    int key = 40;
    int newData = 35;
    head = insertBeforeNode(head, key, newData);
    printLL(head);

    return 0;
}
