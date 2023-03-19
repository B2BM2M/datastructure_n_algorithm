#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void remove() {
    if(head == NULL) {
        cout << "List is empty!" << endl;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void print() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main()
{
    // insert elements into the list
insert(1);
insert(2);
insert(3);
insert(4);
insert(5);

// remove an element from the list
remove();

// print the elements of the list
print();

}