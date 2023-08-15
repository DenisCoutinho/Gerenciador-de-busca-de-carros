//
// Created by gabriel on 26/10/22.
//

#ifndef UNTITLED_LISTA_H
#define UNTITLED_LISTA_H

#endif //UNTITLED_LISTA_H


using namespace std;

/*Estrutura para guardar as informações dos veículos*/
typedef struct Tveiculos {
    string modelo, marca, tipo, combustivel, cambio, direcao, cor, placa;
    string ano, km, portas;
    string potenciaMotor,valor;
} veiculos;

void excluir(Tveiculos ** item) {
    delete(*item);
    *item = nullptr;
    tam--;
}

Tveiculos** busca(string busca, Tveiculos * lista[]) {
    Tveiculos ** encontrado;
    return encontrado;
}