#include <iostream>
#include <string>

using namespace std;

struct Funcionario{
    
    int registro;
    string nome
    double salario;
    
};

    void ler_funcionario();
    void ler_funcionario(funcionario* f);

int main(){

    Funcionario f1;
    ler_funcionario(&f1);
    imprimir_funcionario(f1);
    
    Funcionario f2 = criar_funcionario();
    imprimir_funcionario(f2);
    
}

Funcionario criar_funcionario(){
    
    Funcionario f;
    cout << "Registro: ";
    cin >> f.registro;
    cin.ingnore();
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Salário: ";
    cin >>salario;
    
}
