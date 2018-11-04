//
// Created by Alex on 10/30/2018.
//

#ifndef ASSIGNMENT3PART2_CUSTOMER_H
#define ASSIGNMENT3PART2_CUSTOMER_H
#include "LinkedListQueue.h"
#include <iostream>

class Customer{
    string fName, lName;
public:
    Customer(string _fName, string _lName){
        fName = _fName;
        lName = _lName;
    }
    string getName(){
        return fName + ", " + lName;
    }

    friend ostream& operator<<(ostream&os, Customer cust){
        os << cust.fName + ", " + cust.lName << endl;
        return os;
    }
    bool operator==(Customer & cust){
        return fName == cust.fName && lName == cust.lName;
    }
    //copy constructor
    Customer(const Customer& cust){
        fName = cust.fName;
        lName = cust.lName;
    }
    //Destructor
    ~Customer()= default;
    //Assignment operator
    Customer operator=( Customer* other){
        if (this != other){
            fName = other->fName;
            lName = other->lName;
        }
        return *this;
    }

};



#endif //ASSIGNMENT3PART2_CUSTOMER_H
