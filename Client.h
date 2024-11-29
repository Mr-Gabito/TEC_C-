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
    //in this setter, it turns the percent into the promo, which is also divided so it can represent the percentage
    void set_promo(int percent) {promo = percent / 100.0f;}

    void user_info() {
        //This function collects the users data, the users name and if he has a discount or not, which will help with the price
        string na;
        string prask;
        int percent;



        cout << "Welcome to SuperTaco, to get you started, what is your name? " << endl;
        getline(cin, na);
        set_name(na);
        cout << "Welcome " << get_name() << "!" << endl;
        cout << "Do you have a discount? Yes or No: ";
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
        //If the user doesn't have a discount, it is simply ignored, the same goes for if the user enters something invalid
    }
};

#endif
