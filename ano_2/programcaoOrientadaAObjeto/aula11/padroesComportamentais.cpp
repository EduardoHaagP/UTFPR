#include <iostream>


using namespace std;

class Strategy
{
public:
    virtual void executar() = 0;
};
class StrategyA : public Strategy{
    public:
    void executar() override{
        cout<<"Executando Strategy A"<<endl;
    }
};
class StrategyB : public Strategy{
    public:
    void executar() override{
        cout<<"Executando Strategy B"<<endl;
    }
};
class StrategyC : public Strategy{
    public:
    void executar() override{
        cout<<"Executando Strategy C"<<endl;
    }
};


class Context{
    private:
        Strategy* strategy;
    public:
        Context(){
            this->strategy = nullptr;
        }
        Context(Strategy* new_strategy){
            this->strategy = new_strategy;
        }
        ~Context(){ //this->strategy == nullptr ? delete(this->strategy) : (void)0/;
        }
        void setStrategy(Strategy* new_strategy){
            this->strategy = new_strategy;
        }
        Strategy* getStrategy(){
            return this->strategy;
        }
        void executarStrategy(){
            if (this->strategy != nullptr)
            {
                this->strategy->executar();
            }else{
                cout<<"Nenhuma strategy definida"<<endl;
            }
            
        }
};

int main()
{
    StrategyA sa;
    StrategyB sb;
    StrategyC sc;
    Context contextA(&sa);
    contextA.setStrategy(&sb);
    contextA.executarStrategy();
    contextA.setStrategy(&sc);
    contextA.executarStrategy();
    return 0;
}
