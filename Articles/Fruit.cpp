#include "Fruit.h"

namespace Articles{

    Fruit::Fruit(int id, int _weight) : Article(id), weight(_weight){}

    void Fruit::accept(Visitor& visitor) override{
        visitor.visit(*this);
    }

}