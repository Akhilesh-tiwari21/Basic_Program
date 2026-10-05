#include <iostream>
using namespace std;

class Value {
    protected:
        int rate, time, principal;

    public:
        void set_value(void);
};

void Value :: set_value(void) {
    cout<<"Enter the Rate :";
    cin>>rate;
    cout<<"Enter the time :";
    cin>>time;
    cout<<"Enter the principal :";
    cin>>principal;
}


class SimpleIntrest : public Value{
    protected:
        int si;
        string command;
    public:
        void set_command(void);
        void SI(void);
};

void SimpleIntrest :: set_command(void) {
    cout<<"Enter the command :";
    cin>> command;

}

void SimpleIntrest :: SI(void) {

    if (command == "weekly") {
        int weekly;
        cout<<"Enter the week :";
        cin>>weekly;

        si = (principal * rate * time) / (weekly * 100);
        cout<<"Weekly Simple Interest : "<<si;
    }
    else if (command == "monthly"){
        int month;
        cout<<"Enter the month :";
        cin>>month;

        si = (principal * rate * time) / (month * 100);
        cout<<"Monthly Simple Interest : "<<si;
    }
    else if (command == "daily"){
        int daily;
        cout<<"Enter the Day :";
        cin>>daily;
        si = (principal * rate * time) / (daily * 100);
        cout<<"Daily Simple Interest : "<<si;
    }
    else {
        cout<<"No Command";
    }
}

int main(){
    SimpleIntrest si;

    si.set_value();
    si.set_command();
    si.SI();

    return 0;

}
