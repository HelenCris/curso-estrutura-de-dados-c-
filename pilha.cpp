#include <iostream>
#include "pilha.h"

using namespace std;
  pilha::pilha() //construtora //stack;
  {
    tamanho = 0;
    estruturaDaPilha = new TipoItem[max_itens];
  }
  pilha::~pilha() //destrutora //~stack;
  {
    delete[] estruturaDaPilha;
  }

  bool pilha::estaCheia() //verifica se a pilha esta cheia
  {
    return (tamanho == max_itens);
  }

  bool pilha::estaVazia() //verifica se a pilha esta vazia
  {
    return (tamanho == 0);
  }

  void pilha::inserir(TipoItem item) //push
  {
    if (estaCheia()) {
      cout << "A pilha esta cheia!\n";
      cout<< "Não é possivel inserir este element!";
    } else {
      estruturaDaPilha[tamanho] = item;
      tamanho++;
    }
  }

  TipoItem pilha::remover() //pop
  {
    if (estaVazia()) {
      cout << "A pilha esta vazia!\n";
      cout << "Não tem elemento para ser removido!";
      return 0;
    } else {
      tamanho--;
      return estruturaDaPilha[tamanho-1];   
    }
  }

  void pilha::imprimir() //print
  {
    cout << "Pilha: [ ";
    for (int i=0; i<tamanho; i++) {
      cout << estruturaDaPilha[i] << " ";
    }
    cout << " ]\n";
  }
  
  TipoItem pilha::qualTamanho() //length
  {
    return tamanho;
  }