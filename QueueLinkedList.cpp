//
// Created by thegeekybaniya on 18/11/17.
//

#include <iostream>


using namespace std;

class QueueLinkedList{
    struct Node {
        int info;
        struct Node *next;
    };

    Node *front, *rear;


public:
    void create(){
        front=NULL;
        rear=NULL;
    }

    void enqueue(int data){
        Node *n= new Node;
        n->info=data;
        n->next=NULL;
        cout<<"\nAdding to queue:"<<data<<"\n";

        if (front==NULL&&rear==NULL) {

            front = n;
            rear = n;


//        } else if (front==rear&&rear!=NULL){

        } else{
            rear->next=n;
            rear=n;

        }
    }

void dequeue(){
    if (front==rear&& front==NULL){
        cout<<"\nqueue empty!!\n";
        return;
    } else if (front==rear&& front!=NULL){
        Node *p;
        p=front;
        front=NULL;
        rear=NULL;
        cout<<"\n Dequeuing:"<<p->info;
        delete(p);

    } else{
        Node *p;
        p=front;
        front=front->next;
        cout<<"\n Dequeuing:"<<p->info;
        delete(p);
    }
}
    void printQueue(){
        if (front==rear&& front==NULL){
            cout<<"\nEmpty Queue\n";

        } else{
            Node *p;
            p=front;
            cout<<"\n________________Print Queue_________\n";
            while (p!=NULL){
                cout<<"\n"<<p->info<<"\n";
                p=p->next;
            }
            cout<<"\n++++++++++++++++++++++++++++++++\n";
            return;
        }

    }


    void searchQueue(int data){
        int n=0,f=0;
        if (front==rear&& front==NULL){
            cout<<"\nEmpty Queue\n";

        } else{


            Node *p;
            p=front;
            while (p!=NULL){
                ++n;
                if (p->info==data){
                    ++f;
                    break;
                }

                p=p->next;

            }
            if (f>0){
            cout<<"\nFound element at:"<<n-1;
        } else{
                cout<<"\nElement not found";
            }
        }



    }

};

int main(){

    QueueLinkedList queueLinkedList;
    queueLinkedList.create();
    queueLinkedList.printQueue();
    queueLinkedList.enqueue(2);
    queueLinkedList.printQueue();
    queueLinkedList.dequeue();
    queueLinkedList.printQueue();
    queueLinkedList.enqueue(4);
    queueLinkedList.enqueue(9);
    queueLinkedList.enqueue(7);
    queueLinkedList.dequeue();
    queueLinkedList.printQueue();
    queueLinkedList.searchQueue(7);
    queueLinkedList.searchQueue(8);



    return 0;
}


