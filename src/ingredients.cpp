#include "ingredients.h"
#include <iostream>

std::shared_ptr<std::string> NYPizzaIngredientFactory::createDough() const {
    std::cout << "Return Dough" << std::endl;
    return std::make_shared<std::string>("Dough");
}

std::shared_ptr<std::string> NYPizzaIngredientFactory::createSauce() const {
    std::cout << "Return Sauce" << std::endl;
    return std::make_shared<std::string>("Dough");
}

std::shared_ptr<std::string> NYPizzaIngredientFactory::createCheese() const {
    std::cout << "Return Cheese" << std::endl;
    return std::make_shared<std::string>("Dough");
}

std::vector<std::shared_ptr<std::string>> NYPizzaIngredientFactory::createVeggies() const {
    std::cout << "Return Veggies" << std::endl;
    return std::vector<std::shared_ptr<std::string>> {std::make_shared<std::string>("veggie1"),
                                                      std::make_shared<std::string>("veggie2")};

}

std::shared_ptr<std::string> NYPizzaIngredientFactory::createPepperoni() const {
    std::cout << "Return pepperoni" << std::endl;
    return std::make_shared<std::string>("Dough");
}

std::shared_ptr<std::string> NYPizzaIngredientFactory::createClam() const {
    std::cout << "Return Clam" << std::endl;
    return std::make_shared<std::string>("Dough");
}