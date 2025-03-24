#include <stdio.h>

int main () {

    //declaração das variáveis

    char pais1[20] = "Brasil";
    int populacao1 = 211000000, p_turisticos1 = 24;
    float area1 = 8510000, pib1 = 2174, d_demografica1, pib_per_cap1;

    char pais2[20] = "Argentina";
    int populacao2 = 46000000, p_turisticos2 = 10;
    float area2 = 2780000, pib2 = 483, d_demografica2, pib_per_cap2;

    char opcao1;
    char opcao2;

    int resultado1, resultado2;
    
    //calculo das densidades demográficas e pib per capita

    d_demografica1 = populacao1 / area1;
    pib_per_cap1 = (pib1 * 1000000000 / (float) populacao1);

    d_demografica2 = populacao2 / area2;
    pib_per_cap2 = (pib2 * 1000000000/ (float) populacao2);

    //Mostrar quais são os países e seus respectivos dados

    printf("País 1:\n-Nome: %s\n", pais1);
    printf("-População: %d\n", populacao1);
    printf("-Pontos turisticos (UNESCO): %d\n", p_turisticos1);
    printf("-Área: %.2f\n", area1);
    printf("-Pib (Em bilhões de USD): %.2f\n", pib1);
    printf("-Densidade Demográfica (hab/m²): %.2f\n", d_demografica1);
    printf("Pib-Per-Capita (USD/hab): %.2f\n", pib_per_cap1);

    printf("País 2:\n-Nome: %s\n", pais2);
    printf("-População: %d\n", populacao2);
    printf("-Pontos turisticos (UNESCO): %d\n", p_turisticos2);
    printf("-Área: %.2f\n", area2);
    printf("-Pib (Em bilhões de USD): %.2f\n", pib2);
    printf("-Densidade Demográfica (hab/m²): %.2f\n", d_demografica2);
    printf("Pib-Per-Capita (USD/hab): %.2f\n", pib_per_cap2);

    //Menu interativo

    printf("\nAgora, escolha duas opções de comparação entre as cartas:\n\n");
    
    printf("P. populacao;\n");
    printf("T. Pontos Turísticos;\n");
    printf("A. Area;\n");
    printf("B. PIB;\n");
    printf("D. Densidade demográfica;\n");
    printf("C. Pib-Per-Capita;\n");
    scanf(" %c", &opcao1);

    printf("\nDigite a segunda opção:\n");
    printf("P. populacao;\n");
    printf("T. Pontos Turísticos;\n");
    printf("A. Area;\n");
    printf("B. PIB;\n");
    printf("D. Densidade demográfica;\n");
    printf("C. Pib-Per-Capita;\n");
    scanf(" %c", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você escolheu 2 atributos iguais\nO jogo será encerrado!\n");
    }else{
        switch (opcao1)
        {
        case 'P':
        case 'p':
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'T':
        case 't': 
            resultado1 = p_turisticos1 > p_turisticos2 ? 1 : 0;
            break;       
        case 'A':
        case 'a':
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            resultado1 = d_demografica1 < d_demografica2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            resultado1 = pib_per_cap1 > pib_per_cap2 ? 1 : 0;
            break;
        default:
            printf("Escolha uma opção válida para opção 1\n");

            break;
        }

        if (resultado1 == 1){
            printf("A carta 1 venceu no primeiro atributo\n");
            } else {
                printf("A Carta 1 perdeu no primeiro atributo\n");
            }
        
    
        switch (opcao2)
            {
            case 'P':
            case 'p':
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 'T':
            case 't': 
                resultado2 = p_turisticos1 > p_turisticos2 ? 1 : 0;
                break;       
            case 'A':
            case 'a':
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 'B':
            case 'b':
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            case 'D':
            case 'd':
                resultado2 = d_demografica1 < d_demografica2 ? 1 : 0;
                break;
            case 'C':
            case 'c':
                resultado2 = pib_per_cap1 > pib_per_cap2 ? 1 : 0;
                break;
            default:
                printf("Escolha uma opção válida para opção 2\n");
                break;
            }
        if (resultado2 == 1){
            printf("A carta 1 venceu no segundo atributo\n");
            }else {
                printf("A carta 1 perdeu no segundo atributo\n");
            }

        if ((resultado1 == 1) && (resultado2 == 1)){
            printf("A carta 1 venceu!\n");
        }else if(resultado1 != resultado2){
            printf("O jogo empatou!\n");
        }else {
            printf("A carta 2 venceu!\n");
        }
        
    printf("Muito obrigado por jogar o Super-Trunfo! Nos vemos na próxima!!");
            
    }

return 0;

}