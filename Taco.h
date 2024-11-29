#include <iostream>
#ifndef TACO_H
#define TACO_H
using namespace std;

class Taco {
    private:
    string meat;
    float price;
    //For the user to choose which meat they want, we use constants to indicate the price and meat
    const string meats[3] = {"Pastor", "Chorizo", "Chuleta"};
    const float prices[3] = {20.99, 15.99, 28.99};

    public: 

    //default constructor
    Taco(): meat("Pastor"), price(prices[0]) {}

    //Here the code verifies if the chosen meat is valid (if it exists in the constant)
    //Then it searches for the price of the chosen meat using a for loop
    Taco(string chmeat) {
        bool valid_meat = false;

        for (int i = 0; i < 3; ++i) {
            if (chmeat == meats[i]) {
                meat = chmeat;
                price = prices[i];
                valid_meat = true;
                break;
            }
        }
        if (!valid_meat) {
            cout << "That is not a meat in our menu, I think you meant Pastor! " << endl;
            meat = "Pastor";
            price = prices[0];
        //However if they enter a meat that isn't valid, they will default directly to Pastor
        }
    }

    string get_meat() {return meat;};
    float get_price() {return price;};

};

#endif
