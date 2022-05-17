#include <iostream>
#include "memory"
#include "pizza_store.h"


using namespace std;

int main() {
    shared_ptr<PizzaStore> nyStore = make_shared<NYPizzaStore>();

    shared_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl << endl;

    pizza = nyStore->orderPizza("clam");
    cout << "Joel ordered a " << pizza->getName() << endl;

    return 0;
}
