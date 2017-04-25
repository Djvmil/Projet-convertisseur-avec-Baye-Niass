//DEBUTER LE 31/03/2017
//FINI LE 14/04/2017
#include"FonctionsConvertBase.h"

int main()
{
    char nombre[101];
    int choix;

    //BOUCLE POUR REPETER LE PROGRAMME
    do
    {
        choix=0;
        system("cls");
        Menu(1);
        scanf("%d",&choix);
        system("cls");
        switch(choix)
        {

        //CONVERSION DECIMAL --> BINAIRE
        case 1:
            printf("\n\t************************************************************************");
            printf("\n\t *                  CONVERSION DECIMAL ====> BINAIRE                  * ");
            printf("\n\t************************************************************************\n");

            do
            {
                printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n\n");
                printf("DECIMAL: ");
                fflush(stdin);
                recupCh(nombre);
                if(quitter(nombre)==48)
                {
                    choix=2;
                    break;
                }
                if(verifieBase(nombre,10)!=1)
                    printf("\nle nombre saisi n'est pas en base Decimal:(0,1,2,3,4,5,6,7,8,9)\n\tReessayer encore! \n");
                else
                {
                    printf("BINAIRE: ");
                    convertDecimalVersX(convertVersEntier(nombre),2);
                    choix=0;
                    Menu(3);
                    fflush(stdin);
                    scanf("%d",&choix);
                    choix=controleMenu3_4(choix);
                }
            }
            while(verifieBase(nombre,10)!=1 || choix==1);
            break;

        //CONVERSION DECIMAL --> OCTAL
        case 2:
            printf("\n\t************************************************************************");
            printf("\n\t *                   CONVERSION DECIMAL ====> OCTAL                   * ");
            printf("\n\t************************************************************************\n");
            do
            {
                printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n\n");
                printf("DECIMAL: ");
                fflush(stdin);
                recupCh(nombre);
                if(quitter(nombre)==48)
                {
                    choix=2;
                    break;
                };
                if(verifieBase(nombre,10)!=1)
                    printf("\nle nombre saisi n'est pas en base Decimal:(0,1,2,3,4,5,6,7,8,9)\n\tReessayer encore! \n");
                else
                {
                    printf("OCTAL  : ");
                    convertDecimalVersX(convertVersEntier(nombre),8);
                    choix=0;
                    Menu(3);
                    fflush(stdin);
                    scanf("%d",&choix);
                    choix=controleMenu3_4(choix);
                }
            }
            while(verifieBase(nombre,10)!=1 || choix==1);
            break;

        //CONVERSION DECIMAL --> HEXADECIMAL*
        case 3:
            printf("\n\t************************************************************************");
            printf("\n\t *                CONVERSION DECIMAL ====> HEXADECIMAL                * ");
            printf("\n\t************************************************************************\n");
            do
            {
                printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n\n");
                printf("DECIMAL    : ");
                fflush(stdin);
                recupCh(nombre);
                if(quitter(nombre)==48)
                {
                    choix=2;
                    break;
                };
                if(verifieBase(nombre,10)!=1)
                    printf("\nle nombre saisi n'est pas en base Decimal:(0,1,2,3,4,5,6,7,8,9)\n\tReessayer encore! \n");
                else
                {
                    printf("HEXADECIMAL: ");
                    convertDecimalVersX(convertVersEntier(nombre),16);
                    choix=0;
                    Menu(3);
                    fflush(stdin);
                    scanf("%d",&choix);
                    choix=controleMenu3_4(choix);
                }
            }
            while(verifieBase(nombre,10)!=1 || choix==1);
            break;

        //CONVERSION BASE X --> DECIMAL
        case 4:
            do
            {
                system("cls");
                printf("\n\t************************************************************************");
                printf("\n\t *            CONVERSION BASE QUELCONQUE  ====> DECIMAL               * ");
                printf("\n\t************************************************************************\n");
                choix=0;
                Menu(2);
                fflush(stdin);
                scanf("%d",&choix);
                if(choix==4)
                {
                    choix=3;
                    break;
                }
                system("cls");
                switch(choix)
                {

                //CONVERSION BINAIRE --> DECIMAL
                case 1:
                    printf("\n\t************************************************************************");
                    printf("\n\t *                 CONVERSION BINAIRE ====> DECIMAL                   * ");
                    printf("\n\t************************************************************************\n");
                    do
                    {
                        printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n\n");
                        printf("BINAIRE: ");
                        fflush(stdin);
                        recupCh(nombre);
                        if(quitter(nombre)==48)
                        {
                            choix=2;
                            break;
                        };
                        if(verifieBase(nombre,2)!=1)
                            printf("\nle nombre saisi n'est pas en base Binaire:(0,1)\n\tReessayer encore! \n");
                        else
                        {
                            printf("DECIMAL: ");
                            convertXversDecimal(nombre,2,1);
                            choix=0;
                            Menu(4);
                            scanf("%d",&choix);
                            choix=controleMenu3_4(choix);
                        }
                    }
                    while(verifieBase(nombre,2)!=1 || choix==1);
                    break;

                //CONVERSION OCTAL --> DECIMAL
                case 2:
                    printf("\n\t************************************************************************");
                    printf("\n\t *                  CONVERSION OCTAL   ====> DECIMAL                  * ");
                    printf("\n\t************************************************************************\n");
                    do
                    {
                        printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n\n");
                        printf("OCTAL  : ");
                        fflush(stdin);
                        recupCh(nombre);
                        if(quitter(nombre)==48)
                        {
                            choix=2;
                            break;
                        };
                        if(verifieBase(nombre,8)!=1)
                            printf("\nle nombre saisi n'est pas en base Octal:(0,1,2,3,4,5,6,7)\n\tReessayer encore! \n");
                        else
                        {
                            printf("DECIMAL: ");
                            convertXversDecimal(nombre,8,1);
                            choix=0;
                            Menu(4);
                            fflush(stdin);
                            scanf("%d",&choix);
                            choix=controleMenu3_4(choix);
                        }
                    }
                    while(verifieBase(nombre,8)!=1 || choix==1);
                    break;

                //CONVERSION HEXADECIMAL --> DECIMAL
                case 3:
                    printf("\n\t************************************************************************");
                    printf("\n\t *               CONVERSION HEXADECIMAL   ====> DECIMAL               * ");
                    printf("\n\t************************************************************************\n");
                    do
                    {
                        printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n");
                        printf("HEXADECIMAL: ");
                        fflush(stdin);
                        recupCh(nombre);
                        if(quitter(nombre)==48)
                        {
                            choix=2;
                            break;
                        };
                        if(verifieBase(nombre,16)!=1)
                            printf("\nle nombre saisi n'est pas en base Hexadecimal:(0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F)\n\tReessayer encore! \n");
                        else
                        {
                            printf("DECIMAL    : ");
                            convertXversDecimal(nombre,16,1);
                            choix=0;
                            Menu(4);
                            fflush(stdin);
                            scanf("%d",&choix);
                            choix=controleMenu3_4(choix);
                        }
                    }
                    while(verifieBase(nombre,16)!=1 || choix==1);
                    break;

                //QUITTER
                default:
                    printf("\n     Vous etes sure de bien vouloir Quitter SI OUI taper une autre touche \n   SINON taper 2 pour aller au precedent menu ou 3 pour aller menu principal.\n\t\t\t\tCHOIX: ");
                    fflush(stdin);
                    scanf("%d",&choix);
                };
            }
            while(choix==2);
            break;

        //CONVERSION OCTAL -->BINAIRE
        case 5:
            printf("\n\t************************************************************************");
            printf("\n\t *                   CONVERSION OCTAL   ====> BINAIRE                 * ");
            printf("\n\t************************************************************************\n");
            do
            {
                printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n\n");
                printf("OCTAL  : ");
                fflush(stdin);
                recupCh(nombre);
                if(quitter(nombre)==48)
                {
                    choix=2;
                    break;
                };
                if(verifieBase(nombre,8)!=1)
                    printf("\nle nombre saisi n'est pas en base Octal:(0,1,2,3,4,5,6,7)\n\tReessayer encore! \n");
                else
                {
                    printf("BINAIRE: ");
                    convertDecimalVersX(convertXversDecimal(nombre,8,0),2);
                    choix=0;
                    Menu(3);
                    fflush(stdin);
                    scanf("%d",&choix);
                    choix=controleMenu3_4(choix);
                }
            }
            while(verifieBase(nombre,8)!=1 || choix==1);
            break;

        //CONVERSION BINAIRE --> OCTAL
        case 6:
            printf("\n\t************************************************************************");
            printf("\n\t *                CONVERSION BINAIRE   ====> OCTAL                    * ");
            printf("\n\t************************************************************************\n");
            do
            {
                printf("\nVeuillez saisir le nombre ou taper A pour retourner au menu precedent:\n");
                printf("BINAIRE: ");
                fflush(stdin);
                recupCh(nombre);
                if(quitter(nombre)==48)
                {
                    choix=2;
                    break;
                };
                if(verifieBase(nombre,2)!=1)
                    printf("\nle nombre saisi n'est pas en base Binaire:(0,1)\n\tReessayer encore! \n");
                else
                {
                    printf("OCTAL  : ");
                    convertDecimalVersX(convertXversDecimal(nombre,2,0),8);
                    choix=0;
                    Menu(3);
                    fflush(stdin);
                    scanf("%d",&choix);
                    choix=controleMenu3_4(choix);
                }
            }
            while(verifieBase(nombre,2)!=1 || choix==1);
            break;

        //AIDE
        case 7 :
            printf("   =========================================================================");
            printf("\n\t\t\t\t  AIDE \n");
            printf("\t\t\t\t-------- \n");
            printf("\n     \n\t\t\t \n");
            printf("\n\t\t\t**************************\n\t\t\t  * LE SYSTEME DECIMAL *\n\t\t\t**************************\n");
            printf("     Le systeme decimal est celui dans lequel nous avons le plus l'habitude \n\t  d'ecrire. Chaque chiffre peut avoir 10 valeurs differentes : \n\t\t0, 1, 2, 3, 4, 5, 6, 7, 8, 9, de ce fait,\n\t\t   le systeme decimal a pour base 10.");
            printf("\n\n\t\t\t**************************\n\t\t\t  *  LE SYSTEME OCTAL  *\n\t\t\t**************************\n");
            printf("     Le systeme octal utilise un systeme de numeration ayant comme base 8 \n\t(octal => latin octo = huit). Il faut noter que dans ce systeme \n   nous n'aurons plus 10 symboles mais 8 seulement :0, 1, 2, 3, 4, 5, 6, 7");
            printf("\n\n\t\t");
            system("pause");
            printf("\n\n\t\t\t**************************\n\t\t\t  * LE SYSTEME BINAIRE *\n\t\t\t**************************\n");
            printf("   Dans le systeme binaire , chaque chiffre peut avoir 2 valeurs differentes: 0, 1.\n\t\tDe ce fait, le systeme a pour base 2.");
            printf("\n\n\t\t\t******************************\n\t\t\t  * LE SYSTEME HEXADECIMAL *\n\t\t\t******************************\n");
            printf("       \tLe systeme hexadecimal utilise les 16 symboles suivant :\n\t    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F.\n\t\tDe ce fait, le systeme a pour base 16.");
            printf("\n   =========================================================================");
            printf("\n\n\t\tTaper 2 pour retourner au Menu principal \n\t\t  SINON une autre touche pour quitter:\n\t\t\t\tCHOIX: ");
            fflush(stdin);
            scanf("%d",&choix);
            break;

        //A PROPOS
        case 8 :
            printf("   =========================================================================");
            printf("\n\t\t\t\t  A PROPOS \n");
            printf("\t\t\t\t------------ \n");
            printf("\n     ConvertBase est un convertisseur qui permet de convertir des nombres\n\t\t\td'une base a une autre\n");
            printf("\n\n     Version 00.01.2017 (64-bit)\n");
            printf("\n\n     ConvertBase Copyright BOTech(Business Only: Technologie) Inc. 2017. \n\n     Tous droits reserves.\n");
            printf("\n\n     Devellopeur: Seydi M. Moustapha Sy Dieme .\n");
            printf("\n   =========================================================================");
            printf("\n\n\t\tTaper 2 pour retourner au Menu principal \n\t\t  SINON une autre touche pour quitter:\n\t\t\t\tCHOIX: ");
            fflush(stdin);
            scanf("%d",&choix);
            break;

        //QUITTER
        default:
            printf("\n\tVous etes sure de bien vouloir Quitter SI OUI taper une autre touche \n\t\t\tSINON taper 2 pour recommencer:\n\t\t\t\tCHOIX: ");
            fflush(stdin);
            scanf("%d",&choix);
        }
    }
    while(choix==2 || choix==3);

    printf("\n\t\t\t\tAU REVOIR (-_-)");
    printf("\n\n");
    return 0;
}
