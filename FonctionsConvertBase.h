//DEBUTER LE 31/03/2017
//FINI LE 14/04/2017
#include<stdio.h>
#include<math.h>
#include<conio.h>

void Menu(int a)//"1"Fonction d'affichage
{
    if(a==1)
    {
        printf("\t   *******************************************************************\n");
        printf("\t    *                          ConvertBase                          *\n");
        printf("\t   *******************************************************************\n");

        printf("\t\t1 ===> FAIRE UNE CONVERSION DECIMAL          ====> BINAIRE\n");
        printf("\t\t2 ===> FAIRE UNE CONVERSION DECIMAL          ====> OCTAL\n");
        printf("\t\t3 ===> FAIRE UNE CONVERSION DECIMAL          ====> HEXADECIMAL\n");
        printf("\t\t4 ===> FAIRE UNE CONVERSION BASE QUELCONQUE  ====> DECIMAL\n");
        printf("\t\t5 ===> FAIRE UNE CONVERSION OCTAL            ====> BINAIRE\n");
        printf("\t\t6 ===> FAIRE UNE CONVERSION BINAIRE          ====> OCTAL\n");
        printf("\t\t7 ===> POUR AVOIR DE L'AIDE\n");
        printf("\t\t8 ===> A PROPOS\n");
        printf("\t\t    ====> TAPER UNE AUTRE TOUCHE POUR QUITTER <====\n");
        printf("\n\t\t\t\t************************\n\t\t\t\t * FAITES VOTRE CHOIX *\n\t\t\t\t************************\n\t\t\t\t\tCHOIX: ");
    }
    if(a==2)
    {
        printf("\t\t1 ===> FAIRE UNE CONVERSION BINAIRE     ====> DECIMAL\n");
        printf("\t\t2 ===> FAIRE UNE CONVERSION OCTAL       ====> DECIMAL\n");
        printf("\t\t3 ===> FAIRE UNE CONVERSION HEXADECIMAL ====> DECIMAL\n");
        printf("\t\t4 ===> ALLER AU MENU PRINCIPAL\n");
        printf("\t\t  ====> TAPER UNE AUTRE TOUCHE POUR QUITTER <====\n");
        printf("\n\t\t\t\t************************\n\t\t\t\t * FAITES VOTRE CHOIX *\n\t\t\t\t************************\n\t\t\t\t\tCHOIX: ");
    }
    if(a==3)
    {
        printf("\n\n\t\t\t1 ===> REFAIRE LA MEME CONVERSION\n");
        printf("\t\t\t2 ===> ALLER AU MENU PRINCIPAL\n");
        printf("\t\t ====> TAPER UNE AUTRE TOUCHE POUR QUITTER <====\n");
        printf("\n\t\t\t\t************************\n\t\t\t\t * FAITES VOTRE CHOIX *\n\t\t\t\t************************\n\t\t\t\t\tCHOIX: ");
    }
    if(a==4)
    {
        printf("\n\n\t\t\t1 ===> REFAIRE LA MEME CONVERSION\n");
        printf("\t\t\t2 ===> ALLER AU PRECEDENT MENU\n");
        printf("\t\t\t3 ===> ALLER AU MENU PRINCIPAL\n");
        printf("\t\t ====> TAPER UNE AUTRE TOUCHE POUR QUITTER <====\n");
        printf("\n\t\t\t\t************************\n\t\t\t\t * FAITES VOTRE CHOIX *\n\t\t\t\t************************\n\t\t\t\t\tCHOIX: ");
    }
}
//-----------------------------------------------------------------------------
int controleMenu3_4(int choix)//"2"Fonction qui permet de controler le 4e et le 5e menu dans le fonction d'affichage
{
    if(choix!=1 && choix!=2 && choix!=3)
    {
        printf("\n\tVous etes sure de bien vouloir Quitter si OUI taper une autre touche \n\t\tSINON regarder le menu et faite votre choix.\n\t\t\t\t\tCHOIX: ");
        fflush(stdin); scanf("%d",&choix);
    }
    return choix;
}
//-----------------------------------------------------------------------------
int my_strlen(char nombre[])//"3"Fonction qui me permet de compter une chaine, il permet de verifier si les nombre sont composer de 9 caracteres
{
    int i;
    for(i=0; nombre[i]; i++);
    return i;
}
//-----------------------------------------------------------------------------
int rech_1erPosCar(char nombre[], char car)//"4"Fonction qui permet de rechercher un caratere et retourner sa posision, qui est utiliser dans la fonction verifieBase pour verifiei la base hexadecimal
{
    int i,j;
    for(i=0; nombre[i]; i++)
    {
        if(nombre[i]==car)
            return i;
    }
    return -1;
}
//-----------------------------------------------------------------------------
int verifieBase(char nombre[],int base)//"5"Fonction qui permet de verifier la base d'un nombre, il peut verifier 4 bases(2,8,10,16)
{
    int i;
    if(base==2)//verifie la base binaire
    {
        for(i=0; nombre[i]; i++)
        {
            if(nombre[i]<48 || nombre[i]>49)
                return 0;
        }
        return 1;
    }
    if(base==8)//verifie la base octal
    {
        for(i=0; nombre[i]; i++)
        {
            if(nombre[i]<48 || nombre[i]>55)
                return 0;
        }
        return 1;
    }
    if(base==10)//verifie la base decimal
    {
        for(i=0; nombre[i]; i++)
        {
            if(nombre[i]<48 || nombre[i]>57)
                return 0;
        }
        return 1;
    }
    if(base==16)//verifie la base hexadecimal
    {
        for(i=0; nombre[i]; i++)
        {
            if(rech_1erPosCar("0123456789ABCDEFabcdef",nombre[i])==-1)
                return 0;
        }
        return 1;
    }
    return -1;
}
//-----------------------------------------------------------------------------
int convertVersEntier(char chaine[])//"6"Fonction qui permet de convertir un nombre de type char a un nombre de type int
{
    int i,nombre=0;
    for(i=0; chaine[i]; i++)
    {
        nombre=nombre*10+chaine[i]-48;
    }
    return nombre;
}
//-----------------------------------------------------------------------------
void afficheconvert(int T[],int taille )//"7"Fonction qui permet d'afficher les nombre convertis
{
    char C;
    int i;
    for(i=taille-1; i>=0; i--)
    {
        if(T[i]==10)printf("%c",65);
        else if(T[i]==11)printf("%c",66);
        else if(T[i]==12)printf("%c",67);
        else if(T[i]==13)printf("%c",68);
        else if(T[i]==14)printf("%c",69);
        else if(T[i]==15)printf("%c",70);
        else printf("%d",T[i]);
    }
}
//-----------------------------------------------------------------------------
void convertDecimalVersX(int nombre,int base)//"8"Fonction qui permet de convertir un nombre de base decimal vers  un nombre de base X
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
int convertXversDecimal(char nombre[],int base,int a)//"9"Fonction qui permet de convertis un nombre de base X vers un nombre de base decimal
{
    int i,j,taille;
    int conv=0;
    taille=my_strlen(nombre);

    for(i=0; nombre[i]; i++)
    {
        if(nombre[i]==65 || nombre[i]==97)j=10;
        else if(nombre[i]==66 || nombre[i]==98)j=11;
        else if(nombre[i]==67 || nombre[i]==99)j=12;
        else if(nombre[i]==68 || nombre[i]==100)j=13;
        else if(nombre[i]==69 || nombre[i]==101)j=14;
        else if(nombre[i]==70 || nombre[i]==102)j=15;
        else j=(nombre[i]-48);
        taille--;
        conv+=j*pow(base,taille);
    }
    if(a==1)
        printf("%d",conv);
    else
        return conv;
}



int quitter(char ch[],int choix)
{
        if(ch[0]=='A' || ch[0]=='a'){return 48;}
}
//-----------------------------------------------------------------------------
