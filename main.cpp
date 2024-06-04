#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Customer.h"

using namespace std;

void showMainMenu() {
    system("cls");
    cout << "_____________________________________-ONLINE FOOD DELIVERY SERVICE-_________________________________\n\n\n\n"
         << "\t\t\t\t\t   1-> Manage Orders\n"
         << "\t\t\t\t\t  -------------------\n"
         << "\t\t\t\t\t    2-> Manage Menu\n"
         << "\t\t\t\t\t   -----------------\n"
         << "\t\t\t\t\t  3-> Manage Customers\n"
         << "\t\t\t\t\t ----------------------\n"
         << "\t\t\t\t\t 4-> View Order History\n"
         << "\t\t\t\t\t------------------------\n"
         << "\t\t\t\t\t 5-> Prioritize Orders\n"
         << "\t\t\t\t\t-----------------------\n"
         << "\t\t\t\t\t       0-> Exit\n"
         << "\t\t\t\t\t      ----------\n"
         << "\n\n\n\t\t\t\t   Press the number you want to choose";
}

int main() {
    CustomerBST customerBST;

    char choose;
    do {
        showMainMenu();
        choose = getch();
        switch (choose) {
            case '3': {
                ManageCustomer:
                system("cls");
                char customerchoose;

                cout << "__________________________________________-MANAGE CUSTOMERS-________________________________________\n\n\n\n"
                     << "\t\t\t\t\t   1-> Add Customer\n"
                     << "\t\t\t\t\t  ------------------\n"
                     << "\t\t\t\t\t  2-> Search Customer\n"
                     << "\t\t\t\t\t ---------------------\n"
                     << "\t\t\t\t\t  3-> Delete Customer\n"
                     << "\t\t\t\t\t ---------------------\n"
                     << "\t\t\t\t\t   4-> Edit Customer\n"
                     << "\t\t\t\t\t  -------------------\n"
                     << "\t\t\t\t\t  5-> View Customers\n"
                     << "\t\t\t\t\t --------------------\n"
                     << "\n\n\n\t\t\t\t   Press the number you want to choose"
                     << "\n\n\t\t\t\t   Press backspace to go to main menu";
                customerchoose = getch();
                if (customerchoose == '1') {
                    system("cls");
                    cout << "____________________________________________-ADD CUSTOMER-________________________________________\n\n\n";
                    string name, address, phoneNumber;
                    cout << "\n\nEnter New Customer name: ";
                    getline(cin, name);
                    cout << "Enter address: ";
                    getline(cin, address);
                    cout << "Enter phone number: ";
                    getline(cin, phoneNumber);
                    customerBST.addCustomer(name, address, phoneNumber);
                    goto ManageCustomer;
                }
                break;
            }
            default:
                if (choose == '0'){
                    system("cls");
                    cout << "\n\n\n\n\n\n\t\t\t\t    Thank You for using Our service \n\n"
                         << "\t\t\t\t\t   Have a good day !\n\n\n\n\n\n\n\n";
                    exit(0);
                }
        }
    } while (choose != '\b');

    return 0;
}
