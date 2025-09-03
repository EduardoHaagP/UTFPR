#include <iostream>
#include <string>
using namespace std;

class ContaBanco
{
protected:
    string tipo;

private:
    float saldo;
    bool status;
    string dono;

public:
    int numConta;
    ContaBanco(int numCt, string tipo, string dono, float deposito);
    ~ContaBanco();
    //setters
    void setDono(string dono)
    {
        this->dono = dono;
    }
    void setSatus(bool nstatus){
        this->status = nstatus;
    }
    void setSaldo(float saldo)
    {
        this->saldo = saldo;
    }
    void setTipo(string tipo)
    {
        this->tipo = tipo;
    }
    //getters
    int getNumConta()
    {
        return this->numConta;
    }
    float getSaldo()
    {
        return this->saldo;
    }
    bool getSatus()
    {
        return this->status;
    }
    string getDono()
    {
        return this->dono;
    }
    string getTipo()
    {
        return this->tipo;
    }
    //outros
    void fecharConta()
    {
        if (this->saldo >= 0)
        {
            this->sacar(this->saldo);
            this->status = false;
        }else{
            cout<<"Nao foi possivel fechar a conta. Saldo negativo."<<endl;
        }
        
    }
    void despositar(float valor)
    {
        this->status ? (void)(this->saldo += valor) : (void)(cout<<"conta fechada"<<endl);
        
    }
    void sacar(float valor)
    {
        ((this->saldo - valor) < 0) ? (void)(cout << "Saldo insuficiente"<<endl) : (void)(this->saldo -= valor);
    }
    void pagarMensal()
    {
        if (this->tipo == "CP")
        {
            this->saldo -= 20;
        }
        else if (this->tipo == "CC")
        {
            this->saldo -= 12;
        }
    }
};

ContaBanco::ContaBanco(int numCt, string tipo, string dono, float deposito) // abrir conta
{
    this->numConta = numCt;
    this->tipo = tipo;
    this->dono = dono;
    this->saldo = deposito;
    if (tipo == "CC")
    {
        this->saldo += 150;
    }else if(tipo == "CP"){
        this->saldo += 50;
    }
    
    
}

ContaBanco::~ContaBanco()
{
}

int main()
{
    ContaBanco moises(20251, "CP", "Moises", 300);
    ContaBanco luzia(20252, "CC", "Luzia", 500);
    luzia.sacar(50);
    moises.despositar(50);



    return 0;
}
