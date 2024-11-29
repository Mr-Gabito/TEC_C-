#include <iostream>
#ifndef STACO_H
#define STACO_H
using namespace std;

class SuperTaco {
    private:
    string salsa;
    string side_dish;
    float sa_price;
    float si_price;
    const string salsas[3] = {"Red", "Green", "Fuego"};
    const float sal_prices[3] = {3.00, 3.00, 4.99};
    const string sides[3] = {"Frijoles Charros", "Guacamole", "Quesadilla"};
    const float si_prices[3] = {11.99, 12.99, 14.99};

    public:

    //default constructor
    SuperTaco(): salsa("Red"), side_dish("Frijoles Charros"), sa_price(sal_prices[0]), si_price(si_prices[0]){}


    SuperTaco(string chsalsa, string chside) {
        bool valid_salsa = false;
        bool valid_side = false;
        
        for (int i = 0; i < 3; i++){
            if (chsalsa == salsas[i]){
                salsa = chsalsa;
                sa_price = sal_prices[i];
                valid_salsa = true;
                break;
            }
        }
        if (!valid_salsa) {
            cout << "That salsa is not in our menu, I think you meant Red Salsa! " << endl;
            salsa = "Red";
            sa_price = sal_prices[0];
        }


        for (int i = 0; i < 3; i++){
            if (chside == sides[i]){
                side_dish = chside;
                si_price = si_prices[i];
                valid_side = true;
                break;
            }
        }
        if (!valid_side) {
            cout << "That side dish does not exist, I think you meant Frijoles Charros! " << endl;
            side_dish = "Frijoles Charros";
            si_price = si_prices[0];
        }
    }

    string get_salsa() {return salsa;}
    float get_sa_price() {return sa_price;}
    string get_side_dish() {return side_dish;}
    float get_si_price() {return si_price;}
};

#endif
