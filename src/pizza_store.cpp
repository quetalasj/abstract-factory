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


std::shared_ptr<Pizza> NYPizzaStore::createPizza(const std::string &item) const {
    std::shared_ptr<Pizza> pizza ;
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory = std::make_shared<NYPizzaIngredientFactory>();

    if (item == "cheese") {
        pizza = std::make_shared<CheesePizza>(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    } else if (item == "clam") {
        pizza = std::make_shared<ClamPizza>(ingredientFactory);
        pizza->setName("New York Style Clam Pizza");
    }
    return pizza;
}