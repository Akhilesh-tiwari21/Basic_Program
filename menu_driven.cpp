#include <iostream>
using namespace std;

class Menu {
    protected:
        int value_1, value_2;
        int command;

    public:
        void menu(void);
        void set_number(void);
};

void Menu :: menu(void) {
    cout<<"MENU DRIVEN CALCULATOR"<<endl
        <<"=========================="<<endl
        <<"1.Addition"<<endl
        <<"2.Subtraction"<<endl
        <<"3.Multiply"<<endl
        <<"4.Divide"<<endl
        <<"5.Exit"<<endl;

    cout<<"Enter the command : ";
    cin>>command;

    if (command != 5){
        set_number();
    }
}

void Menu :: set_number(void) {
    cout<<"Enter the first number : ";
    cin>>value_1;
    cout<<"Enter the second number : ";
    cin>>value_2;
}

class Operation : public Menu {
    public:
        void task(void);
};

void Operation :: task(void) {
    switch (command) {
        case 1:
            cout<<"Addition : "<<value_1 + value_2;
            break;
        case 2:
            cout<<"Subtraction : "<<value_1 - value_2;
            break;
        case 3:
            cout<<"Multiply : "<<value_1 * value_2;
            break;
        case 4:
            cout<<"Divide : "<<value_1 / value_2;
            break;
        case 5:
            cout<<"Exit";
            break;
        default:
            cout<<"Invalid choice";
            break;
    }
}

int main() {

    Operation calci;

    calci.menu();
    calci.task();


    return 0;
}
