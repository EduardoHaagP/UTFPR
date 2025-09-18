#include <iostream>
#include <random>

using namespace std;


class IBonificavel
{
public:
    virtual double calcularBonus() = 0;
};

class IAvaliavel
{
public:
    virtual string avaliarDesempenho() = 0;
};




class Funcionario
{
private:
protected:
    string nome;
    int matricula;
    double salario;
public:
    Funcionario(){};

    ~Funcionario(){};

    string getName(){return this->nome;}
    int getMatricula(){return this->matricula;}
    double getSalario(){return this->salario;}

    void setName(string new_name){this->nome = new_name;return;}
    void setMatricula(int new_matricula){this->matricula = new_matricula;return;}
    void setSalario(double new_salario){this->salario = new_salario;return;}

    void exibirDados(){
       cout<<"Nome: "<<this->nome<<"\nMatricula: "<<this->matricula<<"\nSalario: "<<this->salario<<endl;
       return;
    }
    virtual double calcularSalario() = 0;
};




class FuncionarioAssalariado: public Funcionario, public IAvaliavel{
    public:
    FuncionarioAssalariado(string new_name, int new_matricula, double new_salario){
        this->nome = new_name;
        this->matricula = new_matricula;
        this->salario = new_salario;
    }

    double getsalario(){return this->salario;};
    void setsalario(double new_salario){this->salario = new_salario; calcularSalario();return;};

    double calcularSalario()override{
        double vale_alimentacao = 400;
        setSalario(getSalario()+vale_alimentacao);
        return this->salario;
    };
        string avaliarDesempenho() override {
        int desempenho = rand() % 11; // Gera um número aleatório entre 0 e 10  
        if (desempenho >= 9) {
            return "Precisa melhorar";
        } else if (desempenho >= 6) {
            return "Regular";
        } else {
            return "Execenlente";
        }
    }
};

class FuncionarioHorista: public Funcionario, public IAvaliavel{
    private: 
        double vale_hora;
        int horas_trabalhadas;    
    public:
    FuncionarioHorista(string new_name, int new_matricula, double new_vale_horas, int new_horas_trabalhadas){
        this->nome = new_name;
        this->matricula = new_matricula;
        this->vale_hora = new_vale_horas;
        this->horas_trabalhadas = new_horas_trabalhadas;
        this->calcularSalario();
    }
    
    double getValeHora(){return this->vale_hora;}
    int getHorasTrabalhadas(){return this->horas_trabalhadas;}
    
    void setValeHora(double new_vale_horas){this->vale_hora = new_vale_horas; calcularSalario();return;}
    void setHorasTrabalhadas(int new_horas_trabalhadas){this->horas_trabalhadas = new_horas_trabalhadas;calcularSalario();return;}

    double calcularSalario()override{
        setSalario(this->horas_trabalhadas*this->vale_hora);
        return this->salario;
    };
    string avaliarDesempenho() override {
        int desempenho = rand() % 11; // Gera um número aleatório entre 0 e 10  
        if (desempenho >= 9) {
            return "Precisa melhorar";
        } else if (desempenho >= 6) {
            return "Regular";
        } else {
            return "Execenlente";
        }
    }
};

class FuncionarioComissionado: public Funcionario, public IBonificavel{
    private: 
        int vendas;
        double percentual_comissao;    
    public:
    FuncionarioComissionado(string new_name, int new_matricula, int new_vendas, double new_percentual_comissao){
        this->nome = new_name;
        this->matricula = new_matricula;
        this->vendas = new_vendas;
        this->percentual_comissao = new_percentual_comissao;
        this->calcularSalario();
    }
    
    int getVendas(){return this->vendas;}
    double getPercentualComissao(){return this->percentual_comissao;}
    
    void setVendas(double new_vendas){this->vendas = new_vendas;return;}
    void setPercentualComissao(double new_percentual_comissao){this->percentual_comissao = new_percentual_comissao;return;}
    
    double calcularSalario()override{
        setSalario(this->vendas*this->percentual_comissao);
        return this->salario;
    };
        double calcularBonus() override {
        return this->vendas*0.1; // 10% bonus
    }
};

class FuncionarioAssalriadoSenior: public FuncionarioAssalariado, public IBonificavel {
    private: 
        int tempoTrabalho; // em anos
    public:
    FuncionarioAssalriadoSenior(string new_name, int new_matricula, double new_salario, int new_tempoTrabalho)
        : FuncionarioAssalariado(new_name, new_matricula, new_salario) {
            this->tempoTrabalho = new_tempoTrabalho;
        }

    int getTempoTrabalho() { return this->tempoTrabalho; }
    void setTempoTrabalho(int new_tempoTrabalho) { this->tempoTrabalho = new_tempoTrabalho;}
    double calcularBonus() override {
        return (this->tempoTrabalho % 5) * 1000 ; // 20% bonus
    }
};

int main()
{


    //Nome: Ana Souza | Matrícula: 101 | Salário: 3000.00
    FuncionarioAssalariado novo("Ana Souza", 101, 3000);
    novo.exibirDados();
    cout<<"Salario com vale alimentacao: "<<novo.calcularSalario()<<endl;
    cout<<endl;
    //Nome: João Silva | Matrícula: 102 | Salário: 2400.00
    FuncionarioComissionado novo2("Joao Silva", 102, 24000, 0.10);
    novo2.exibirDados();
    //Nome: Carla Lima | Matrícula: 103 | Salário: 4500.00
    cout<<endl;
    FuncionarioHorista novo3("Carla Lima", 103, 450, 10);
    novo3.exibirDados();

    return 0;
}