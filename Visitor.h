#include "fruit.h"
#include "cake.h"

class Visitor
{
    public :
        Visitor();
        virtual ~Visitor();
        virtual float weightVisit(Fruit* fruit) = 0;
        virtual float scanVisit(Cake* cake) = 0;
};