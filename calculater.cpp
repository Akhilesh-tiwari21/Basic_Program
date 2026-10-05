#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Calculator{
    protected:
        int value_1, value_2;

    public:
        void set_value(void);

        void print(void){
            cout<<"SIMPLE CALCULATOR"<<endl;
        }

};

void Calculator :: set_value(void){
    cout<<"Enter the value : ";
    cin>>value_1;
    cout<<"Enter the value : ";
    cin>>value_2;
}


class Task {
    protected:
        string command;

    public:
        void get_task(void);

};

void Task :: get_task(void){
    cout<<"Enter the task [add, sub, multiply, divide, remainder, square, square_root] :";
    cin>>command;
}


class Calculate : public Calculator, public Task {
    public:
        void action(void);
};

void Calculate :: action(void){
    if (command == "add"){
        cout<<"ADDITION : "<<value_1 + value_2;
    }
    else if (command == "sub"){
        cout<<"SUBTRACTION : "<<value_1 - value_2;
    }
    else if (command == "multiply"){
        cout<<"MULTUPLY : "<<value_1 * value_2;
    }
    else if (command == "divide"){
        if(value_2 == 0) {
            cout<<"value_2 is 0 then not divide.";
        } else {
            cout<<"DIVIDE : "<<value_1 / value_2;
        }

    }
    else if (command == "remainder"){
        cout<<"REMAINDER : "<<value_1 % value_2;
    }
    else if (command == "square"){
        cout<<"SQUARE OF VALUE_1 : "<<value_1 * value_1<<endl;
        cout<<"SQUARE OF VALUE_2 : "<<value_2 * value_2<<endl;
    }
    else if (command == "square_root"){
        cout<<"SQRT : "<<sqrt(value_1)<<endl;
        cout<<"SQRT : "<<sqrt(value_2)<<endl;
    }
    else {
        cout<<"EXIT THE CODE";
    }
}



int main() {
    Calculate num;

    num.print();
    num.set_value();
    num.get_task();
    num.action();

    return 0;

}
