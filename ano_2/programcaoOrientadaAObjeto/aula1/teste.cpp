#include <iostream>
#include <cmath>
#include <string>
using namespace std;

namespace teste
{
    float sin(double angulo)
    {
        return (float)angulo / 10; // falsidade
    }
} // namespace teste

namespace lucas
{
    void filhos()
    {
        cout << "MUITOS" << endl;
    }
    typedef struct
    {
        char nome;
        int idade;
    } teste;
} // namespace lucas

class Carro
{
private:
    int ano;
    string cor;
    string modelo;
    bool ligado;

public:
    Carro(int ano, string cor, string modelo, bool ligado); // contrutor
    ~Carro();          // destrutor
    void abastecer();
    void andar();
    void acelerar();
    void imprimirAtributos();
};

Carro::Carro(int ano, string cor, string modelo, bool ligado)
{
    this->ano=ano;
    this->cor=cor;
    this->modelo=modelo;
    this->ligado=ligado;

}
void Carro::abastecer(){
     
}
void Carro::andar(){
    
}
void Carro::acelerar(){
    
}
void Carro::imprimirAtributos(){
    cout<<"Ano: "<<this->ano<<endl;
    cout<<"Cor: "<<this->cor<<endl;
    cout<<"Modelo: "<<this->modelo<<endl;
    cout<<"Ligado: "<<this->ligado<<endl;
}
Carro::~Carro()
{
}

int main()
{
    Carro celtinha(2002,"vermelho","celta",true);
    celtinha.imprimirAtributos();
    lucas::filhos();
    float senoPadrao = sin(3 * M_PI);
    float seno = teste::sin(3 * M_PI);
    cout << "\nsenoPadrao = " << senoPadrao << endl;
    cout << "\nseno = " << seno << endl;

    return EXIT_SUCCESS;
}