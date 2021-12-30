#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

///////////////////////////////////////
// Nom du sous-programme : COLOR
// R�le : change la couleur du texte dans la console, ainsi que la couleur du fond pour la ligne
// Compatibilit� : windows XP
///////////////////////////////////////

void Color1(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}




