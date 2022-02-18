#include "Visitor.h"

class SubscribedCheckoutVisitor : public Visitor {

    public: 
        //Inherited from Visitor
        SubscribedCheckoutVisitor();
        virtual ~SubscribedCheckoutVisitor();
        virtual float weightVisit(const Fruit* fruit);
        virtual float scanVisit(const Cake* cake);

};