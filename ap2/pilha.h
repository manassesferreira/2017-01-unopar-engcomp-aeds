#define MaxTam 1000

typedef int Apontador;
typedef int TipoChave;
typedef struct{
  TipoChave Chave;
} TipoItem;
typedef struct{
  TipoItem Item[MaxTam];
  Apontador Topo;
} TipoPilha;
