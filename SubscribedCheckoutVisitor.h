#include "Visitor.h"

class SubscribedCheckoutVisitor : public Visitor {

    public: 
        //Inherited from Visitor
        CheckoutVisitor();
        virtual ~CheckoutVisitor();
        virtual float weightVisit(Fruit* fruit);
        virtual float scanVisit(Cake* cake);

};