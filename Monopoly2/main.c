#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "mabiblio.h"

int main()
{
    int option;//

    do{
        printf("Select your language\n");//
        printf("1 - Francais\n");//
        printf("2 - English\n");//
        scanf("%d", &option);//
      }while((option < 1) || (option > 2));
    //system("cls");//
    if (option==1)
    {
       monopolyfr();
    }
    else if (option==2)
    {
       monopolyEn();//
    }
    if (option==3)
    {
       initialiseTable();//
    }
}

