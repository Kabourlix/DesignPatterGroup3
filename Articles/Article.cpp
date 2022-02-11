#include "Article.h"

namespace Articles{

    Article::Article(int id) : id(id){}

    void Article::accept(Visitor& visitor)
    {
        visitor.visit(*this);
    }

    Article::~Article(){}
}