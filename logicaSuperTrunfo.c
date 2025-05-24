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
    int pontosturisticos1, pontosturisticos2;
    unsigned long int populacao1, populacao2; 
    float area1, area2, PIB1, PIB2, densidadepop1, densidadepop2, PIBperc1, PIBperc2, superpoder1, superpoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
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

    printf("Comparação de cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - %s Super Poder: %.2f \n",cidade1, superpoder1);
    printf("Carta 2 - %s Super Poder: %.2f \n",cidade2, superpoder2);
    if (superpoder1 > superpoder2)
    {
        /* code */printf("Carta 1 - %s venceu!", cidade1);
    }else{
        printf("Carta 2 - %s venceu!", cidade2);
    }
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
