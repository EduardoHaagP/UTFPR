#include <iostream>
#include <cstdlib>
using namespace std;

class Lutador
{
private:
    string nome;
    string nacionalidade;
    float altura;
    float peso;
    string categoria;
    int vitorias;
    int derrotas;
    int empates;
public:
    Lutador(string new_nome, string new_nacionalidade, float new_altura, float new_peso, string new_categoria, int new_vitorias, int new_derrotas, int new_empates): nome(new_nome),
    nacionalidade(new_nacionalidade), altura(new_altura), peso(new_peso), categoria(new_categoria),vitorias(new_vitorias),derrotas(new_derrotas),empates(new_empates) {};
    ~Lutador(){};

    // ---------------------------getters---------------------------
    string getNome(){ return this->nome;}
    string getNacionalidade(){ return this->nacionalidade;}
    float getAltura(){return this->altura;}
    float getPeso(){return this->peso;}
    string getCategoria(){return this->categoria;}
    int getVitorias(){return this->vitorias;}
    int getDerrotas(){return this->derrotas;}
    int getEmpates(){return this->empates;}

    // ---------------------------setters---------------------------
    void setNome(string new_nome){this->nome = new_nome;}
    void setNacionalidade(string new_nacionalidade){this->nacionalidade = new_nacionalidade;}
    void setAltura(float new_altura){this->altura = new_altura;}
    void setPeso(float new_peso){this->peso = new_peso;}
    void setCategoria(string new_categoria){this->categoria = new_categoria;}
    void setVitoria(int new_vitorias){this->vitorias = new_vitorias;}
    void setDerrotas(int new_derrotas){this->derrotas = new_derrotas;}
    void setEmpates(int new_empates){this->empates = new_empates;}

    // ---------------------------outros---------------------------
    void apresentar(){cout<<"O lutador  "<<this->nome<<", nasceu em "<<this->nacionalidade<<" e luta na categoria dos"<<this->categoria<<endl<<"Seu cartel atual é de"<<this->vitorias<<" vitórias e "<<this->derrotas<<" derrotas."<<endl;}
    bool status(){return rand()%2 ? true : false;}
    void ganharLuta(){this->setVitoria(this->getVitorias() + 1);}
    void perderLuta(){this->setDerrotas(this->getDerrotas()+1);}
    void empatarLuta(){this->setEmpates(this->getEmpates()+1);}
};

class Luta
{
private:
    Lutador *desafiado;
    Lutador *desafiante;
    int rounds;
    bool aprovado;

public:
    Luta(Lutador *new_desafiante, Lutador *new_desafiado){ this->desafiado = new_desafiado; this->desafiante = new_desafiante;};
    ~Luta(){};
    void marcarLuta(){ 
    if (desafiado->status() == false || desafiante->status() == false)
    {
        cout<<"Essa luta nao foi aprovada"<<endl;
        this->aprovado = false;
    }else{
        this->aprovado = true;
    }    }
    void lutar(){
        this->marcarLuta();
        if (this->aprovado == true)
        {
            int n = rand()%3;
            this->rounds = rand()%5 + 1;
            if (n == 0)
            {
                cout<<desafiado->getNome()<<" ganhou a luta em "<<this->rounds<<" round(s)"<<endl;
                desafiado->setVitoria(desafiado->getVitorias()+1);
                desafiante->setDerrotas(desafiante->getDerrotas()+1);
            }else if (n == 1)
            {
                cout<<desafiante->getNome()<<" ganhou a luta em "<<this->rounds<<" round(s)"<<endl;
                desafiante->setVitoria(desafiante->getVitorias()+1);
                desafiado->setDerrotas(desafiado->getDerrotas()+1);
            }else{
                this->rounds = 5;
                cout<<"Empatou em "<<this->rounds<<" round(s)"<<endl;
                desafiado->setEmpates(desafiado->getEmpates()+1);
                desafiante->setEmpates(desafiante->getEmpates()+1);
            }
        }else{
            cout<<"Essa luta nao foi aprovada"<<endl;
        }

    }
};





