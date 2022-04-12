#include <iostream>
#include "memory"
#include "pizza_store.h"


using namespace std;

int main() {
    shared_ptr<PizzaStore> nyStore = make_shared<NYPizzaStore>(NYPizzaStore());
    shared_ptr<PizzaStore> chicagoStore = make_shared<ChicagoPizzaStore>(ChicagoPizzaStore());

    shared_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl << endl;

    pizza = chicagoStore->orderPizza("cheese");
    cout << "Joel ordered a " << pizza->getName() << endl;

    return 0;
}
