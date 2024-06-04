#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string address;
    string phoneNumber;
    Customer* left;
    Customer* right;
};

class CustomerBST {
private:
    Customer* root;
    void addCustomer(Customer*& node, string name, string address, string phoneNumber);
public:
    CustomerBST();
    void addCustomer(string name, string address, string phoneNumber);

};

#endif
