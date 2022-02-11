#include "../Visitors/Visitor.h"

namespace Articles { 
class Gateau : Article
{
    public:
        Gateau(int id, int weight);
        virtual void accept(Visitor& visitor) override;
};
}