#include "SubscribedCheckoutVisitor.h"
#include <cstdlib>
#include "fruit.h"
#include "cake.h"

SubscribedCheckoutVisitor::SubscribedCheckoutVisitor(){
    //Nothing to do here
}

SubscribedCheckoutVisitor::~SubscribedCheckoutVisitor(){
    //Nothing to do here
}

float SubscribedCheckoutVisitor::weightVisit(const Fruit* fruit) const{
    int weight = std::rand() % 10 + 1; //Random int between 1 and 10
    return fruit->getPricePerKg() * weight * (1 - fruit->getDiscount());
}

float SubscribedCheckoutVisitor::scanVisit(const Cake* cake) const{
    return cake->getPrice()*(1-cake->getDiscount());
}
