#include <stdio.h>

int main()
{
    int dia, mes;
    
    printf("Indice do mes voce nasceu: ");
    scanf("%d", &mes);

    printf("Dia voce nasceu: ");
    scanf("%d", &dia);
    
    switch (mes)
    {
    case 1:
        if (dia < 20)
            printf("Voce e de Capricornio\n");
        else
            printf("Voce e de Aquario\n");
        break;
    
    case 2:
        if (dia < 19)
            printf("Voce e de Aquario\n");
        else
            printf("Voce e de Peixes\n");
        break;
    
    case 3:
        if (dia < 21)
            printf("Voce e de Peixes\n");
        else
            printf("Voce e de aries\n");
        break;
    
    case 4:
        if (dia < 20)
            printf("Voce e de aries\n");
        else
            printf("Voce e de Touro\n");
        break;
    
    case 5:
        if (dia < 21)
            printf("Voce e de Touro\n");
        else
            printf("Voce e de Gemeos\n");
        break;
    
    case 6:
        if (dia < 22)
            printf("Voce e de Gemeos\n");
        else
            printf("Voce e de Cancer\n");
        break;

    case 7:
        if (dia < 22)
            printf("Voce e de Gemeos\n");
        else
            printf("Voce e de Cancer\n");
        break;
    
    case 8:
        if (dia < 23)
            printf("Voce e de Cancer\n");
        else
            printf("Voce e de Leao\n");
        break;

    case 9:
        if (dia < 23)
            printf("Voce e de Leao\n");
        else
            printf("Voce e de Virgem\n");
        break;

    case 10:
        if (dia < 23)
            printf("Voce e de Virgem\n");
        else
            printf("Voce e de Libra\n");
        break;
    
    case 11:
        if (dia < 23)
            printf("Voce e de Libra\n");
        else
            printf("Voce e de Escorpiao\n");
        break;
            
    case 12:
        if (dia < 22)
            printf("Voce e de Escorpiao\n");
        else
            printf("Voce e de Sagitario\n");
        break;
    
    default:
        printf("Mes ou dia invalidos.\n");
        break;
    }
    return 0;
}
