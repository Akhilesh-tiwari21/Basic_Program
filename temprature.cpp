#include <iostream>
using namespace std;

class  Fahrenheit {
    // °F = (°C × 1.8) + 32 
    protected:
        float celsius;
        float fahrenheit;

    public:
        void set_value(void);

        void temp_fahrenheit(void);
};

void Fahrenheit :: set_value(void) {
    cout<<"Enter the temprature [ In Celsius ] :";
    cin>> celsius;
}

void Fahrenheit :: temp_fahrenheit(void) {
    fahrenheit = (celsius * 1.8) + 32;

    cout<<"Fahrenheit : "<<fahrenheit << endl;
}


class  Celsius : public Fahrenheit{
    //  °C = (°F - 32) × 5/9
    public:
        void temp_celsius(void);
};

void Celsius :: temp_celsius(void) {
    celsius = (fahrenheit - 32) * 5.0/9.0;

    cout<<"Celsius : "<<celsius;
}


class ShowOutput : public Celsius{
    public:
        void show_output(void);
};

void ShowOutput :: show_output(void) {
    set_value();
    temp_fahrenheit();
    temp_celsius();
}

int main() {
    ShowOutput tem;

    tem.show_output();

    return 0;

}