int main() {
    //---------------------------Tdoso os Lutadores do Slide---------------------------
    Lutador dannyAbbadi("Danny Abbadi","Jordania",1.8,60,"Lightweight",2,2,0);
    Lutador narimanAbbasov("Nariman Abbasov", "Azerbaijao", 1.75, 70.3, "Lightweight", 0, 1, 0);
    Lutador tankAbbott("Tank Abbott", "EUA", 1.83, 115.0, "Heavyweight", 8, 10, 0);
    Lutador hamdyAbdelwahab("Hamdy Abdelwahab", "Egito", 1.83, 120.2, "Peso-pesado", 6, 0, 0);
    Lutador shamilAbdurakhimov("Shamil Abdurakhimov", "Rússia", 1.91, 105.0, "Peso-pesado", 20, 8, 0);
    Lutador daichiAbe("Daichi Abe", "Japão", 1.78, 77.1, "Welterweight", 6, 1, 0);
    Lutador papyAbedi("Papy Abedi", "Suécia", 1.78, 83.9, "Middleweight", 9, 3, 0);
    Lutador klidsonAbreu("Klidson Abreu", "Brasil", 1.85, 93.0, "Peso meio pesado", 15, 4, 0);
    Lutador juanAdams("Juan Adams", "EUA", 1.93, 120.2, "Heavyweight", 5, 3, 0);
    Lutador scottAdams("Scott Adams", "EUA", 1.88, 120.2, "Heavyweight", 6, 0, 0);
    Lutador anthonyAdams("Anthony Adams", "EUA", 1.83, 83.9, "Middleweight", 8, 2, 0);
    Lutador zarrukhAdashev("Zarrukh Adashev", "Uzbequistão", 1.70, 56.7, "Peso-mosca", 4, 4, 0);
    Lutador christianAguilera("Christian Aguilera", "EUA", 1.75, 77.1, "Peso meio-medio", 14, 8, 0);
    Lutador nickAguirre("Nick Aguirre", "EUA", 1.73, 65.8, "Peso-galo", 7, 2, 0);
    Lutador alatengheili("Alatengheili", "China", 1.68, 61.2, "Peso-galo", 17, 9, 2);
    Lutador amirAlbaz("Amir Albaz", "Iraque", 1.65, 56.7, "Peso-mosca", 17, 2, 0);
    Lutador omariAkhmedov("Omari Akhmedov", "Rússia", 1.83, 83.9, "Peso-medio", 21, 6, 1);
    Lutador yoshihiroAkiyama("Yoshihiro Akiyama", "Japão", 1.78, 77.1, "Welterweight", 15, 6, 0);
    Lutador juniorAlbini("Junior Albini", "Brasil", 1.88, 120.2, "Heavyweight", 14, 6, 0);
    Lutador wesAlbritton("Wes Albritton", "EUA", 1.80, 70.3, "Lightweight", 0, 0, 0);
    Lutador mostaphaAlTurk("Mostapha Al Turk", "Inglaterra", 1.85, 120.2, "Heavyweight", 6, 6, 0);
    Lutador rostemAkman("Rostem Akman", "Suécia", 1.80, 77.1, "Welterweight", 6, 0, 0);
    Lutador kevinAguilar("Kevin Aguilar", "EUA", 1.75, 65.8, "Peso-pena", 17, 5, 0);
    Lutador jesusAguilar("Jesus Aguilar", "México", 1.65, 56.7, "Peso-mosca", 11, 3, 0);
    Lutador israelAdesanya("Israel Adesanya", "Nova Zelândia", 1.93, 83.9, "Peso-medio", 24, 5, 0);
    Lutador ricardoAbreu("Ricardo Abreu", "Brasil", 1.83, 83.9, "Peso-medio", 5, 1, 0);
    Lutador mansurAbdulMalik("Mansur Abdul-Malik", "EUA", 1.78, 83.9, "Middleweight", 8, 0, 0);
    Lutador johnAdajar("John Adajar", "Filipinas", 1.75, 77.1, "Welterweight", 0, 1, 0);
    //---------------------------Lutas Exemplo---------------------------
    Luta teste1(&dannyAbbadi, &narimanAbbasov);
    teste1.lutar();

    return 0;
}