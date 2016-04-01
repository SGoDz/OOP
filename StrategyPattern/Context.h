#include "StrategyInterface.h"
#include "ConcreteStrategyA.h"
class Context
{
    private:
        StrategyInterface *_strategy;

    public:
        Context(StrategyInterface *strategy):_strategy(strategy)
        {
        }

        void set_strategy(StrategyInterface *strategy)
        {
            _strategy = strategy;
        }

        void execute()
        {
            _strategy->execute();
        }
};
