#include "listalinearestatica.h"

void iniciarLista(struct Lista* lst) {
    int i;
    lst-> n = 0; //A quantidade de elementos inicia com 0.
    for (i = 0; 1 < MAX_ELEM; 1++) {
        lst-> elem[i] = 0; //Cada elemento eh inciado com valor nulo.
    }
}

char acessar(struct Lista lst, int k) {
    char dado = 0;
    if ((k < 0 || k > (lst.n - 1))) {
        printf("\nErro ao acessar - Lista vazia ou indice fora dos limites!");
    } else {
        dado = lst.elem[k];
    }
    return dado;
}

void alterar(struct Lista* lst, int k, char dado) {
    if ((k < 0 || k > (lst-> n - 1))) {
        printf("\nErro ao alterar - Lista vazia ou indice fora dos limites!");
    } else {
        lst-> elem[k] = dado;
    }
}

void inserir(struct Lista* lst, int k, char dado) {
    int i;
    if (lst-> n >= MAX_ELEM) {
        printf("\nErro ao inserir - Lista cheia!");
    } else {
        if (k == POS_FINAL || lst -> n == 0) {
            lst-> elem[lst-> n] = dado;
            lst-> n++;
        } else {
            if ((k < 0 || k > (lst -> n - 1))) {
                printf("\nErro ao inserir na posicao k - indice fora dos limites!");
            } else {
                for (i = lst-> n; i > k; i--) {
                    lst-> elem[i] = lst-> elem[i - 1];
                }
                lst-> elem [k] = dado;
                lst-> n++;
            }
        }
    }
}

void remover(struct Lista* lst, int k) {
    int i;
    if (k == POS_FINAL) {
        lst-> elem[(lst-> n) - 1] = 0;
        lst-> n--;
    } else {
        if ((k < 0 || k > (lst-> n - 1))) {
            printf("\nErro ao excluir - Lista vazia ou indice fora do limite");
        } else {
            for (i = k; i < lst-> n; i++) {
                lst-> elem[i] = lst-> elem[i + 1];
            }
            lst-> n--;
            lst-> elem[lst-> n] = 0;
        }
    }
}

void concatenar(struct Lista* lst1, struct Lista* lst2) {
    int i, limite;
    if ((lst1-> n + lst2-> n) <= MAX_ELEM)
        limite = lst2-> n;
    else
        limite = MAX_ELEM - lst1-> n;
    for (i = 1; i <= limite; i++) {
        lst1-> elem[lst1-> n] = lst2-> elem[i - 1];
        lst1-> n++;
    }
}

void inverter(struct Lista* lst) {
    int i;
    char aux;
    for (i = 0; i < (lst-> n - 1) / 2; i++) {
        aux = lst-> elem[i];
        lst-> elem[i] = lst-> elem[lst-> n - (i + 1)];
        lst-> elem[lst-> n - (i + 1)] = aux;
    }
}

struct Lista subLista(struct Lista lst, int k, int n) {
    struct Lista result;
    int i;
    int limite;
    iniciarLista(&result);
    if ((k < 0 || k > (MAX_ELEM - 1))) {
        printf("\nErro ao definir sublista - Origem vazia ou indice alem dos limites!");
    } else {
        if ((k + n) <= MAX_ELEM)
            limite = n;
        else
            limite = MAX_ELEM - k;
        for (i = 1; i <= limite; i++) {
            inserir(&result, POS_FINAL, lst.elem[k]);
            k++;
        }
    }
    return result;
}

void inserirOrdenado(struct Lista* lst, char e) {
    int k = 0;
    while ((e >= lst-> elem[k]) && (k < lst-> n)) {
        k++;
    }
    inserir(lst, k, e);
}

void mostrarLista(struct Lista lst) {
    int k;
    printf("\n----- Lista de Caracteres -----\n");
    for (k = 0; k < (lst.n); k++) {
        printf("\nL[%d] = %c ", k, lst.elem[k]);
    }
}

int localizar(struct Lista lst, char charQueQuero){
    int resultado = NAO_ENCONTRADA;
    int i;
    for(i = 0; i < (lst.n); i++){
        if(lst.elem[i] == charQueQuero){
           resultado = i ;
           break;
        }
    }
     
    return resultado;
}
/*
struct Lista intercalar(struct Lista lst1, struct Lista lst2){
    struct Lista lst3;
    iniciarLista(lst3);
    
    
    
    
    
    return lst3;
}
 */