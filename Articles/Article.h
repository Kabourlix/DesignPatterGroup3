#include "../Visitors/BuyVisitor.h"

namespace Articles
{
class Article 
{
    protected:
        int id;
    public :
        Article() = default;
        Article(int id);
        ~Article();
        void accept(Visitor& visitor);

};  
} // namespace Articles
