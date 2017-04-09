//09/04/2017
#include<stdio.h>
#include<math.h>
#include<conio.h>

void Menu(int a)
{
    if(a==1)
    {
        printf("  ***********************************************************\n");
        printf("   *                     CONVERTISSEUR                     *\n");
        printf("  ***********************************************************\n");
    }
    if(a==2)
    {
        printf("     1 ===> FAIRE UNE CONVERTION DECIMAL   ====> BINAIRE\n");
        printf("     2 ===> FAIRE UNE CONVERSION DECIMAL   ====> OCTAL\n");
        printf("     3 ===> FAIRE UNE CONVERSION DECIMAL   ====> HEXADECIMAL\n");
        printf("     4 ===> FAIRE UNE CONVERSION BASE X    ====> DECIMAL\n");
        printf("     5 ===> FAIRE UNE CONVERSION OCTAL     ====> BINAIRE\n");
        printf("     6 ===> FAIRE UNE CONVERSION BINAIRE   ====> OCTAL\n");
        printf("      ====> TAPER UNE AUTRE TOUCHE POUR QUITTER <====\n");
        printf("\n                 ************************\n                  * FAITES VOTRE CHOIX *\n                 ************************\n\t\t\tCHOIX: ");
    }
    if(a==3)
    {
        printf("   1 ===> FAIRE UNE CONVERTION BINAIRE     --> DECIMAL\n");
        printf("   2 ===> FAIRE UNE CONVERSION OCTAL       --> DECIMAL\n");
        printf("   3 ===> FAIRE UNE CONVERSION HEXADECIMAL --> DECIMAL\n");
        printf("       ====> TAPER UNE AUTRE TOUCHE POUR QUITTER <====\n");
        printf("\n                 ************************\n                  * FAITES VOTRE CHOIX *\n                 ************************\n\t\t\tCHOIX: ");
    }
    if(a==4)
    {
        printf("\n\n   1 ===> REFAIRE LA MEME CONVERSION\n");
        printf("   2 ===> ALLER AU MENU PRINCIPAL\n");
        printf("    ====> TAPER UNE AUTRE TOUCHE POUR QUITTER <====\n");
        printf("\n                 ************************\n                  * FAITES VOTRE CHOIX *\n                 ************************\n\t\t\tCHOIX: ");
    }

}
//-----------------------------------------------------------------------------
int my_strlen(char nombre[])
{
int i;
    for(i=0;nombre[i];i++);
return i;
}
//-----------------------------------------------------------------------------
int rech_1erPosCar(char nombre[], char car)
{
int i,j;
    for(i=0;nombre[i];i++)
    {
        if(nombre[i]==car)
            return i;
    }
return -1;
}
//-----------------------------------------------------------------------------
int verifieBase(char nombre[],int base)
{
int i;
    if(base==2)
    {
        for(i=0;nombre[i];i++)
        {
            if(nombre[i]<48 || nombre[i]>49)
                return 0;
        }
    return 1;
    }
    if(base==8)
    {
        for(i=0;nombre[i];i++)
        {
            if(nombre[i]<48 || nombre[i]>55)
                return 0;
        }
    return 1;
    }
    if(base==10)
    {
        for(i=0;nombre[i];i++)
        {
            if(nombre[i]<48 || nombre[i]>57)
                return 0;
        }
    return 1;
    }
    if(base==16)
    {
        for(i=0;nombre[i];i++)
        {
            if(rech_1erPosCar("0123456789ABCDEFabcdef",nombre[i])==-1)
                return 0;
        }
    return 1;
    }
return -1;
}
//-----------------------------------------------------------------------------
int convertVersEntier(char chaine[])
{
int i,nombre=0;
    for(i=0;chaine[i];i++)
    {
        nombre=nombre*10+chaine[i]-48;
    }
return nombre;
}
//-----------------------------------------------------------------------------
void afficheconvert(int T[],int taille )
{
char C;
int i;
    for(i=taille-1;i>=0;i--)
    {
             if(T[i]==10)printf("%c",65); else if(T[i]==11)printf("%c",66);
        else if(T[i]==12)printf("%c",67); else if(T[i]==13)printf("%c",68);
        else if(T[i]==14)printf("%c",69); else if(T[i]==15)printf("%c",70);
        else printf("%d",T[i]);
    }
}
//-----------------------------------------------------------------------------
void convertDecimalVersX(int nombre,int base)
{
int i=0,j,T[100];
   while(nombre!=0)
   {
       T[i]=nombre%base;
       nombre/=base;
       i++;
   }
  afficheconvert(T,i);
}
//-----------------------------------------------------------------------------
int convertXversDecimal(char nombre[],int base,int a)
{
int i,j,taille;
int conv=0;
taille=my_strlen(nombre);

    for(i=0;nombre[i];i++)
    {
             if(nombre[i]==65 || nombre[i]==97)j=10;  else if(nombre[i]==66 || nombre[i]==98)j=11;
        else if(nombre[i]==67 || nombre[i]==99)j=12;  else if(nombre[i]==68 || nombre[i]==100)j=13;
        else if(nombre[i]==69 || nombre[i]==101)j=14; else if(nombre[i]==70 || nombre[i]==102)j=15;
        else j=(nombre[i]-48);
         taille--;
        conv+=j*pow(base,taille);
    }
    if(a==1)
        printf("%d",conv);
    else
return conv;
}
//-----------------------------------------------------------------------------
int controleMenu4(int choix)
{
    if(choix!=1 && choix!=2)
    {
        printf("\n          Vous etes sure de bien vouloir Quitter si OUI taper une autre touche \n                SINON regarder le menu et faite votre choix.\n\t\t\tCHOIX: ");
        scanf("%d",&choix);
    }
return choix;
}
//-----------------------------------------------------------------------------
