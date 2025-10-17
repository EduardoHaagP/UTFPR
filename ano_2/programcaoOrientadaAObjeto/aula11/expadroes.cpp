#include <iostream>

class Desconto
{  
    public:
        virtual float compraComDesconto(float valor) = 0;
};

class DescontoA : public Desconto
{
    public:
        float compraComDesconto(float valor) override
        {  
            return valor*0.9;
        }
};

class DescontoB : public Desconto
{
    public:
        float compraComDesconto(float valor) override
        {
            return valor>1000 ? valor*0.90 : valor*0.95;
        }
};
class DescontoC : public Desconto
{
    public:
        float compraComDesconto(float valor) override
        {
            return valor*1;
        }
};

class Compra
{
private:
    Desconto* desconto;
    float valor_compra;
public:
    Compra(){
        this->desconto = nullptr;
        this->valor_compra = 0;
    };
    Compra(Desconto* new_desconto, float new_compra){
        this->desconto = new_desconto;
        this->valor_compra = new_compra;
    };
    Compra(Desconto* new_desconto){
        this->desconto = new_desconto;
        valor_compra = 0;
    };
    ~Compra(){};

    void setDesconto(Desconto* new_desconto){
        this->desconto = new_desconto;
    };
    Desconto* getDesconto(){
        return this->desconto;
    };
    void setValorCompra(float new_valor){
        this->valor_compra = new_valor;
    };
    float getValorCompra(){
        return this->valor_compra;
    };
    };

int main()
{
    DescontoA dA;
    DescontoB dB;
    DescontoC dC;

    Compra compra1(&dA, 1200);
    Compra compra2(&dB, 800);
    Compra compra3(&dC, 500);
    std::cout<<"Valor da compra 1 com desconto: "<<compra1.getDesconto()->compraComDesconto(compra1.getValorCompra())<<std::endl;
    std::cout<<"Valor da compra 2 com desconto: "<<compra2.getDesconto()->compraComDesconto(compra2.getValorCompra())<<std::endl;
    std::cout<<"Valor da compra 3 com desconto: "<<compra3.getDesconto()->compraComDesconto(compra3.getValorCompra())<<std::endl;

    return 0;
}

