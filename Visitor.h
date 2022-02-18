#ifndef _VISITOR
#define _VISITOR

class Fruit;
class Cake;

class Visitor
{
    public :
        Visitor();
        virtual ~Visitor();
        virtual float weightVisit(const Fruit* fruit) const = 0;
        virtual float scanVisit(const Cake* cake) const = 0;
};

#endif