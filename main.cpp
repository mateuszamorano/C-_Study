#include <iostream>
#include <locale.h>
using namespace std;
#define dev cout << "Mateus Zamorano\n"

int main(){
setlocale(LC_ALL, "");

    int senha, senha1, senhaConf, cont = 0, menu;
    bool sim = true;
    string login, loginConf;

    cout << "Cadastre seu login: " << endl;
    cin >> login;

    cout << "Confirme seu login: " << endl;
    cin >> loginConf;

    if (login == loginConf){
        cout << "Login cadastrado com sucesso!" << endl;

        cout << "Cadastre sua senha: " << endl;
        cin >> senha;

        cout << "Confirme sua senha: " << endl;
        cin >> senhaConf;
        } else {
            cout << "Você errou a confirmação de login, reinicie o programa!" << endl;
        }


    if (senhaConf == senha){
        cout << "Senha cadastrada com sucesso!" << endl;
    }   else {
        cout << "Você errou sua senha, o programa deve ser reiniciado!" << endl;
    }

    while (sim == true) {
        cout << "Insira seu login: " << endl;
        cin >> login;

        cout << "Insira sua senha: " << endl;
        cin >> senhaConf;
        cont += 1;
        if (senhaConf == senha && loginConf == login){
            cout << "Bem vindo ao Servidor! \nCaso queira ver os usuários cadastrados e as senhas digite '1': \n " << endl;
            cin >> menu;
            if (menu == 1){
                cout << "Usuários cadastrados: " << login << ". Senhas: " << senhaConf << endl;
            } else {
                cout << "Opção inválida!" << endl;
            }

        break;
        } else {
            cout << "Insira sua senha: " << endl;
            cin >> senha1;
        }


    }

    system("pause");
    return 0;
}
