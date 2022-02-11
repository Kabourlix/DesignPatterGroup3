#include "../Visitors/Visitor.h"


class Article 
{
    private:
        int id;
    public :
        void accept(Visitor& visitor);

};