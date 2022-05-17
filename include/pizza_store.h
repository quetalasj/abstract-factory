#pragma once
#include "memory"
#include "string"
#include "pizza.h"


class PizzaStore {
public:
    std::shared_ptr<Pizza> orderPizza(const std::string& type);

private:
    virtual std::shared_ptr<Pizza> createPizza(const std::string& type) const {};
};

class NYPizzaStore: public PizzaStore {
private:
    std::shared_ptr<Pizza> createPizza(const std::string &type) const override;
};