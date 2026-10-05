#include <iostream>
using namespace std;

// MENU Class.
class MENU{
    protected:
        int choice;
    public:
        void menu(void);  // Set [choice] inside this function.
};

void MENU :: menu(void) {
    cout<<"Choose Menu "<<endl<<"1. Factorial "<<endl<<"2. nCr "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

}

// Calculator class inherit Menu class publicly.
class CALCULATOR : public MENU{
    private:
        int num;
        int r;
        int fact = 1, rfact = 1, nrfact = 1;

    public:
        void set_value(void);  // Set [num, r] value.
        void uChoice(void);    // this is main member function to call all functions;
        void factorial(void);   // Calculate factorial.
        void rfactorial(void);    // Calculate rfactorial.
        void ncr(void);         // Calculate nCr[C -> Combination].
};

//Set function
void CALCULATOR :: set_value(void){
    cout<<"Enter the num value : ";
    cin>>num;

    if (choice == 2){
        cout<<"Enter the r value : ";
        cin>>r;
    }
}
//Factorial
void CALCULATOR :: factorial(void) {
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    cout<<"FACTORIAL : "<<fact <<endl;
}
//rFactorial
void CALCULATOR :: rfactorial(void) {
    for (int i = 1; i <= r; i++){
        rfact *= i;
    }
}

// If user call nCr function then run this.
void CALCULATOR :: ncr(void) {
    // Check r value is grater then n show condition result.
    if (r > num) {
        cout << "Invalid input: r cannot be greater than n.";
        return;
    }

    int ncrresult;

    // Call factorial and rfactorial function.
    factorial();
    rfactorial();

    for (int i = 1; i <= num - r; i++) {
       nrfact *= i;
    }
    // Calculate nCr.
    ncrresult = fact / (rfact * nrfact);
    // Show nCr result.
    cout<<"nCr : "<<ncrresult;
}

void CALCULATOR :: uChoice(void){
    // Call the menu() & set_value() functions.
    menu();
    set_value();

    // User choice check
    switch (choice) {
        case 1:
            factorial();
            break;

        case 2:
            ncr();
            break;

        default:
            cout<<"Invalid choice !";
    }
}

int main() {
    CALCULATOR calci;

    calci.uChoice();

    return 0;
}
