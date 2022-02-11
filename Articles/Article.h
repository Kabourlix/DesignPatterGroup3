#include "../Visitors/Visitor.h"

namespace Articles
{
class Article 
{
    protected:
        int id;
        float weight;
    public :
        Article() = default;
        Article(int id, float weight);
        ~Article();
        virtual void accept(Visitor& visitor) = 0;

};  
} // namespace Articles
