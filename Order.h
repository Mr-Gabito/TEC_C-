#include <iostream>
#include "Taco.h"
#include "STaco.h"
#include "Client.h"


using namespace std;

//In this class, it grabs all the information from the other headers
class Order {
    private:
    Taco taco;
    SuperTaco supertaco;

    public:
    Order(Taco t, SuperTaco sp) : taco(t), supertaco(sp){}

    Order() : taco(), supertaco(){}

    //In the show order function, it gets all the info and puts it into a simple listing structure
    void show_order(Client client) {
        cout << endl;
        cout << endl;
        cout << "Your order: " << endl;
        cout << "A taco de " << taco.get_meat() << endl;
        cout << "With " << supertaco.get_salsa() << " salsa," << endl;
        cout << "And " << supertaco.get_side_dish() << " as a side dish." << endl;
        //Calculates the total price with the order of each section
        float total_price = supertaco.get_sa_price() + supertaco.get_si_price() + taco.get_price();
        //Limits the prices printed to be only 2 decimal points
        printf("The price of the taco is: %.2f, with the salsa: %.2f, and side dish: %.2f.\n",
                taco.get_price(), supertaco.get_sa_price(), supertaco.get_si_price());
        //It prints the total price without the discount
        printf("Total price of: %.2f\n", total_price);
        
        //Then it calculates the price with the discount
        float promo_discount = total_price * client.get_promo();
        float final_price = total_price - promo_discount;
        //Although it only prints something if the user did have a discount
        if (client.get_promo() > 0 ){
            //Finally printing the final price with the discount
            printf("The price with the discount is: %.2f\n", final_price);
        }
        cout << "Thank you for your purchase!";
    }
};
