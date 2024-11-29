#include <iostream>
#ifndef CLIENT_H
#define CLIENT_H
using namespace std;


class Client {
    private:
    string name;
    float promo;

    public: 
    string get_name() {return name;}
    float get_promo() {return promo;}
    void set_name(string na) {name=na;}
    void set_promo(int percent) {promo = percent / 100.0f;}

    void user_info() {
        string na;
        string prask;
        int percent;



        cout << "Welcome to SuperTaco, to get you started, what is your name? " << endl;
        getline(cin, na);
        set_name(na);
        cout << "Welcome " << get_name() << "!" << endl;
        cout << "Do you have a discount? Yes or no: ";
        cin >> prask;
        if (prask == "Yes") {
            cout << "Please enter the promotion (The %): ";
            cin >> percent;
            set_promo(percent);
        }
        else if (prask == "No") {
            cout << "Ok, don't forget it next time! " << endl;
            set_promo(0);
        }
        else {
            cout << "Invalid input" << endl;
            set_promo(0);
        }

    }
};

#endif
