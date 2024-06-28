
#include <stdio.h>

int main()
{
    int OP1, OP2;

    printf("Monte seu prato\n");
    
    printf("1-Espaguete\n");
    printf("2-Nhoque\n");
    printf("3-Caneloni\n");
    printf("4-Ravioli\n");
    
    printf("Informe o tipo de massa:\n");
    scanf("%d",&OP1);

    switch (OP1)
    {
        case 1:
        {
            printf("Escolha um molho:\n");
            printf("1- Quatro queijo\n");
            printf("2- Pomodoro\n");
            printf("3- Bolonhesa\n");
            scanf("%d",&OP2);
            switch(OP2)
            {
                case 1: printf("Espaguete quatro queijos - R$ 10,00\n"); break;
                case 2: printf("Espaguete Pomodoro - R$ 8,00\n"); break;
                case 3: printf("Espaguete Bolonhesa - R$ 12,00\n"); break;
                default: printf("Molho não existe!\n"); break;
            }
            break;
        }
        case 2:
        {
            printf("Escolha um molho:\n");
            printf("1- Carbonara\n");
            printf("2- Pesto\n");
            printf("3- Bolonhesa\n");
            scanf("%d",&OP2);
            switch(OP2)
            {
                case 1: printf("Nhoque Carbonara - R$ 10,00\n"); break;
                case 2: printf("Nhoque Pesto - R$ 11,00\n"); break;
                case 3: printf("Nhoque Bolonhesa - R$ 12,00\n"); break;
                default: printf("Molho não existe!\n"); break;
            }
            break;
        }
        case 3:
        {
            printf("Escolha um molho:\n");
            printf("1- Alfredo\n");
            printf("2- Bolonhesa\n");
            printf("3- Funghi\n");
            scanf("%d",&OP2);
            switch(OP2)
            {
                case 1: printf("Caneloni Alfredo - R$ 12,00\n"); break;
                case 2: printf("Caneloni Bolonhesa - R$ 13,00\n"); break;
                case 3: printf("Caneloni Funghi - R$ 15,00\n"); break;
                default: printf("Molho não existe!\n"); break;
            }
            break;
        }
        case 4:
        {
            printf("Escolha um molho:\n");
            printf("1- Alfredo\n");
            printf("2- Quatro queijo\n");
            printf("3- Funghi\n");
            scanf("%d",&OP2);
            switch(OP2)
            {
                case 1: printf("Ravioli Alfredo - R$ 14,00\n"); break;
                case 2: printf("Ravioli Quatro Queijo- R$ 15,00\n"); break;
                case 3: printf("Ravioli Funghi - R$ 17,00\n"); break;
                default: printf("Molho não existe!\n"); break;
            }
            break;
        }

        default : printf("Massa não existe!\n"); break;
    }

    return 0;
}
