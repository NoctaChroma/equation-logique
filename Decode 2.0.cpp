#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


///j'ai pris exemple pour faire ça sur :    https://prnt.sc/Q8ftb_7XFGmt


int souris = 6;
int casque = 18;
int micro = 13;

int main()
{

    std::cout << "La souris est egal a : " << souris / 2 << std::endl;
    std::cout << "Le casque est egal a : " << casque / ( souris / 2 ) << std::endl;
    std::cout << "Le micro est egal a : " << micro - (casque / ( souris / 2 )) << std::endl;
    std::cout << "et enfin le resultat final est de : " << pow(micro - (casque / ( souris / 2 )),2) - 3 << std::endl;

    return 0;
}


///Tout est editable voisis un exemple
/*
int Valeur 1 = 6 ; //a changer le 6
int Valeur 4 = 18; //a changer le 18
int Valeur 3 = 13; //a changer le 13
int valeur 4 = 4; //a changer le 4
int valeur 5 = 5; //a changer le 5

    std::cout << "La valeur 1 est egale a : " << Valeur 1 + 4 << std::endl; //le calcule est a changer
    std::cout << "La valeur 2 est egale a : " << 1+1 << std::endl; //le calcule est a changer
    std::cout << "La valeur 3 est egale a : " << 1+2 << std::endl; //le calcule est a changer
    std::cout << "La valeur 4 est egale a : " << 1+2 << std::endl; //le calcule est a changer
    // on peux en faire a l'infini
    std::cout << "et enfin le resultat final est de : " << 14*10^40 << std::endl; //le calcule est a changer
*/
