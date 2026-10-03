// ==========================================================
// 707. Design Linked List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 29 ms (Beats 5%)
// Memory     : 25.7 MB (Beats 53%)
// Link       : https://leetcode.com/problems/design-linked-list/
// ==========================================================

class MyLinkedList {
public:

    struct Node {
        int val;
        Node* next;

        Node(int x) {
            val = x;
            next = NULL;
        }
    };

    Node* head;
    int size;

    MyLinkedList() {
        head = NULL;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;

        Node* curr = head;

        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }

        return curr->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;

        size++;
    }

    void addAtTail(int val) {
        Node* lastNode = new Node(val);

        if (head == NULL) {
            head = lastNode;
            size++;
            return;
        }

        Node* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
        }

        tail->next = lastNode;

        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* curr = head;

        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }

        Node* newNode = new Node(val);

        newNode->next = curr->next;
        curr->next = newNode;

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;

        if (index == 0) {
            Node* temp = head;

            head = head->next;

            delete temp;

            size--;
            return;
        }

        Node* curr = head;

        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }

        Node* temp = curr->next;

        curr->next = temp->next;

        delete temp;

        size--;
    }
};