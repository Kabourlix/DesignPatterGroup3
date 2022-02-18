#ifndef _VISITOR
#define _VISITOR

class Fruit;
class Cake;

class Visitor
{
    public :
        Visitor();
        virtual ~Visitor();
        virtual float weightVisit(const Fruit* fruit) = 0;
        virtual float scanVisit(const Cake* cake) = 0;
};

#endif