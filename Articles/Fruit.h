#include "../Visitors/Visitor.h"

namespace Articles{

    class Fruit : Article{
        private:
            int weight;
        public:
            Fruit(int id, int weight);
            virtual void accept(Visitor& visitor) override;
    };
}


