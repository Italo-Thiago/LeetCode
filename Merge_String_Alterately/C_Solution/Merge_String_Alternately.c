#include <stdio.h>  // Inclui as funções de entrada e saída padrão, como printf e fgets
#include <string.h> // Inclui funções para manipulação de strings, como strlen e strcspn

// Função para mesclar duas strings alternadamente
void MergeAlternately(char *word1, char *word2, char *result) {
    int m = strlen(word1);  // Obtém o comprimento da primeira string
    int n = strlen(word2);  // Obtém o comprimento da segunda string   

    int i = 0;  // Índice para a primeira string
    int j = 0;  // Índice para a segunda string
    int k = 0;  // Índice para a string resultante

    // Enquanto houver caracteres em qualquer uma das strings
    while (i < m || j < n)
    {
        // Se ainda houver caracteres na primeira string
        if (i < m )
        {
            result[k] = word1[i];  // Adiciona o caractere atual da primeira string ao resultado
            i++;  // Avança para o próximo caractere na primeira string
            k++;  // Avança para a próxima posição na string resultante
        }
        // Se ainda houver caracteres na segunda string
        if (j < n)
        {
            result[k] = word2[j];  // Adiciona o caractere atual da segunda string ao resultado
            j++;  // Avança para o próximo caractere na segunda string
            k++;  // Avança para a próxima posição na string resultante
        }
    }
    result[k] = '\0';  // Adiciona o caractere nulo ao final da string resultante para indicar o fim da string
}

int main() {
    char word1[100], word2[100], result[200];  // Declara as strings

    printf("Merge String Alternately Program\n");
    printf("Write the first letter\n");
    fgets(word1, sizeof(word1), stdin);  // Lê a primeira string do usuário
    word1[strcspn(word1, "\n")] = 0;  // Remove o caractere de nova linha da entrada do usuário

    printf("Write the second letter\n");
    fgets(word2, sizeof(word2), stdin);  // Lê a segunda string do usuário
    word2[strcspn(word2, "\n")] = 0;  // Remove o caractere de nova linha da entrada do usuário

    MergeAlternately(word1, word2, result);  // Chama a função para mesclar as strings

    printf("Result is %s\n", result);  // Imprime o resultado

    return 0;  // Indica que o programa terminou com sucesso
}