#pragma once
#include "string"
#include "vector"


class Pizza {
public:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
    void prepare() const;
    void bake() const;
    virtual void cut() const;
    void box() const;
    std::string getName() const;

};
class CheesePizza : public Pizza{
public:
    CheesePizza();
};

class NYStyleCheesePizza : public Pizza{
public:
    NYStyleCheesePizza();
};

class ChicagoStyleCheesePizza: public Pizza {
public:
    ChicagoStyleCheesePizza();
    void cut() const override;
};
