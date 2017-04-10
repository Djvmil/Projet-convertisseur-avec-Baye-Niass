//09/04/2017
#include"FonctionsConvertisseur.h"

int main()
{
    char nombre[101];
    int choix;

    do
    {
        choix=0;
        system("cls");
        Menu(1);
        Menu(2);
        scanf("%d",&choix);
        system("cls");
        switch(choix)
        {

        //CONVERSION DECIMAL --> BINAIRE
        case 1:
            printf("\n***************************************************************");
            printf("\n *            CONVERSION DECIMAL ====> BINAIRE               * ");
            printf("\n***************************************************************");
            do
            {
                printf("\nVeuillez saisir le nombre:\n\n");
                printf("DECIMAL: ");
                fflush(stdin);
                gets(nombre);
                if(verifieBase(nombre,10)!=1)
                    printf("\nle nombre saisi n'est pas en base Decimal:(0,1,2,3,4,5,6,7,8,9)\n Reessayer encore! \n");
                else
                {
                    printf("BINAIRE: ");
                    convertDecimalVersX(convertVersEntier(nombre),2);
                    Menu(4);
                    scanf("%d",&choix);
                    choix=controleMenu4(choix);
                }
            }
            while(verifieBase(nombre,10)!=1 || choix==1);
            break;
        //CONVERSION DECIMAL --> OCTAL
        case 2:
            printf("\n***************************************************************");
            printf("\n *            CONVERSION DECIMAL ====> OCTAL                 * ");
            printf("\n***************************************************************");
            do
            {
                printf("\nVeuillez saisir le nombre:\n\n");
                printf("DECIMAL: ");
                fflush(stdin);
                gets(nombre);
                if(verifieBase(nombre,10)!=1)
                    printf("\nle nombre saisi n'est pas en base Decimal:(0,1,2,3,4,5,6,7,8,9)\n Reessayer encore! \n");
                else
                {
                    printf("OCTAL  : ");
                    convertDecimalVersX(convertVersEntier(nombre),8);
                    Menu(4);
                    scanf("%d",&choix);
                    choix=controleMenu4(choix);
                }
            }
            while(verifieBase(nombre,10)!=1 || choix==1);
            break;

        //CONVERSION DECIMAL --> HEXADECIMAL*
        case 3:
            printf("\n***************************************************************");
            printf("\n *            CONVERSION DECIMAL ====> HEXADECIMAL           * ");
            printf("\n***************************************************************");
            do
            {
                printf("\nVeuillez saisir le nombre:\n\n");
                printf("DECIMAL    : ");
                fflush(stdin);
                gets(nombre);
                if(verifieBase(nombre,10)!=1)
                    printf("\nle nombre saisi n'est pas en base Decimal:(0,1,2,3,4,5,6,7,8,9)\n Reessayer encore! \n");
                else
                {
                    printf("HEXADECIMAL: ");
                    convertDecimalVersX(convertVersEntier(nombre),16);
                    Menu(4);
                    scanf("%d",&choix);
                    choix=controleMenu4(choix);
                }
            }
            while(verifieBase(nombre,10)!=1 || choix==1);
            break;
        //CONVERSION BASE X --> DECIMAL
        case 4:
          //  do{
            printf("\n***************************************************************");
            printf("\n *            CONVERSION BASE X  ====> DECIMAL               * ");
            printf("\n***************************************************************\n");

            choix=0;
            Menu(3);
            scanf("%d",&choix);
            system("cls");
            switch(choix)
            {
            //CONVERSION BINAIRE --> DECIMAL
            case 1:
                printf("\n***************************************************************");
                printf("\n *            CONVERSION BINAIRE ====> DECIMAL               * ");
                printf("\n***************************************************************");
                do
                {
                    printf("\nVeuillez saisir le nombre:\n\n");
                    printf("BINAIRE: ");
                    fflush(stdin);
                    gets(nombre);
                    if(verifieBase(nombre,2)!=1)
                        printf("\nle nombre saisi n'est pas en base Binaire:(0,1)\n Reessayer encore! \n");
                    else
                    {
                        printf("DECIMAL: ");
                        convertXversDecimal(nombre,2,1);
                        Menu(4);
                        scanf("%d",&choix);
                        choix=controleMenu4(choix);
                    }
                }
                while(verifieBase(nombre,2)!=1 || choix==1);
                break;

            //CONVERSION OCTAL --> DECIMAL
            case 2:
                printf("\n***************************************************************");
                printf("\n *            CONVERSION OCTAL   ====> DECIMAL               * ");
                printf("\n***************************************************************");
                do
                {
                    printf("\nVeuillez saisir le nombre:\n\n");
                    printf("OCTAL  : ");
                    fflush(stdin);
                    gets(nombre);
                    if(verifieBase(nombre,8)!=1)
                        printf("\nle nombre saisi n'est pas en base Octal:(0,1,2,3,4,5,6,7)\n Reessayer encore! \n");
                    else
                    {
                        printf("DECIMAL: ");
                        convertXversDecimal(nombre,8,1);
                        Menu(4);
                        scanf("%d",&choix);
                        choix=controleMenu4(choix);
                    }
                }
                while(verifieBase(nombre,8)!=1 || choix==1);
                break;

            //CONVERSION HEXADECIMAL --> DECIMAL
            case 3:
                printf("\n***************************************************************");
                printf("\n *      CONVERSION HEXADECIMAL   ====> DECIMAL               * ");
                printf("\n***************************************************************");
                do
                {
                    printf("\nVeuillez saisir le nombre:\n");
                    printf("HEXADECIMAL: ");
                    fflush(stdin);
                    gets(nombre);
                    if(verifieBase(nombre,16)!=1)
                        printf("\nle nombre saisi n'est pas en base Hexadecimal:(0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F)\n Reessayer encore! \n");
                    else
                    {
                        printf("DECIMAL    : ");
                        convertXversDecimal(nombre,16,1);
                        Menu(4);
                        scanf("%d",&choix);
                        choix=controleMenu4(choix);
                    }
                }
                while(verifieBase(nombre,16)!=1 || choix==1);
                break;

            //QUITTER
            default:
                printf("\nVous etes sure de bien vouloir Quitter sinon \ntaper 2 pour aller au menu principal:\n");
                scanf("%d",&choix);
            };
            break;
          //  }while()
        //CONVERSION OCTAL -->BINAIRE
        case 5:
            printf("\n***************************************************************");
            printf("\n *            CONVERSION OCTAL   ====> BINAIRE               * ");
            printf("\n***************************************************************");
            do
            {
                printf("\nVeuillez saisir le nombre:\n\n");
                printf("OCTAL  : ");
                fflush(stdin);
                gets(nombre);
                if(verifieBase(nombre,8)!=1)
                    printf("\nle nombre saisi n'est pas en base Octal:(0,1,2,3,4,5,6,7)\n Reessayer encore! \n");
                else
                {
                    printf("BINAIRE: ");
                    convertDecimalVersX(convertXversDecimal(nombre,8,0),2);
                    Menu(4);
                    scanf("%d",&choix);
                    choix=controleMenu4(choix);
                }
            }
            while(verifieBase(nombre,8)!=1 || choix==1);
            break;
        //CONVERSION BINAIRE --> OCTAL
        case 6:
            printf("\n***************************************************************");
            printf("\n *          CONVERSION BINAIRE   ====> OCTAL                 * ");
            printf("\n***************************************************************");
            do
            {
                printf("\nVeuillez saisir le nombre:\n");
                printf("BINAIRE: ");
                fflush(stdin);
                gets(nombre);
                if(verifieBase(nombre,2)!=1)
                    printf("\nle nombre saisi n'est pas en base Binaire:(0,1)\n Reessayer encore! \n");
                else
                {
                    printf("OCTAL  : ");
                    convertDecimalVersX(convertXversDecimal(nombre,2,0),8);
                    Menu(4);
                    scanf("%d",&choix);
                    choix=controleMenu4(choix);
                }
            }
            while(verifieBase(nombre,2)!=1 || choix==1);
            break;

        //QUITTER
        default:
            printf("\nVous etes sure de bien vouloir Quitter sinon \ntaper 2 pour recommencer:\n");
            scanf("%d",&choix);
        }

    }
    while(choix==2);

    printf("\n\n");
    return 0;
}
