#include "CheckoutVisitor.h"
#include <cstdlib>
#include "fruit.h"
#include "cake.h"

CheckoutVisitor::CheckoutVisitor(){
    //Nothing to do here
}

CheckoutVisitor::~CheckoutVisitor(){
    //Nothing to do here
}

float CheckoutVisitor::weightVisit(const Fruit* fruit) const{
    //int weight = std::rand() % 10 + 1; //Random int between 1 and 10
    int weight = 1;
    return weight*fruit->getPricePerKg();
}

float CheckoutVisitor::scanVisit(const Cake* cake) const{
    return cake->getPrice();
}
