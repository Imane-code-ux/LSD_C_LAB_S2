#include "header.h"

int     get_third_largest()
{
//declaration d'un tableau d'entiers de taille 1000

int tab[1000];

//remplissage du tableau par des valeurs aléatoires

for(int i=0;i<=1000,i++)
        tab[i]=rand();

//affichage du tableau

for (int i=0;i<=1000;i++)
        printf("%d|",tab[i]);

//calcul du 3ème élement de ce tableau sans algorithme de tri
int first,second,third;
first=-1;
second=-1;
third=-1;
for(int i=0;i<=1000;i++)
        if(tab[i]>first)
                first=tab[i];
for(int i=0;i<=1000;i++)
        if(tab[i]>second && tab[i]<first)
                second=tab[i];
for(int i=0;i<=1000;i++)
        if(tab[i]>third && tab[i]<second)
                third=Tab[i];
return third;
}


}
