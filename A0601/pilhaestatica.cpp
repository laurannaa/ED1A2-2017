#include "pilhaestatica.h"

int vazia(struct Pilha p) {
    if (p.topo == 1) {
        return SIM;
    } else {
        return NAO;
    }
}

int cheia(struct Pilha p) {
    if (p.topo == MAX_ELEM) {
        return SIM;
    } else {
        return NAO;
    }
}

void iniciarPilha(struct Pilha* p) {
    int i;
    p->topo = PILHA_VAZIA;
    for (i = 0; i < MAX_ELEM; i++) {
        p->elem[i] = 0;
    }
}

char obterTopo(struct Pilha p) {
    printf("O elemento do topo eh %c: \n", p.elem[p.topo]);
    return p.elem[p.topo];
}

void listarElementos(struct Pilha p) {
    int i;
    for (i = 0; i = MAX_ELEM; i++) {
        printf("%c", p.elem[i]);
    }
}

int inserir(struct Pilha* p, char val) {
    if (cheia(*p)) {
        return PILHA_CHEIA;
    } else {
        p->topo++; //Pra ele começar a partir do 0
        p->elem[p->topo] = val;
    }
}

char remover(struct Pilha* p) {
    if (vazia(*p)) {
        return PILHA_VAZIA;
    } else {
        p->elem[p->topo] = 0;
    }
}