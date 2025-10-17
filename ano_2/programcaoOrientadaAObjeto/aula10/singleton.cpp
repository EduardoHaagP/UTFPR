#include <iostream>
#include <string>

using namespace std;

class Singleton
{
protected:
private:
    static Singleton* p_instance;
    Singleton(){cout<<"Singleton carregado"<<endl;};
    
public:
    static Singleton* getPinstance(){
        if (p_instance == NULL)
        {
            p_instance=new Singleton();
        }
        return p_instance;
    };
};

Singleton* Singleton::p_instance = nullptr;

int main(){
    Singleton::getPinstance();
    return 0;
}