#include "../Articles/Article.h"


class  BuyVisitor{
    public:
        virtual void visit(Article& article) = 0;
        virtual void weightArticle(Fruit& fruit) = 0;
        virtual void scan(Gateau& gateau) = 0;
        //Ajouter les autres methodes
};
