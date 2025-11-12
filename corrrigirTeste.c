#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
    int conteudo;
    struct cel *seg;
} cel;

typedef struct cel* Lista;

Lista* cria_lista() {
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if (li != NULL) {
        *li = NULL;
    }
    return li;
}

void libera_lista(Lista *lista) {
    if (lista == NULL) return;

    Lista atual = *lista;
    Lista proximo;

    while (atual != NULL) {
        proximo = atual->seg;
        free(atual);
        atual = proximo;
    }
    free(lista);
}

void imprime_lista(Lista cabeca) {
    Lista atual = cabeca;
    while (atual != NULL) {
        printf("%d -> ", atual->conteudo);
        atual = atual->seg;
    }
    printf("NULL\n");
}


int insere_lista_fim(Lista *lista, int x) {
    if (lista == NULL) {
        return 0;
    }
    cel* aux = (cel*)malloc(sizeof(cel));
    if (aux == NULL) {
        return 0;
    }
    
    aux->conteudo = x;
    aux->seg = NULL;
    
    if ((*lista) == NULL) {
        *lista = aux;
    } else {
        cel *temp;
        temp = *lista;
        while (temp->seg != NULL) {
            temp = temp->seg;
        }
        temp->seg = aux;
    }
    return 1;
}

Lista* RemoverY(Lista cabeca, int y) {
    Lista atual = cabeca;
    Lista anterior = NULL;

    while (atual != NULL) {
        if (atual->conteudo == y) {
            if (anterior == NULL) {
                cabeca = atual->seg;
            } else {
                anterior->seg = atual->seg;
            }
            Lista removido = atual;
            atual = atual->seg;
            free(removido);
            
        } else {
            anterior = atual;
            atual = atual->seg;
        }
    }
    return cabeca;
}

int main(void) {
    
    Lista *minha_lista = cria_lista();
    
    insere_lista_fim(minha_lista, 10);
    insere_lista_fim(minha_lista, 20);
    insere_lista_fim(minha_lista, 10);
    insere_lista_fim(minha_lista, 30);
    insere_lista_fim(minha_lista, 10);

    printf("Lista Original:\n");
    imprime_lista(*minha_lista);
    
    int valor_a_remover = 10;
    printf("Removendo todas as ocorrencias do valor %d...\n", valor_a_remover);
    *minha_lista = RemoverY(*minha_lista, valor_a_remover);
    
    printf("Lista Apos a Remocao:\n");
    imprime_lista(*minha_lista);
    
    libera_lista(minha_lista);
    
    return 0;
}
