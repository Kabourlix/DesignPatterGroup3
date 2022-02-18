#include "SubscribedCheckoutVisitor.h"
#include <cstdlib>

SubscribedCheckoutVisitor::SubscribedCheckoutVisitor(){
    //Nothing to do here
}

SubscribedCheckoutVisitor::~SubscribedCheckoutVisitor(){
    //Nothing to do here
}

float SubscribedCheckoutVisitor::weightVisit(const Fruit* fruit){
    int weight = std::rand() % 10 + 1; //Random int between 1 and 10
    return weight*fruit->getPricePerKg()*(1-fruit->getDiscount());
}

float SubscribedCheckoutVisitor::scanVisit(const Cake* cake){
    return cake->getPrice()*(1-cake->getDiscount());
}