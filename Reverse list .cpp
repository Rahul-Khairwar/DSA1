// 1. Reverse a Linked List (Singly Linked List)

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to reverse the linked list
Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;    // Store next node
        curr->next = prev;    // Reverse current node's pointer
        prev = curr;          // Move prev to current
        curr = next;          // Move to next node
    }
    return prev;
}

// Function to print linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to insert a node at the beginning
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Main function
int main() {
    Node* head = nullptr;

    // Creating linked list: 10->20->30->40
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    cout << "Original Linked List: ";
    printList(head);

    head = reverse(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
