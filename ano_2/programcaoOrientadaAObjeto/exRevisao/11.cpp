/*
11. (Deitel C++ 6.13 adaptado) Crie uma classe em C++ chamada Retangulo que armazena as coordenadas cartesianas x e y dos quatro cantos do retângulo. O construtor chama uma função set que recebe quatro conjuntos de coordenadas e verifica se cada um deles está no primeiro quadrante sem que nenhum valor de coordenada x ou y seja maior que 20.0. A função set também verifica se as coordenadas fornecidas de fato especificam um retângulo.  A classe mãe de Retangulo (chamada CalculoGeometriaPlana) é abstrata e constam os métodos que calculam o comprimento, largura, perímetro e área,  porém tais métodos devem ser implementados na classe derivada. Um adendo, o comprimento é maior das duas dimensões e, ainda, inclua um método predicado quadrado, que determina se o retângulo é um quadrado. 
*/

#include <iostream>
#include <cmath>
using namespace std;

class CalculoGeometriaPlana
{
private:
protected:
    float comprimento;
    float largura;
    float perimetro;
    float area;
public:
    virtual float calculoComprimento() = 0;
    virtual float calculoLargura() = 0;
    virtual float calculoPerimetro()= 0;
    virtual float calculoArea() = 0;
};


class Retangulo: public CalculoGeometriaPlana{
private:
    float x1;
    float x2;
    float x3;
    float x4;

    float y1;
    float y2;
    float y3;
    float y4;

public:
    Retangulo(float nx1, float ny1,float nx2, float ny2,float nx3, float ny3,float nx4, float ny4){
        if (!setRet(nx1, ny1,nx2, ny2,nx3, ny3,nx4, ny4))
        {
            cout<<"Nao foi possivel criar seu retangulo"<<endl;
        }else{
            cout<<"Seu retangulo foi criado"<<endl;
            this->x1 = nx1;
            this->x2 = nx2;
            this->x3 = nx3;
            this->x4 = nx4;

            this->y1 = ny1;
            this->y2 = ny2;
            this->y3 = ny3;
            this->y4 = ny4;
            this->calculoComprimento();
            this->calculoLargura();
            this->calculoArea();
            this->calculoPerimetro();

        }
    };
    ~Retangulo(){};
    
    bool setRet(float nx1, float ny1,float nx2, float ny2,float nx3, float ny3,float nx4, float ny4){
        if (  nx1 > 20 || ny1 > 20 || nx2 > 20 ||ny2 > 20 || nx3> 20 || ny3> 20 ||nx4> 20 || ny4 > 20)
        {
            return false;
        }
        if (  nx1 < 0 || ny1 < 0  || nx2 < 0  ||ny2 < 0  || nx3< 0  || ny3< 0  ||nx4< 0  || ny4 < 0 )
        {
            return false;
        }
        float abx = nx2 - nx1;
        float aby = ny2 - ny1;
        float bcx = nx3 - nx2;
        float bcy = ny3 - ny2;

        float cdx = nx4 - nx3;
        float cdy = ny4 - ny3;
        float adx = nx4 - nx1;
        float ady = ny4 - ny1;

        
        float produto_escalar = (abx*bcx) + (aby*bcy);
        
        if (produto_escalar != 0)
        {
            return false;
        }

        float distAB = sqrt(powf(abx,2) + powf(aby,2));
        float distCD = sqrt(powf(cdx,2) + powf(cdy,2));

        float distAD = sqrt(powf(adx,2) + powf(ady,2));
        float distBC = sqrt(powf(bcx,2) + powf(bcy,2));

        if (distAB != distCD || distAD != distBC)
        {
            return false;
        }
        return true;
    }



    float calculoComprimento( )override{
        float distAB = sqrt(powf(this->x2 - this->x1,2) + powf(this->y2 - this->y1,2));
        float distAD = sqrt(powf(this->x4 - this->x1,2) + powf(this->y4 - this->y1,2));
        this->comprimento = distAB < distAD ? distAD : distAB;
        return this->comprimento;
    }
    float calculoLargura( )override{
        float distAB = sqrt(powf(this->x2 - this->x1,2) + powf(this->y2 - this->y1,2));
        float distAD = sqrt(powf(this->x4 - this->x1,2) + powf(this->y4 - this->y1,2));
        this->largura = distAB > distAD ? distAD : distAB;
        return this->largura;
    }
    float calculoPerimetro( )override{
        this->perimetro = 2*this->comprimento+2*this->largura;
        return this->perimetro;
    }
    float calculoArea( )override{

        this->area = this->comprimento*this->largura;
        return this->area;
    }



};

int main(){
    Retangulo j(0,0,0,1,2,1,2,0);
    cout<<"Comprimento: "<<j.calculoComprimento()<<endl;
    cout<<"Largura: "<<j.calculoLargura()<<endl;
    cout<<"Perimetro: "<<j.calculoPerimetro()<<endl;
    cout<<"AREA: "<<j.calculoArea()<<endl;


    return 0;
}


