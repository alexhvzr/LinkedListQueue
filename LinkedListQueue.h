//
// Created by Alex on 10/30/2018.
//

#ifndef ASSIGNMENT3PART2_LINKEDLISTQUEUE_H
#define ASSIGNMENT3PART2_LINKEDLISTQUEUE_H

#include <iostream>
using namespace std;
template <class T>
struct node{
    T data;
    node<T> *next;
    node() {
        data;
        *next;
    };

    node(T data) : data(data), next(nullptr) {}
};
template <class T>
class LinkedListQueue{
public:

    node<T> *front,*rear;
    LinkedListQueue(){
        front = rear = NULL;
    };

    void insert(T& item){
        node<T> *newNode = new node<T>(item);

        //checks if there is no one in the null, places one in
        if(front == NULL){
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
    };

    void deleteitem(){
        if (front == NULL){
            cout << "No one left in the Queue";
            return;
        }
        if(front == rear){
            front = rear = NULL;
        }
        else {
            front = front->next;
        }
    };

    void display(){
        node<T> *temp;
        temp = front;
        while(temp!= NULL){
            cout << temp->data;
            temp = temp->next;
        }
    };

    void deleteList(){
        node<T> *temp;
        while(front!= NULL){
            temp = front;
            front = front->next;
            delete temp;
        }
        rear = NULL;
    }
//Destructor
    ~LinkedListQueue(){
       deleteList();
    };
};



//copy constructor



//assignment operator

#endif //ASSIGNMENT3PART2_LINKEDLISTQUEUE_H
