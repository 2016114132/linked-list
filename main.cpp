#include <cstddef>
#include <iostream>
using namespace std;

// Class representing a linked list node
class Node {
public:
    int data; // This is the data of the node
    Node * next; // This is the reference to the next node
};

// Function to print the entire list
void printList(Node * n) {
    // Loops until "n" is NULL
    while (n != NULL) {
        // Output the data from the current node
        cout << n->data << " ";

        // Go to the next node
        n = n->next;
    }
}

void insertAtBeginning(Node *& head, int newValue){
    // Create a new node
    Node * newNode = new Node();

    // Add data to the new node
    newNode->data = newValue;

    // Make the new node point to the first node, which is the head here
    newNode->next = head;

    // Update the head to point to the new node
    head = newNode;
}

int main() {

    // Define 3 nodes
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    // Initialize the 3 nodes
    head = new Node();
    second = new Node();
    third = new Node();

    // Add data to the first node and link to the 2nd node
    head->data = 1;
    head->next = second;

    // Add data to the second node and link to the 3rd node
    second->data = 2;
    second->next = third;

    // Add data to the 3rd node. Since this is the last node, we set "next" to NULL
    third->data = 3;
    third->next = NULL;

    // Call function to print the list. We pass the head because that is the entry to the list
    cout << "Original List: ";
    printList(head);

    cout << endl << endl;

    insertAtBeginning(head, 0);
    cout << "Updated List: ";
    printList(head);

    // Clean up allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}
