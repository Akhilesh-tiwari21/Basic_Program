#include <iostream>
using namespace std;

class Subjects{
    protected:
        int math,english,hindi,science,social_science,art;
        int subject_total;

    public:
        void set_marks(void);
};

void Subjects :: set_marks(void) {
    cout<<"Enter the math marks : ";
    cin>>math;
    cout<<"Enter the english marks : ";
    cin>>english;
    cout<<"Enter the hindi marks : ";
    cin>>hindi;
    cout<<"Enter the science marks : ";
    cin>>science;
    cout<<"Enter the social_science marks : ";
    cin>>social_science;
    cout<<"Enter the art marks : ";
    cin>>art;

    cout<<"Enter the subject total : ";
    cin>>subject_total;
}

class Marks : public Subjects {
    protected:
        int obtained;
        float percent;
    public:
        void total(void);

        void percentage(void);

       // void grade(void);
};

void Marks :: total(void) {

    obtained = math+english+hindi+science+art+social_science;

    cout<< "Totla Marks :"<< obtained <<"/" <<subject_total<<endl;
}

void Marks :: percentage(void) {
    percent = ((float)obtained / subject_total) * 100;

    cout<<"Percentage is :"<<percent<<"%";
}



int main() {
    Marks rohan;
    rohan.set_marks();
    rohan.total();
    rohan.percentage();

    return 0;
}
