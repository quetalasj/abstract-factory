#include "pizza.h"
#include "iostream"

void Pizza::bake() const {
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut() const {
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box() const {
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

void Pizza::setName(const std::string& name) {
    this->name = name;
}

std::string Pizza::getName() const {
    return name;
}

CheesePizza::CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory) {
    this->ingredientFactory = ingredientFactory;
}

void CheesePizza::prepare() {
    std::cout << "Preparing " << name << std::endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
}

ClamPizza::ClamPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory) {
    this->ingredientFactory = ingredientFactory;
}

void ClamPizza::prepare() {
    std::cout << "Preparing " << name << std::endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    clam = ingredientFactory->createClam();
}