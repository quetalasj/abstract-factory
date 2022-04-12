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

std::string Pizza::getName() const {
    return name;
}

void Pizza::prepare() const {
    std::cout << "Preparing " << name << std::endl;
    std::cout << "Tossing dough..." << std::endl;
    std::cout << "Adding sauce..." << std::endl;
    std::cout << "Adding toppings: " << std::endl;
    for (const auto& topping : toppings) {
        std::cout << "   " << topping;
    }
    std::cout<< std::endl;
}

NYStyleCheesePizza::NYStyleCheesePizza() {
    name = "NY Style Sauce and Cheese Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marianara Sauce";
    toppings = std::vector<std::string>({"Grated Reggiano Cheese"});
}

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() {
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";
    toppings = std::vector<std::string>({"Shredded mozzarella Cheese"});
}

void ChicagoStyleCheesePizza::cut() const {
    std::cout << "Cutting the pizza into square slices" << std::endl;
}

CheesePizza::CheesePizza() {
    name = "Cheese Pizza";
    dough = "Thin Crust Dough";
    sauce = "Sauce";
    toppings = std::vector<std::string>({"Classical Cheese"});
}