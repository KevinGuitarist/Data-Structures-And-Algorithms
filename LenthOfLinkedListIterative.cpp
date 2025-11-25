//Iterative Approach to Find the Length of a Linked List

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int new_data){
        this -> data = new_data;
        this -> next = nullptr;
    }
};

int LengthOfLinkedList(Node* head){
    int count = 0;
    Node* curr = head;
    while(curr != nullptr){
        count++;
        curr = curr -> next;
    }
    return count;
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    cout << "Length of Linked List: " << LengthOfLinkedList(head) << endl;

    return 0;

}
