#include <iostream>
using namespace std;

class Number{
    protected:
        int value;

    public:
        void set_value(void);
        void positive_negative(void);
};

void Number :: set_value(void) {
    cout<<"Enter the value :";
    cin>>value;
}

void Number :: positive_negative(void) {
    if (value < 0) {
        cout << "The value is negative" << endl;
    }
    else if (value > 0) {
        cout << "The value is positive" << endl;
    }
    else {
        cout << "The value is zero" << endl;
    }
}

class EvenOdd : public Number{
    public:
        void check_even_odd(void);
};

void EvenOdd :: check_even_odd(void) {
    if (value % 2 == 0){
        cout<<"Number Are Even"<<endl;
    }
    else {
        cout<<"Number Are Odd"<<endl;
    }
}

class Factorial : public EvenOdd{
    int multi;
    public:
        void fact(void);
};

void Factorial :: fact(void) {
    multi = 1;
    for (int i=value; i >= 1; i--){
        multi *= i;
    }
    cout<<"Factorial is : "<<multi;
}

int main(){
    Factorial number;

    number.set_value();
    number.positive_negative();
    number.check_even_odd();
    number.fact();


    return 0;

}
