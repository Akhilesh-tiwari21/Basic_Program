#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


class Computer{
    protected:
        string computer_choice;

    public:
        void choice(void);

        void show(){
            cout<<"computer choice :"<<computer_choice<<endl;
        }
};

void Computer :: choice(void) {
    string choice[] = {"stone", "paper", "scissor"};

    int size = sizeof(choice) / sizeof(choice[0]);
    int randomIndex = rand() % size;

    computer_choice = choice[randomIndex];

}

class Player{
    protected:
        string player_choice;

    public:
        void get_choice(void);

};

void Player :: get_choice(void){
    cout<<"Enter the player choice [stone, paper, scissor] :";
    cin>> player_choice;
}


class Result : public Computer, public Player {

    public:
        void show_result(void);
};

void Result :: show_result(void){

    if (computer_choice == player_choice) {
            cout << "Match Draw"<<endl;
        }
        else if ((player_choice == "stone" && computer_choice == "scissor") ||
        (player_choice == "paper" && computer_choice == "stone") ||
        (player_choice == "scissor" && computer_choice == "paper")) {
            cout << "Player Win"<<endl;
        }
        else {
            cout << "Computer Win"<<endl;
        }
}

int main(){
    srand(time(0));

    Result akhil;

    akhil.choice();
    akhil.get_choice();
    akhil.show();
    akhil.show_result();


    return 0;
}
