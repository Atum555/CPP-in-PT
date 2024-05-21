#include "../../cpp_PT.h"

vacuo imprimirFicheiro(constante texto &nomeFicheiro) {
    fluxo_e_ficheiro ficheiroEntrada(nomeFicheiro);
    texto            linha;
    giga_sem_sinal   contadorLinha = zero;

    terminal imprimir nomeFicheiro;
    terminal imprimir muda_de_linha;

    enquanto(lerLinha(ficheiroEntrada, linha)) {
        aumentar contadorLinha;

        terminal imprimir contadorLinha imprimir " |" imprimir linha imprimir "|";

        terminal imprimir muda_de_linha;
    }

    terminal imprimir muda_de_linha;
}

vacuo normalizar(constante texto &nomeFEntrada, constante texto &nomeFSaida) {
    fluxo_e_ficheiro ficheiroEntrada(nomeFEntrada);
    fluxo_s_ficheiro ficheiroSaida(nomeFSaida);
    texto            linha;
    enquanto(lerLinha(ficheiroEntrada, linha)) {
        se(linha.encontra_primeiro_que_nao(' ') == nao_encontrado) continua;

        giga_sem_sinal inicio = linha.encontra_primeiro_que_nao(' ');
        giga_sem_sinal fim    = linha.encontra_ultimo_que_nao(' ');

        para(; inicio <= fim; aumentar inicio) ficheiroSaida imprimir caracter(maiuscula(linha[inicio]));

        ficheiroSaida imprimir muda_de_linha;
    }
}

inteiro principal() {
    texto fEntrada = "ficheiro_entrada.txt";
    texto fSaida   = "ficheiro_saida.txt";
    imprimirFicheiro(fEntrada);
    normalizar(fEntrada, fSaida);
    imprimirFicheiro(fSaida);
    retornar zero;
}