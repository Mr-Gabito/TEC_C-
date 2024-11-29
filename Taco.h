#include <iostream>
#ifndef TACO_H
#define TACO_H
using namespace std;

class Taco {
    private:
    string meat;
    float price;
    const string meats[3] = {"Pastor", "Chorizo", "Chuleta"};
    const float prices[3] = {20.99, 15.99, 28.99};

    public: 

    //default constructor
    Taco(): meat("Pastor"), price(prices[0]) {}


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
        }
    }

    string get_meat() {return meat;};
    float get_price() {return price;};

};

#endif
