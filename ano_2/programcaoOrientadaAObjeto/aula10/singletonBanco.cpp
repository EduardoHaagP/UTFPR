#include <iostream>
#include <string>
#include <vector>
using namespace std;

class HistoricoTransacoes
{
private:
    static HistoricoTransacoes* p_instance;
    HistoricoTransacoes(){cout<<"HistoricoTransacoes carregado"<<endl;};
    ~HistoricoTransacoes(){if (p_instance !=nullptr){
        delete(p_instance);
    }   
    };
    vector<string> transacoes;
public:
    static HistoricoTransacoes* getPinstance(){
        if (p_instance == NULL)
        {
            p_instance=new HistoricoTransacoes();
        }
        return p_instance;
    };
    void registrarTransacao(string msg){
        this->transacoes.push_back(msg);
    }
    void exibirHistorico(){
        cout<<"\n==================================";
        cout<<"\n     Historico de Transações      ";
        cout<<"\n==================================";
        for(auto& msg: transacoes){
            cout<<"\n"<<msg;
        }
    }
};

HistoricoTransacoes* HistoricoTransacoes::p_instance = nullptr;






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
            HistoricoTransacoes::getPinstance()->registrarTransacao("Conta Fechada: " +this->getDono());   

        }else{
            cout<<"Nao foi possivel fechar a conta. Saldo negativo."<<endl;
        }

        
    }
    void despositar(float valor)
    {
        this->status ? (void)(this->saldo += valor) : (void)(cout<<"conta fechada"<<endl);
        HistoricoTransacoes::getPinstance()->registrarTransacao("COonta "+ this->getDono() + "-> Depositou: " + to_string(valor));
        
    }
    void sacar(float valor)
    {
        ((this->saldo - valor) < 0) ? (void)(cout << "Saldo insuficiente"<<endl) : (void)(this->saldo -= valor);
        HistoricoTransacoes::getPinstance()->registrarTransacao("COonta "+ this->getDono() + "-> Sacou: " + to_string(valor));
        
    }

    void pagarMensal()
    {
        if (this->tipo == "CP")
        {
            this->saldo -= 20;
            HistoricoTransacoes::getPinstance()->registrarTransacao("COonta "+ this->getDono() + "-> Pagou: 20,00 ");
        }
        else if (this->tipo == "CC")
        {
            this->saldo -= 12;
            HistoricoTransacoes::getPinstance()->registrarTransacao("COonta "+ this->getDono() + "-> Pagou: 12,00 ");
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
    
    HistoricoTransacoes::getPinstance()->registrarTransacao("Conta Aberta: " +this->getDono());   
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

    HistoricoTransacoes::getPinstance()->exibirHistorico();


    return 0;
}