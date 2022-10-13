#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
j'ai pris exemple pour faire ça sur :    https://prnt.sc/Q8ftb_7XFGmt
tout est editable il suffis juste de moddifier les variable et il est possible d'en ajouté des nouvelle il vous suffis de copier coller 
printf("Le/la "variable" est egal a ");
std::cout << "calcule" << std::endl;
printf("\n");
c'est possible a l'infini xD

ah et j'ai pas envie de faire un algo qui fait tout j'ai pas dit que je n'en ferais pas au contraire sa peux etre fun mais pas tout de suite en tout cas

*/

int souris = 6;
int casque = 18;
int micro = 13;

int main()
{

    printf("La souris est egal a ");
    std::cout << souris / 2 << std::endl;
    printf("\n");

    printf("Le casque est egal a ");
    std::cout << casque / ( souris / 2 ) << std::endl;
    printf("\n");

    printf("Le micro est egal a ");
    std::cout << micro - (casque / ( souris / 2 ))  << std::endl;
    printf("\n");

    printf("et enfin le resultat final est de ");
    std::cout << pow(micro - (casque / ( souris / 2 )),2) - 3 << std::endl;
    printf("\n");

    return 0;
}
