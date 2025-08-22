#include <iostream>


class Alunos
{
private:
    float *notaExame;
public:
    Alunos(/* args */);
    ~Alunos();
};

Alunos::Alunos(/* args */)
{
    notaExame = new float;
}   

Alunos::~Alunos()
{
    delete this->notaExame;
}


int main()
{
    /* code */
    return 0;
}

