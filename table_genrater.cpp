#include <iostream>
using namespace std;

class Number {
    protected:
        int number;
        int range;

    public:
        void set_number(void);

};

void Number :: set_number (void) {
    cout<<" Enter the number : ";
    cin>> number;

    cout<<"Enter the range : ";
    cin>>range;
}

class Table : public Number {
    public:
        void table_genrater(void);
};

void Table :: table_genrater(void) {
    for (int i = number; i<= range; i++){
        cout<<"Table of : "<<i<< endl;
        for (int j = 1; j<= 10; j++) {
            cout<<i<<" * "<<j<<" = "<<i*j <<endl;
        }
    }
}


int main() {

    Table num;

    num.set_number();
    num.table_genrater();

    return 0;
}
