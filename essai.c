#include<stdio.h>


void dieul(char chaine[])
{
int i=0;
char Car;
    while((Car=getchar())!='\n');
    {
        Car=getchar();
        chaine[i]=Car;
        i++;
    }
    chaine[i-1]='\0';
}


void puissance(float nombre, int puissance)
{
int i;
float s=1;
    for(i=0;i<puissance;i++)
    {
        s=s*nombre;
    }
printf("%f",s);
}

main(){
char text[152];
    /* printf("saisir le nombre\n");
     dieul(text);
     printf("%s",text);*/

     puissance(4.25,8);
}


