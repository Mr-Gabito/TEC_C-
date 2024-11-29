#include <iostream>
#include "Taco.h"
#include "STaco.h"
#include "Client.h"
#include "Order.h"


int main(){
    string user_chmeat;
    string user_chsalsa;
    string user_chside;
    Client client;

    client.user_info();

    cout << "What type of taco would you like? We have Pastor, Chorizo and Chuleta: " << endl;
    cin >> user_chmeat;
    cin.ignore();
    Taco taco(user_chmeat);

    cout << "Which salsa would you like with that? We have Red, Green and Fuego: " << endl;
    cin >> user_chsalsa;
    cin.ignore();
    cout << "Which side dish would you like to come with your food? We have Frijoles Charros, Guacamole and a Quesadilla: " << endl;
    getline(cin, user_chside);
    SuperTaco supertaco(user_chsalsa, user_chside);

    Order order {taco, supertaco};

    order.show_order(client);

    
    return 0;
}
