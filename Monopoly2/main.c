#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "mabiblio.h"

int main()
{

	initialiseTable();//
	//affichePlateau();

	srand (time(NULL));

	//Début du jeu
	printf("|================================|==========|================================|\n");
	printf("|========*=======*=======*=======| MONOPOLY |========*=======*=======*=======|\n");
	printf("|================================|==========|================================|\n");
	printf("\nBienvenue dans la console Monopoly pour Windows.\n");

//Menu de démarrage du jeu
menuInitial://
	switch (menuInitial())//
	{
	case 1: goto nouveauJeu;//
		break;
	case 2: printf("Pas encore implémenté!"); //A faire
		break;
	case 3:
		printf("Ce jeu a ete code en langage C dans le cadre de la discipline de\n");
		printf("Algorithmes et Programation structure en C, enseigne par le professeur Mme Rendler,\n");
		printf("a l'ecole d'ingenieur ECE Paris.\n");
		printf("\nAuteurs : Valentin Denis, Amaury Forestier et Antoine Layani \n");
		fflush(stdin);//
		getchar();//
		goto menuInitial;//
		break;//
	}

//Commencer un nouveau jeu
nouveauJeu ://

	//Sélection des Joueurs
	printf("\n======================= Selection des joueurs =======================\n");
	int nJoueures = selectionJoueures();//
	/*
	int plateau;//

	printf("A quelle plateau voulez vous ?\n");//
	printf("1 - Normal\n");//
	printf("2 - \n");//
	printf("3 - \n");//
	scanf("%d", &plateau);//
	if (plateau==1)
    {
       initialiseTable();//
    }
    if (plateau==2)
    {
       initialiseTable();//
    }
    if (plateau==3)
    {
       initialiseTable();//
    }
    */
	Batiments.nMaison =32;
	Batiments.nHotel =12;
	printf("\n====================================================================\n");
	fflush(stdin);//
	getchar();//
	system("cls");//

	int tour = 1;//
    int compteur =0;
	//Exécution du tour
	do
	{

		for (int i = 0; i < nJoueures; i++)//
		{
		    affichePlateau();
			printf("\n================================= Tour %3d =================================\n", tour);//
			printf("\n========== Joueur %d - %s ==========\n", i + 1, Joueures[i].Nom);//
			printf(" * Compte   : %d euros\n", Joueures[i].compte);//
			printf(" * place : Case %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
			printf("\n=======================================\n");//

			//Lancer des dés et calcul la nouvelle position du Joueurs
			printf("\n Je vais maintenant lancer les des...");//
			getchar();//

			int ancienneposition = Joueures[i].position;//


			if(Joueures[i].prison != true)//
            {
                int lancerDidier=lancerDedes(i);
                if(Joueures[i].prison != true)//
                {
                    Joueures[i].position = nouvelleposition(Joueures[i].position, lancerDidier);//
                }
                else goto menuJoueur;
            }
            else
                {
                  compteur++;
                if (compteur<4)
                    {
                        prison(i,nJoueures);//
                        Joueures[i].position=30;
                        goto menuJoueur;
                    }
                else
                    {
                        compteur=0;
                        Joueures[i].prison = false;
                        Joueures[i].position=10;
                        Joueures[i].compte -= 50;
                        printf("Vous avez terminer votre peine payez une amende 50M\n");
                        Joueures[i].position = nouvelleposition(Joueures[i].position, lancerDedes(i));
                        goto menuJoueur;
                    }
                }

            //affichePlateau();

			//Vérifier si le Joueur est dans ou a passé la Case Départ
			if ((Joueures[i].position == 0) || (Joueures[i].position < ancienneposition))//
			{
				printf("\n Passe par depart. Recevez 200 euros..\n");//
				Joueures[i].compte += 200;//
				printf("\n compte Actuel : %d euros\n", Joueures[i].compte);//
			}
			printf("\nplace actuel = Case %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//

			//Détails de la maison où se trouve le Joueur
			if ((Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Gare") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0))//
			{

				printf("\n             Popriete            \n");
				printf(" ___________________________________\n");
				printf(" |                                 |\n");
				printf(" | %-30.30s  |   * Propriete : %s", Proprietes[Joueures[i].position].Nom, Proprietes[Joueures[i].position].proprietaire);//
				if(Proprietes[Joueures[i].position].hypotheque== true){printf("\n|                                 |   * Hypoteque        : OUI\n");}
				else {printf("\n |                                 |   * Hypoteque        : NON\n");}
				printf(" |                                 |   * maison        : %d\n", Proprietes[Joueures[i].position].nombreDeMaisons);//
				printf(" |couleur %-11.11sLe prix  $%4d|   * HOTEL        : %d\n", Proprietes[Joueures[i].position].Couleur, Proprietes[Joueures[i].position].prix, Proprietes[Joueures[i].position].nombreHotel);//
				printf(" | ------------------------------- |\n");
				printf(" |             Loyer               |\n");
				printf(" |   Terrain              $%4d    |\n", Proprietes[Joueures[i].position].loyer[0]);//
				printf(" |                                 |\n");
				printf(" |   Groupe de couleurs   $%4d    |\n", Proprietes[Joueures[i].position].loyer[0] * 2);//
				printf(" |                                 |\n");
				printf(" |   Avec 1 maison        $%4d    |\n", Proprietes[Joueures[i].position].loyer[1]);//
				printf(" |                                 |\n");
				printf(" |   Avec 2 maisons       $%4d    |\n", Proprietes[Joueures[i].position].loyer[2]);//
				printf(" |                                 |\n");
				printf(" |   Avec 3 maisons       $%4d    |\n", Proprietes[Joueures[i].position].loyer[3]);//
				printf(" |                                 |\n");
				printf(" |   Avec 4 maisons       $%4d    |\n", Proprietes[Joueures[i].position].loyer[4]);//
				printf(" |                                 |\n");
				printf(" |   Avec un HOTEL        $%4d    |\n", Proprietes[Joueures[i].position].loyer[5]);//
				printf(" | ------------------------------- |\n");
				printf(" |  Prix de chaque Maison $%4d    |\n", Proprietes[Joueures[i].position].prixMaison);//
				printf(" |                                 |\n");
				printf(" |  Prix de chaque Hotel  $%4d    |\n", Proprietes[Joueures[i].position].prixMaison);//
				printf(" |                                 |\n");
				printf(" |  Montant de l'hypotheque $%4d  |\n", Proprietes[Joueures[i].position].prix/2+Proprietes[Joueures[i].position].prix*10/100);//
				printf(" | ------------------------------- |\n");
				printf(" |_________________________________|\n");

                    loyer(i,nJoueures);
                    goto menuJoueur;

			}

			else if ((Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Gare") == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0))//
			{

				printf("\n             Popriete            \n");
				printf(" ___________________________________\n");
				printf(" |                                 |\n");
				printf(" | %-30.30s  |   * Propriete : %s", Proprietes[Joueures[i].position].Nom, Proprietes[Joueures[i].position].proprietaire);//
			if(Proprietes[Joueures[i].position].hypotheque== true){printf("\n |                                |   * Hypoteque        : OUI\n");}
         else {printf("\n |                                 |   * Hypoteque        : NON\n");}
				printf(" |couleur %-11.11sLe prix  $%4d|\n", Proprietes[Joueures[i].position].Couleur, Proprietes[Joueures[i].position].prix);//
				printf(" | ------------------------------- |\n");
				printf(" |                                 |\n");
				printf(" |   Loyer                $25      |\n");
				printf(" |                                 |\n");
				printf(" |   Avec 2 gares         $50      |\n");//
				printf(" |                                 |\n");
				printf(" |   Avec 3 gares         $100     |\n");//
				printf(" |                                 |\n");
				printf(" |   Avec 4 gares         $200     |\n");//
				printf(" |                                 |\n");
				printf(" | ------------------------------- |\n");
				printf(" |                                 |\n");
				printf(" |  Montant de l'hypotheque $%4d  |\n", Proprietes[Joueures[i].position].prix/2+Proprietes[Joueures[i].position].prix*10/100);//
				printf(" |                                 |\n");
				printf(" | ------------------------------- |\n");
				printf(" |_________________________________|\n");

                    loyer(i,nJoueures);
                    goto menuJoueur;

			}

			else if ((Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Gare") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") == 0))//
			{

				printf("\n             Popriete            \n");
				printf(" ___________________________________\n");
				printf(" |                                  |\n");
				printf(" |%-35.35s|   * Propriete : %s", Proprietes[Joueures[i].position].Nom, Proprietes[Joueures[i].position].proprietaire);//
			if(Proprietes[Joueures[i].position].hypotheque== true){printf("\n |                                |   * Hypoteque        : OUI\n");}
          else {printf("\n |                                  |   * Hypoteque        : NON\n");}
				printf(" |couleur %-11.11sLe prix  $%4d |   * HOTEL        : %d\n", Proprietes[Joueures[i].position].Couleur, Proprietes[Joueures[i].position].prix, Proprietes[Joueures[i].position].nombreHotel);//
				printf(" | -------------------------------- |\n");
				printf(" |                                  |\n");
				printf(" | Si un services public appartient |\n");
				printf(" |  a un joueur, le loyer est egal  |\n");//
				printf(" |     a 4x le resultat des des.    |\n");
				printf(" |                                  |\n");//
				printf(" |                                  |\n");
				printf(" |    Si deux services public       |\n");
				printf(" | appartient a un joueur, le loyer |\n");//
				printf(" |est egal a 10x le resultat des des|\n");
				printf(" |                                  |\n");
				printf(" | -------------------------------- |\n");
				printf(" |                                  |\n");
				printf(" |  Montant de l'hypotheque $%4d   |\n", Proprietes[Joueures[i].position].prix/2+Proprietes[Joueures[i].position].prix*10/100);//
				printf(" |                                  |\n");
				printf(" | -------------------------------- |\n");
				printf(" |__________________________________|\n");

                    loyer(i,nJoueures);
                    goto menuJoueur;

			}

			else if (strcmp(Proprietes[Joueures[i].position].Nom, "CHANCE") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("tirer une carte CHANCE\n");//
				carteChance(i,nJoueures);
				fflush(stdin);//
				getchar();//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "Caisse de communaute") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("tirer une carte Caisse de communaute...\n");//
				carteCaissedeCommunaute(i,nJoueures);//
				fflush(stdin);//
				getchar();//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "TAXE DE LUXE") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Payer la TAXE DE LUXE M100.");//
				fflush(stdin);//
				getchar();//
				Joueures[i].compte -= 100;//
				printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "IMPOTS SUR LE REVENU") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Payer l'IMPOTS SUR LE REVENU M200.");//
				fflush(stdin);//
				getchar();//
				Joueures[i].compte -= 200;//
				printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
			}
			else if ((strcmp(Proprietes[Joueures[i].position].Nom, "PRISON - VISITEUR") == 0) && (strcmp(Proprietes[i].Nom, "PARKING GRATUIT") == 0))//
            {
                printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
            }
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "VA EN PRISON") == 0)//
			{
				Joueures[i].prison = true;
			}



			//Menu des Joueurs
			int option = 0;//
        menuJoueur://
			printf("\n Qu'est-ce que tu veux faire?\n");//
			printf("1 - Etat du jeu\n");//
			if (((strcmp(Proprietes[Joueures[i].position].proprietaire, "aucun proprietaire") == 0)&&(Proprietes[Joueures[i].position].prix != 0))||(Proprietes[Joueures[i].position].hypotheque == true))// en fonction des cases
			{
				printf("2 - Acheter une propriete\n");//
			}
			if (((strcmp(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom) != 0)&&(Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, "aucun proprietaire") != 0))||(Proprietes[Joueures[i].position].hypotheque== true))// en fonction des cases
			{
				printf("3 - Faire une offre\n");//
			}

			if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].prixMaison>0))
			{
				printf("4 - Construire une Maison\n");//
				printf("5 - Construire un Hotel\n");//


			}

			if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].nombreDeMaisons>0)&&(Proprietes[Joueures[i].position].nombreHotel>0))
			 {
			     printf("6 - Vendre des constructions\n");//
			 }
			if (strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)
            {
                printf("7 - Hypothequer des Propriete\n");//
            }

			printf("0 - Terminer le tour\n");//


			scanf("%d", &option);//
			switch (option)//
			{
			//1 - État du jeu
			case 1: etatduJeu(nJoueures);//
                    goto menuJoueur;//
				break;//

			//2 - Acheter une propriété
			case 2:
				if (((strcmp(Proprietes[Joueures[i].position].proprietaire, "aucun proprietaire") == 0)&&(Proprietes[Joueures[i].position].prix != 0))||(Proprietes[Joueures[i].position].hypotheque== true))// en fonction des cases
					{acheterPropriete(i);goto menuJoueur;}//
				else goto menuJoueur;//
				break;//

			//3 - Vente aux encheres une propriété
			case 3:
			    if (((strcmp(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom) != 0)&&(Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, "aucun proprietaire") != 0))||(Proprietes[Joueures[i].position].hypotheque== true))// en fonction des cases
                    {offre(i,nJoueures);goto menuJoueur;}//
                    goto menuJoueur;//
				break;//

			//4 - Construire une maison
			case 4:
			    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].prixMaison>0))
                    {construireMaison(i);goto menuJoueur;}//
                else goto menuJoueur;//
				break;//

			//5 - Construire un Hotel
			case 5:
			    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].prixMaison>0))
                    {construireHotel(i);goto menuJoueur;}//
                    goto menuJoueur;//
				break;//

			//6 - Vendre des constructions
			case 6:
			    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].nombreDeMaisons>0)&&(Proprietes[Joueures[i].position].nombreHotel>0))
                    {vendreConstruction(i);goto menuJoueur;}//
                 else goto menuJoueur;//
				break;//

			//7 - Hypothequer une propriété
			case 7:
			    if (strcmp(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom ) == 0)
                    {hypothequerPropriete(i);goto menuJoueur;}//
                else goto menuJoueur;//
				break;//

			//0 - Terminer le tour
			case 0://
				break;//

			//option Invalide
			default://
				printf("Erreur! Veuillez saisir une option valide : ");//
				fflush(stdin);//
				goto menuJoueur;//
				break;//
			}

			printf("\n\n\n");//
			fflush(stdin);//
			getchar();//
			system("cls");//
		}
		tour++;//
	} while (tour != 999);//

	system("pause");//
    return 0;//
}

