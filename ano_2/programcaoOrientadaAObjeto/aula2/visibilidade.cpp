#include <iostream>
#include <string>

using namespace std;
enum {P1 = 1, P2, T};
class Aluno
{
private:
    /* data */
    int matricula;
    string nome;
    float *nota_p1;
    float *nota_p2;
    float *nota_t;   
public:
    Aluno(string nomeNovo,int matriculaNova);
    ~Aluno();
    
    int getMatricula();
    void setMatricula(int new_Matricula);

    float getNota(int qual);
    bool setNota(float nota, int qual);

    float calcularMedia();
    float precisaFinal();
    void exibeInfo();

};

Aluno::Aluno(string nomeNovo, int matriculaNova)
{
    this->nome = nomeNovo;
    this->matricula = matriculaNova;
    nota_p1 = new float;
    nota_p2 = new float;
    nota_t = new float;

}

Aluno::~Aluno()
{
    delete this->nota_p1;
    delete this->nota_p2;
    delete this->nota_t;

}

int Aluno::getMatricula(){
    return this->matricula;
}

void Aluno::setMatricula(int new_Matricula){
    this->matricula = new_Matricula;
    return;
}

bool Aluno::setNota(float nota, int qual){
        switch (qual)
        {
        case P1:
            this->nota_p1 = &nota;
            break;
        case P2:
            this->nota_p2 = &nota;
            break;
        case T:
            this->nota_t = &nota;
            break;
        
        default:
            return false;
            break;
        }
        return true;
    };

float Aluno::getNota(int qual){
    float *nota;
    nota = new float;
    switch (qual)
        {
        case P1:
            nota = this->nota_p1;
            break;
        case P2:
            nota = this->nota_p2;
            break;
        case T:
            nota = this->nota_t;
            break;
        
        default:
            break;
        }
        return *nota;
}

float Aluno::calcularMedia(){
    float media = 0;
    media = ((*nota_p1)*2.5+(*nota_p2)*2.5+(*nota_t)*2)/7;
    return media;
}

float Aluno::precisaFinal(){
    float media = this->calcularMedia();
    float nota_necessaria = 0;
    if (media < 6)
    {
        nota_necessaria = 12 - media;
    }
    return nota_necessaria;
}

void Aluno::exibeInfo(){
    cout<<"Nome: "<< this->nome<<"\nMatricula: "<< this->matricula<<"\nMedia: "<<this->calcularMedia()<<endl;
    return;
}

int main()
{
    Aluno Lucas("Lucas", 12345);
    Lucas.setNota(7,P1);
    Lucas.setNota(7,P2);
    Lucas.setNota(7,T);
    Lucas.exibeInfo();
    cout<<"Nota necessaria: "<<Lucas.precisaFinal()<<endl;

    return 0;
}
