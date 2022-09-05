// pilha = stack
typedef int TipoItem;
const int max_itens = 100;

class pilha {
  private: 
  TipoItem tamanho;
  TipoItem* estruturaDaPilha;

  public: 
  pilha(); //construtora //stack;
  ~pilha(); //destrutora //~stack;
  bool estaCheia(); //verifica se a pilha esta cheia
  bool estaVazia(); //verifica se a pilha esta vazia
  void inserir(TipoItem item); //push
  TipoItem remover(); //pop
  void imprimir(); //print
  TipoItem qualTamanho(); //length
};