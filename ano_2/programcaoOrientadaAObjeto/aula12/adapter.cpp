#include <iostream>
using namespace std;

class Target
{
public:
    virtual void request() = 0;
    virtual ~Target() = default;
};



class Adaptee
{
public:
    void specificRequest() {
        std::cout << "Executando operacao especifica do Adaptee" << std::endl;
    }
};



class Adapter : public Target
{
private:
    Adaptee* adaptee;
public:
    Adapter(Adaptee* a) : adaptee(a) {}
    void request() override {
        cout<<"Adapter convertendo a chamada..."<<endl;
        adaptee->specificRequest();
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    Adaptee* adaptee = new Adaptee();
    Target* target = new Adapter(adaptee);
    target->request();
    return 0;
}