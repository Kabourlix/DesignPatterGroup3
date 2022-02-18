#ifndef _CHECKOUTVISITOR
#define _CHECKOUTVISITOR

#include "Visitor.h"

class CheckoutVisitor : public Visitor {

    public: 
        //Inherited from Visitor
        CheckoutVisitor();
        virtual ~CheckoutVisitor();
        virtual float weightVisit(const Fruit* fruit) const;
        virtual float scanVisit(const Cake* cake) const;

};

#endif