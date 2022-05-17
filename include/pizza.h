#pragma once
#include "string"
#include "vector"
#include "ingredients.h"

class Pizza {
public:
    std::string name;
    std::shared_ptr<std::string> dough;
    std::shared_ptr<std::string> sauce;
    std::vector<std::shared_ptr<std::string>> veggies;
    std::shared_ptr<std::string> cheese;
    std::shared_ptr<std::string> pepperoni;
    std::shared_ptr<std::string> clam;

    virtual void prepare() = 0;
    void bake() const;
    virtual void cut() const;
    void box() const;
    std::string getName() const;
    void setName(const std::string& name);

};
class CheesePizza : public Pizza{
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory;
public:
    CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory);
    void prepare() override;
};

class ClamPizza : public Pizza{
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory;
public:
    ClamPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory);
    void prepare() override;
};
