#include "pilhaestatica.h"

int main(int argc, char** argv) {

    struct Pilha p;
    int op = 0;
    char valor;

    do {
        printf("\nDigite a opção desejada:"
                "\n1 - Verificar se a Pilha está vazia"
                "\n2 - Verificar se a Pilha está cheia"
                "\n3 - Iniciar Pilha"
                "\n4 - Obter topo"
                "\n5 - Mostrar Lista"
                "\n6 - Inserir elemento"
                "\n7 - Remover elemento"
                "\n8 - Sair"
                "\n.: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                vazia(p);
                break;
            case 2:
                cheia(p);
                break;
            case 3:
                iniciarPilha(&p);
                break;
            case 4:
                obterTopo(p);
                break;
            case 5:
                listarElementos(p);
                break;
            case 6:
                printf("Informe um valor: ");
                scanf("%s", &valor);
                inserir(&p, valor);
                break;
            case 7:
                remover(&p);
                break;
            case 8:
                break;
        }
    } while (op != 8);

    return (EXIT_SUCCESS);
}