#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//Teste Implementando Funções, isto será muito útil quando tivermos que cadastrar muitas cartas (ideia proveniente do tópico Conceitos de solução estruturada)

//função para calcular densidade populacional, (apenas divide o primeiro valor informado pelo segundo)
float densidadepop(float a, float b) {
    return a/b;
}

//função para calcular o PIB per capta, primeiramente converte o primeiro valor em bilhões, então divide pelo segundo
float PIBpercap(float a, float b){
    a *= 1e9; //converte para Bilhões 
    return a/b;
}

//função para calcular o Super Poder de uma carta (neste caso "e" deve ser subtraido pois representa a densidade populacional e quanto menor a densidade, maior o super poder)
double superpoder(float a, float b, float c, float d, float e, float f) {
    return a+b+c+d-e+f;
}

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[15], estado2[15], codigo1[3], codigo2[3], cidade1[15], cidade2[15];
    int pontosturisticos1, pontosturisticos2, atributo1, atributo2;
    unsigned long int populacao1, populacao2; 
    float area1, area2, PIB1, PIB2, densidadepop1, densidadepop2, PIBperc1, PIBperc2;
    float superpoder1, superpoder2;
    float soma1 = 0, soma2=0;
    float valor1_attr1 = 0, valor2_attr1 = 0, valor1_attr2 = 0, valor2_attr2 = 0;


    
printf("Bem Vindo ao SUPERTRUNFO! \n");
    printf("Vamos iniciar o cadastro da primeira carta \n");
        printf("Digite o estado: \n");
        scanf("%s", estado1);

        printf("Digite o código: \n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade (sem espaços no nome): \n");
        scanf("%s", cidade1);

        printf("Informe qual a população da cidade: \n");
        scanf("%lu", &populacao1);

        printf("Informe a área da cidade (km²): \n");
        scanf("%f", &area1);

        printf("Informe qual 0 PIB da cidade (bilhões de reais): \n");
        scanf("%f", &PIB1);

        printf("Informe quantos pontos turísticos a cidade possui: \n");
        scanf("%d", &pontosturisticos1);

        // chama a função densidadepop e informa os valores para serem calculados, e então inserir o resultado na variável densidadepop1
        densidadepop1 = densidadepop(populacao1,area1); 

        //chama a função PIBpercap e informa os valores para serem calculados, e então inserir o resultado na variável PIBperc1
        PIBperc1 = PIBpercap(PIB1,populacao1);

        //chama a função superpoder e informa os valores para serem calculados( colocando a densidade populacional no local correto), e então inserir o resultado na variável superpoder1
        superpoder1 = superpoder(populacao1,area1,PIB1,pontosturisticos1,densidadepop1,PIBperc1);

        printf("\n");

// aqui termina o cadastro das informações da primeira carta

        printf("Vamos iniciar o cadastro da segunda carta \n");
        printf("Digite o estado: \n");
        scanf("%s", estado2);

        printf("Digite o código: \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade (sem espaços no nome): \n");
        scanf("%s", cidade2);

        printf("Informe qual a população da cidade: \n");
        scanf("%lu", &populacao2);

        printf("Informe a área da cidade (km²): \n");
        scanf("%f", &area2);

        printf("Informe qual 0 PIB da cidade (bilhões de reais): \n");
        scanf("%f", &PIB2);

        printf("Informe quantos pontos turísticos a cidade possui: \n");
        scanf("%d", &pontosturisticos2);

        //chama a função densidadepop e informa os valores para serem calculados, e então inserir o resultado na variável densidadepop2
        densidadepop2 = densidadepop(populacao2,area2); 
        
        //chama a função PIBpercap e informa os valores para serem calculados, e então inserir o resultado na variável PIBperc2
        PIBperc2 = PIBpercap(PIB2,populacao2);

        //chama a função superpoder e informa os valores para serem calculados( colocando a densidade populacional no local correto), e então inserir o resultado na variável superpoder2
        superpoder2 = superpoder(populacao2,area2,PIB2,pontosturisticos2,densidadepop2,PIBperc2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
// Menu para a seleção de atributos
    printf("Hora de jogar!\n");
    printf("Escolha dois atributos diferentes!\n");
    printf("1) População\n");
    printf("2) Área \n");
    printf("3) PIB\n");
    printf("4) Pontos Turísticos\n");
    printf("5) Densidade Populacional\n");
    printf("6) PIB per capta\n");
    printf("7) SUPER PODER!\n");
    scanf("%d", &atributo1);
      // Menu dinâmico para o segundo atributo
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1) População\n"); break;
                case 2: printf("2) Área\n"); break;
                case 3: printf("3) PIB\n"); break;
                case 4: printf("4) Pontos Turísticos\n"); break;
                case 5: printf("5) Densidade Populacional\n"); break;
                case 6: printf("6) PIB per capta\n"); break;
                case 7: printf("7) SUPER PODER\n"); break;
            }
        }
    }

    do {
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Atributo repetido! Escolha outro atributo!.\n");
        }
    } while (atributo2 == atributo1);

    // Função para processar os valores dos atributos
    for (int i = 1; i <= 2; i++) {
        int attr = (i == 1) ? atributo1 : atributo2;
        float v1 = 0, v2 = 0;

        switch (attr) {
            case 1: v1 = populacao1; v2 = populacao2; 
            break;
            case 2: v1 = area1; v2 = area2;
            break;
            case 3: v1 = PIB1; v2 = PIB2; 
            break;
            case 4: v1 = pontosturisticos1; v2 = pontosturisticos2; 
            break;
            case 5: v1 = densidadepop1; v2 = densidadepop2; 
            break;
            case 6: v1 = PIBperc1; v2 = PIBperc2; 
            break;
            case 7: v1 = superpoder1; v2 = superpoder2; 
            break;
        }

        if (i == 1) {
            valor1_attr1 = v1;
            valor2_attr1 = v2;
        } else {
            valor1_attr2 = v1;
            valor2_attr2 = v2;
        }

        // Exibir resultado individual
        printf("\nComparando atributo %d:\n", attr);
        printf("%s: %.2f | %s: %.2f\n", cidade1, v1, cidade2, v2);
        if (attr == 5) {
            if (v1 < v2) {
                printf("=> %s venceu no atributo %d!\n", cidade1, attr);
            } else if (v2 < v1) {
                printf("=> %s venceu no atributo %d!\n", cidade2, attr);
            } else {
                printf("=> Empate no atributo %d!\n", attr);
            }
        } else {
            if (v1 > v2) {
                printf("=> %s venceu no atributo %d!\n", cidade1, attr);
            } else if (v2 > v1) {
                printf("=> %s venceu no atributo %d!\n", cidade2, attr);
            } else {
                printf("=> Empate no atributo %d!\n", attr);
            }
        }
    }

    // Soma dos dois atributos
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf("\n====================== RESULTADO FINAL ======================\n");
    printf("Cidades: %s vs %s\n", cidade1, cidade2);
    printf("Atributo %d: %.2f x %.2f\n", atributo1, valor1_attr1, valor2_attr1);
    printf("Atributo %d: %.2f x %.2f\n", atributo2, valor1_attr2, valor2_attr2);
    printf("Soma dos atributos: %.2f ( %s ) x %.2f ( %s )\n", soma1, cidade1, soma2, cidade2);

    // Resultado com operador ternário
    (soma1 > soma2) ? printf("==> %s venceu a rodada!\n", cidade1) :
    (soma2 > soma1) ? printf("==> %s venceu a rodada!\n", cidade2) :
                      printf("==> Empate!\n");

    printf("============================================================\n");

    return 0;
}

