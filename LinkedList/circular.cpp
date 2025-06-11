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

    ~Node() {
        int value = this->data;
        if (this->next != nullptr) {
            this->next = nullptr;
        }
        cout << "Memory freed for node with data " << value << endl;
    }
};

void print(Node* tail) {
    if (tail == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

void insertNode(Node*& tail, int element, int data) {
    if (tail == nullptr) {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
        return;
    }

    Node* curr = tail;
    do {
        if (curr->data == element) {
            Node* newNode = new Node(data);
            newNode->next = curr->next;
            curr->next = newNode;
            if (curr == tail) {
                tail = newNode;
            }
            return;
        }
        curr = curr->next;
    } while (curr != tail);

    cout << "Element " << element << " not found in the list." << endl;
}

void deleteNode(Node*& tail, int value) {
    if (tail == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    Node* prev = tail;
    Node* curr = tail->next;

    while (curr->data != value) {
        if (curr == tail) {
            cout << "Node with value " << value << " not found." << endl;
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr == prev) {
        tail = nullptr;
    } else {
        prev->next = curr->next;
        if (curr == tail) {
            tail = prev;
        }
    }

    curr->next = nullptr;
    delete curr;
}

int main() {
    Node* tail = nullptr;

    insertNode(tail, 1, 11);
    print(tail);

    insertNode(tail, 11, 12);
    print(tail);

    insertNode(tail, 12, 13);
    print(tail);

    insertNode(tail, 11, 14);
    print(tail);

    deleteNode(tail, 13);
    print(tail);

    deleteNode(tail, 14);
    print(tail);

    deleteNode(tail, 12);
    print(tail);

    deleteNode(tail, 11);
    print(tail);

    return 0;
}
