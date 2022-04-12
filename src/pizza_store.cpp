#include "pizza_store.h"
#include "pizza.h"


std::shared_ptr<Pizza> PizzaStore::orderPizza(const std::string& type) {
    std::shared_ptr<Pizza> pizza;

    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}


std::shared_ptr<Pizza> NYPizzaStore::createPizza(const std::string &type) const {
    if (type == "cheese") {
        return std::make_shared<NYStyleCheesePizza>(NYStyleCheesePizza());
    } else {
        return nullptr;
    }
}

std::shared_ptr<Pizza> ChicagoPizzaStore::createPizza(const std::string &type) const {
    if (type == "cheese") {
        return std::make_shared<ChicagoStyleCheesePizza>(ChicagoStyleCheesePizza());
    } else {
        return nullptr;
    }
}