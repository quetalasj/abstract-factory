#pragma once
#include "memory"
#include "vector"

class PizzaIngredientFactory {
public:
    virtual std::shared_ptr<std::string> createDough() const =0;
    virtual std::shared_ptr<std::string> createSauce() const =0;
    virtual std::shared_ptr<std::string> createCheese() const =0;
    virtual std::vector<std::shared_ptr<std::string>> createVeggies() const =0;
    virtual std::shared_ptr<std::string> createPepperoni() const =0;
    virtual std::shared_ptr<std::string> createClam() const =0;
};

class NYPizzaIngredientFactory: public PizzaIngredientFactory {
    std::shared_ptr<std::string> createDough() const override;
    std::shared_ptr<std::string> createSauce() const override;
    std::shared_ptr<std::string> createCheese() const override;
    std::vector<std::shared_ptr<std::string>> createVeggies() const override;
    std::shared_ptr<std::string> createPepperoni() const override;
    std::shared_ptr<std::string> createClam() const override;
};