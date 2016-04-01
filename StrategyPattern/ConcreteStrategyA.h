class ConcreteStrategyA: public StrategyInterface
{
    public:
        virtual void execute()
        {
            cout << "Called ConcreteStrategyA execute method" << endl;
        }
};


