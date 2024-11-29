#include <iostream>
#include "Taco.h"
#include "STaco.h"
#include "Client.h"


using namespace std;


class Order {
    private:
    Taco taco;
    SuperTaco supertaco;

    public:
    Order(Taco t, SuperTaco sp) : taco(t), supertaco(sp){}

    Order() : taco(), supertaco(){}

    void show_order(Client client) {
        cout << endl;
        cout << endl;
        cout << "Your order: " << endl;
        cout << "A taco de " << taco.get_meat() << endl;
        cout << "With " << supertaco.get_salsa() << " salsa," << endl;
        cout << "And " << supertaco.get_side_dish() << " as a side dish." << endl;

        float total_price = supertaco.get_sa_price() + supertaco.get_si_price() + taco.get_price();
        printf("The price of the taco is: %.2f, with the salsa: %.2f, and side dish: %.2f.\n",
                taco.get_price(), supertaco.get_sa_price(), supertaco.get_si_price());

        printf("Total price of: %.2f\n", total_price);
        
        float promo_discount = total_price * client.get_promo();
        float final_price = total_price - promo_discount;
        if (client.get_promo() > 0 ){
            printf("The price with the discount is: %.2f\n", final_price);
        }
        cout << "Thank you for your purchase!";
    }
};
