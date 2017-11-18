#include <iostream>


using namespace std;


class StackLinkedList {

    struct Node {
        int info;
        struct Node *next;
    };

    Node *top;


public:
    void create();

    void printStack();

    void push(int info);

    void pop();

    void search(int info);
};

void StackLinkedList::create() {
    top = NULL;
}

void StackLinkedList::printStack() {

    if (top == NULL) {
        cout << "Stack Empty!!!\n";
        return;
    } else {

        Node *p;
        p = top;

        cout << "\n_______Stack Print_______\n";
        while (p != NULL) {
            cout << p->info << "\n";
            p = p->next;
        }
        cout << "\n++++++++++++++++++++++++++";
    }
}

void StackLinkedList::push(int info) {
    if (top == NULL) {
        top = new Node;
        top->next = NULL;
        top->info = info;

    } else {

        Node *n = new Node;
        n->info = info;
        n->next = top;
        top = n;


    }

    cout << "\n Inserted element:" << info;


}

void StackLinkedList::pop() {
    if (top == NULL) {
        cout << "Stack Empty";
    } else {
        Node *p = top;
        cout << "\nRemoved:" << top->info << "\n";

        top = top->next;
        delete (p);



    }

}

void StackLinkedList::search(int info) {
    if (top == NULL) {
        cout << "Empty Stack";
    } else {
        int f = 0, n = 0;
        Node *p;
        p = top;
        while (p != NULL) {
            n++;
            if (p->info == info) {
                ++f;
                break;
            }

            p = p->next;

        }
        if (f > 0) {
            cout << "Found at index:" << n - 1;
        } else{
            cout<<"Element not found";
        }


    }

}

int main0() {


    StackLinkedList stackLinkedList;
    stackLinkedList.create();

    stackLinkedList.printStack();
    stackLinkedList.push(2);
    stackLinkedList.push(3);

    stackLinkedList.printStack();

    stackLinkedList.search(2);

    stackLinkedList.pop();
    stackLinkedList.printStack();


    return 0;
}