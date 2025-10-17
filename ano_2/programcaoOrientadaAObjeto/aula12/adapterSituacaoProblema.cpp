#include <iostream>
#include <string>
using namespace std;

class PagtoOnline
{
public:
    virtual void processarPagamento(double valor) = 0;
    virtual ~PagtoOnline() = default;
};

class PagtoAntigo
{
public:
    void realizarCobranca(string cliente, double valor) {
        std::cout << "Executando cobranca do Pagamento Antigo "<< cliente<<" valor: "<<valor << std::endl;
    }
};

class Adapter : public PagtoOnline
{
private:
    PagtoAntigo* pagtoAntigo;
    string nomeCliente;
public:
    Adapter(PagtoAntigo* a, string n) : pagtoAntigo(a), nomeCliente(n) {}
    void processarPagamento(double valor) override {
        cout<<"Adapter convertendo a chamada..."<<endl;
        pagtoAntigo->realizarCobranca(this->nomeCliente, valor);
    }
};

int main()
{
    PagtoAntigo* pagtoAntigo = new PagtoAntigo();
    PagtoOnline* pagtoOnline = new Adapter(pagtoAntigo, "Joao");
    pagtoOnline->processarPagamento(100.0);
    /* code */
    return 0;
}
