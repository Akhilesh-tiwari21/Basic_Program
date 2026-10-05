#include <iostream>
using namespace std;

// UNIT CONVERTER FOR [ KG-G, G-MG, KM-M, M-CM, L-ML]
template <class Type>
class Unit {
    protected:
        Type kg, g, mg;
        Type km, m, cm;
        Type l, ml;

    public:
        void set_value(void);
};

template <class Type>
void Unit<Type> :: set_value(void){
    cout<<"Enter the [kilogram] value : ";
    cin>> kg;

    cout<<"Enter the [kilometer] value : ";
    cin>> km;

    cout<<"Enter the [leter] value : ";
    cin>> l;
}

template <class Type>
class Converter : public Unit<Type> {
    public:
        void gram_converter(void);
        void miligram_converter(void);
        void meter_converter(void);
        void centemeter_converter(void);
        void milileter_converter(void);
};

template <class Type>
void Converter<Type> :: gram_converter(void) {
    this->g = this->kg * 1000;

    cout<<"Gram : "<<this->g<<"g" <<endl;
};

template <class Type>
void Converter<Type> :: miligram_converter(void) {
    this->mg = this->g * 1000;

    cout<<"Miligram : "<<this->mg<<"mg" <<endl;
}

template <class Type>
void Converter<Type> :: meter_converter(void) {
    this->m = this->km * 1000;

    cout<<"Meter : "<<this->m<<"m" <<endl;
}

template <class Type>
void Converter<Type> :: centemeter_converter(void) {
    this->cm = this->m * 100;

    cout<< "Centimeter : "<<this->cm<<"cm"<<endl;
}

template <class Type>
void Converter<Type> :: milileter_converter (void) {
    this->ml = this->l * 1000;

    cout<<"Milileter : "<<this->ml<<"ml"<<endl;
}

int main() {
    // Type -> float
    Converter <float> num;

    num.set_value();

    num.gram_converter();
    num.miligram_converter();

    num.meter_converter();
    num.centemeter_converter();

    num.milileter_converter();

    // Type -> int
    Converter <int> nu;

    nu.set_value();

    nu.gram_converter();
    nu.miligram_converter();

    nu.meter_converter();
    nu.centemeter_converter();

    nu.milileter_converter();

    return 0;
}
