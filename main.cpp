#include <iostream>
#include <fstream>

/*
 * variáveis globais.*/
int tam = 0;

#include "lista.h"

using namespace std;

int main() {
    /*Variável para guardar o valor da opção a ser requisitada*/
    int opcao;

    veiculos *bd[50];

    /*Obtendo as informações do Arquivo*/
    ifstream myfile1("BD_veiculos_2.txt");
    if (myfile1.is_open()) {
        while (!myfile1.eof()) {
            bd[tam] = new veiculos;
            myfile1 >> bd[tam]->modelo;
            myfile1 >> bd[tam]->marca;
            myfile1 >> bd[tam]->tipo;
            myfile1 >> bd[tam]->ano;
            myfile1 >> bd[tam]->km;
            myfile1 >> bd[tam]->potenciaMotor;
            myfile1 >> bd[tam]->combustivel;
            myfile1 >> bd[tam]->cambio;
            myfile1 >> bd[tam]->direcao;
            myfile1 >> bd[tam]->cor;
            myfile1 >> bd[tam]->portas;
            myfile1 >> bd[tam]->placa;
            myfile1 >> bd[tam]->valor;
            tam++;
        }
        myfile1.close();
    }else{
        cout << "Arquivo não encontrado." << endl;
    }
    for (int i = tam; i < 50; i++)
    {
        bd[i] = nullptr;
    }
    cout << "  +--------------------+" << endl;
    cout << "  |   MENU DE OPÇÕES   |" << endl;
    cout << "  +--------------------+" << endl;
    cout << "  |   1) INSERIR       |" << endl;
    cout << "  |   2) REMOVER       |" << endl;
    cout << "  |   3) BUSCAR        |" << endl;
    cout << "  |   4) RELATÓRIO     |" << endl;
    cout << "  |   0) SAIR          |" << endl;
    cout << "  +--------------------+" << endl;

    cout << " Digite a opção desejada : " << endl;
    cin >> opcao;

    /*Caso o usuario digitar algum número que esta fora das
    opções exibe a seguinte mensagem:*/
    while (opcao < 0 || opcao > 4)
    {
        cout << " ATENÇÃO - Digite um número que esteja entre as opções: " << endl;
        cin >> opcao;
    }
    int linhas = 0;
    switch (opcao) {
        case 0: {
            ofstream myfile2;
            myfile2.open("BD_veiculos_2.txt");
            if (myfile2.is_open()) {
                for (int i = 0; bd[i] != nullptr; i++) {
                    myfile2 << bd[i]->modelo << " ";
                    myfile2 << bd[i]->marca << " ";
                    myfile2 << bd[i]->tipo << " ";
                    myfile2 << bd[i]->ano << " ";
                    myfile2 << bd[i]->km << " ";
                    myfile2 << bd[i]->potenciaMotor << " ";
                    myfile2 << bd[i]->combustivel << " ";
                    myfile2 << bd[i]->cambio << " ";
                    myfile2 << bd[i]->direcao << " ";
                    myfile2 << bd[i]->cor << " ";
                    myfile2 << bd[i]->portas << " ";
                    myfile2 << bd[i]->placa << " ";
                    myfile2 << bd[i]->valor << '\n';
                    linhas++;
                }
                myfile2.close();
            } else {
                cout << "Nao foi possivel gerar o arquivo";
            }
            break;
        }
        case 2: {

              // Excluir carro do banco de dados
              cout << "Digite a placa do carro que deseja excluir: " << endl;
              string input;
              cin >> input;
              Tveiculos ** itemExcluir =  &bd[2];//busca(input,bd);
              if(itemExcluir == nullptr) {
                   cout << "não foi possível excluir, pois o carro não existe na base de dados"<< endl;
              } else {
                   excluir(itemExcluir);
                   cout << "item excluido com sucesso!"<< endl;
              }
        }
        default: {
            break;
        }
    }
}