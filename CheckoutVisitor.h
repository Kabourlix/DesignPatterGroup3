#include "Visitor.h"

class CheckoutVisitor : public Visitor {

    public: 
        //Inherited from Visitor
        CheckoutVisitor();
        virtual ~CheckoutVisitor();
        virtual float weightVisit(const Fruit* fruit);
        virtual float scanVisit(const Cake* cake);

};