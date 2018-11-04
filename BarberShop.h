//
// Created by Alex on 10/30/2018.
//

#ifndef ASSIGNMENT3PART2_BARBERSHOP_H
#define ASSIGNMENT3PART2_BARBERSHOP_H

#include "Customer.h"

class BarberShop{
    LinkedListQueue<Customer> *cust = new LinkedListQueue<Customer>();
public:
    void addCustomer(Customer& customer){
        cust->insert(customer);
    }
    Customer nextCustomer(){
        Customer temp = cust->front->data;
        cust->deleteitem();
        return temp;
    }
    void displayShopCustomers(){
        cust->display();
    }
    //Copy Constructor
//    BarberShop(const BarberShop& other){
//        cust = other.cust;
//    }
    //Destructor
    ~BarberShop(){
        delete[] cust;
    }
    //Assignment Operator

};

#endif //ASSIGNMENT3PART2_BARBERSHOP_H
