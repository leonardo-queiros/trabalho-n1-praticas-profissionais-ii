# Sistema de Gerenciamento de Alunos — Entrega 1
## Referência: Entrega 1 (1º Bimestre) — Fundamentos e Estrutura Base

## 1. Escopo
O projeto consiste em um sistema em modo console (CLI) desenvolvido em linguagem C para o cadastro, consulta e controle de dados acadêmicos de alunos.

## 2. Requisitos Funcionais (RF)
- **RF01:** Cadastrar novos alunos com ID, Nome, Idade e Nota.
- **RF02:** Listar todos os alunos cadastrados.
- **RF03:** Buscar aluno por ID.
- **RF04:** Impedir o cadastro de alunos além do limite de capacidade.

## 3. Casos de Uso
1. **Cadastrar Aluno:** O usuário informa os dados. O sistema valida se há espaço no vetor e salva os dados.
2. **Listar Alunos:** O sistema percorre o vetor e exibe uma tabela no console com todos os registros.
3. **Buscar Aluno:** O usuário digita um ID. O sistema faz uma busca linear e exibe o aluno encontrado ou informa que ele não existe.
