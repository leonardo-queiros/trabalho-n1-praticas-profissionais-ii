#include <stdio.h>
#include <string.h>

int MAX_ALUNOS = 5;
typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

void cadastrar(Aluno alunos[], int *total);
void listar(const Aluno alunos[], int total);
void buscar(const Aluno alunos[], int total);

// Inicio do fluxo - opções de switch
int main() {
    Aluno alunos[MAX_ALUNOS];
    int total = 0;
    int opcao;

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Cadastrar Aluno\n");
        printf("2. Listar Alunos\n");
        printf("3. Buscar Aluno\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        // Estrutura Condicional: switch
        switch (opcao) {
            case 1:
                cadastrar(alunos, &total);
                break;
            case 2:
                listar(alunos, total);
                break;
            case 3:
                buscar(alunos, total);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}


// Função de cadastrar o aluno:
void cadastrar(Aluno alunos[], int *total) {
    if (*total >= MAX_ALUNOS) {
        printf("Lista cheia!\n");
        return;
    }

    Aluno a;
    printf("\nID: ");
    scanf("%d", &a.id);
    
    printf("Nome: ");
    scanf("%s", a.nome);
    
    printf("Nota: ");
    scanf("%f", &a.nota);

    alunos[*total] = a;
    (*total)++;

    printf("Aluno cadastrado com sucesso!\n");
}

// Função de listar os alunos:
void listar(const Aluno alunos[], int total) {
    if (total == 0) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }

    printf("\n--- LISTA DE ALUNOS ---\n");
    for (int i = 0; i < total; i++) {
        printf("ID: %d | Nome: %s | Nota: %.1f\n", alunos[i].id, alunos[i].nome, alunos[i].nota);
    }
}

// Função de buscar o aluno:
void buscar(const Aluno alunos[], int total) {
    int idBusca;
    int encontrado = 0;

    printf("\nDigite o ID para buscar: ");
    scanf("%d", &idBusca);

    int i = 0;
    while (i < total) {
        if (alunos[i].id == idBusca) {
            printf("Aluno encontrado -> Nome: %s | Nota: %.1f\n", alunos[i].nome, alunos[i].nota);
            encontrado = 1;
            break;
        }
        i++;
    }

    if (!encontrado) {
        printf("Aluno nao encontrado.\n");
    }
}