#include <windows.h>
#include <conio.h>
#include "Customer.h"

CustomerBST::CustomerBST() {
    root = nullptr;
}

void CustomerBST::addCustomer(Customer*& node, string name, string address, string phoneNumber) {
    if (node == nullptr) {
        node = new Customer{name, address, phoneNumber, nullptr, nullptr};
    } else if (name < node->name) {
        addCustomer(node->left, name, address, phoneNumber);
    } else {
        addCustomer(node->right, name, address, phoneNumber);
    }
}

void CustomerBST::addCustomer(string name, string address, string phoneNumber) {
    addCustomer(root, name, address, phoneNumber);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\tCustomer added successfully!" << endl;
    Sleep(1000);
    system("cls");
}

Customer* CustomerBST::searchCustomer(Customer* node, string name) {
    if (node == nullptr || node->name == name) {
        return node;
    }
    if (name < node->name) {
        return searchCustomer(node->left, name);
    }
    return searchCustomer(node->right, name);
}

Customer* CustomerBST::searchCustomer(string name) {
    return searchCustomer(root, name);
}
