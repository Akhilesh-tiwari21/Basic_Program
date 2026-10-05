#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int range, random_number, guess_number;
    srand(time(0));

    cout<<"Enter the range :";
    cin>>range;
    random_number = rand() % range + 1;

    cout<<"Enter the your guess value :";
    cin>>guess_number;

    if(guess_number == random_number) {
        cout<<"CONGRULATION! YOU ARE CORRECT";
    }
    else if (guess_number > random_number) {
        cout<<"YOUR GUESS NUMBER ARE TO BIG";
    }
    else if (guess_number < random_number) {
        cout<<"YOUR GUESS NUMBER ARE TO SHORT";
    }
    else {
        cout<<"EXIT GAME";
    }

    return 0;
}
