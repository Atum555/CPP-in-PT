#include <algorithm>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

#ifndef __CPP_PT__
#define __CPP_PT__


// Tipos Básicos
typedef void   vacuo;
typedef bool   boleano;
typedef char   caracter;
typedef short  mini;
typedef int    inteiro;
typedef long   comprido;
typedef float  flutuante;
typedef double duplo;

// Tipos Básicos sem Sinal
typedef unsigned char  caracter_sem_sinal;
typedef unsigned short mini_sem_sinal;
typedef unsigned int   sem_sinal;
typedef unsigned long  giga_sem_sinal;

// Nomes
#define constante     const
#define se            if
#define casoContrario else
#define alterna       switch
#define caso          case
#define enquanto      while
#define continua      continue
#define parar         break
#define retornar      return
#define para          for

// Funções
#define principal main
#define lerLinha  getline
#define maiuscula toupper
#define minuscula tolower

// Sinais matemáticos (extra)
#define aumentar ++
#define diminuir --
#define mais     +
#define menos    -
#define vezes    *
#define dividir  /
#define resto    %

// Sinais lógicos (extra)
#define menor    <
#define maior    >
#define igual    ==
#define nao      not
#define e        and
#define ou       or
#define imprimir <<
#define ler      >>

// Numeros (extra)
#define zero   0
#define um     1
#define dois   2
#define tres   3
#define quatro 4
#define cinco  5
#define seis   6
#define sete   7
#define oito   8
#define nove   9

// Parentises (extra)
#define abre_parentises (
#define fecha_parentises )
#define abrir_bloco  {
#define fechar_bloco }
#define abrir_indice [
#define fechar_indice ]


// STD::IOSTREAM
#ifdef _GLIBCXX_IOSTREAM

#define terminal      std::cout
#define teclado       std::cin
#define muda_de_linha std::endl

#endif

// STD::STRING
#ifdef _GLIBCXX_STRING

#define texto                     std::string
#define nao_encontrado            std::string::npos
#define encontra                  find
#define encontra_primeiro         find_first_of
#define encontra_ultimo           find_last_of
#define encontra_primeiro_que_nao find_first_not_of
#define encontra_ultimo_que_nao   find_last_not_of

#endif

// STD::STRINGSTREAM
#ifdef _GLIBCXX_SSTREAM

#define fluxo_e_string std::istringstream
#define fluxo_s_string std::ostringstream

#endif

// STD::FSTREAM
#ifdef _GLIBCXX_FSTREAM

#define fluxo_e_ficheiro std::ifstream
#define fluxo_s_ficheiro std::ofstream

#endif

#endif