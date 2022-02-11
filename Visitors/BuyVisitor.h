#include "../Articles/Article.h"


class  BuyVisitor{
    public:
        virtual void visit(Article& article) = 0;
        virtual void visit(Fruit& fruit) = 0;
        virtual void visit(Gateau& gateau) = 0;
        //Ajouter les autres methodes
};
