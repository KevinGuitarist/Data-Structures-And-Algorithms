//Search an element in a Linked List, Iterative Approach - O(n) Time and O(1) Space

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int new_data){
        data = new_data;
        next = NULL;
    }
};
int SearchElement(Node* head, int key){
    Node* curr = head;
    while(curr!=nullptr){
        if(curr->data==key){
            return true;
        }
        curr = curr-> next;
    }
    return false;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    int key = 70;
    if(SearchElement(head, key)){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
