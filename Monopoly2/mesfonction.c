#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "mabiblio.h"


void initialiseTable()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "debut");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Boulevard de Belleville");//
	strcpy(Proprietes[1].Couleur, "Marron");//
	Proprietes[1].prix = 60;//
	Proprietes[1].loyer[0] = 2;//
	Proprietes[1].loyer[1] = 10;//
	Proprietes[1].loyer[2] = 30;//
	Proprietes[1].loyer[3] = 90;//
	Proprietes[1].loyer[4] = 160;//
	Proprietes[1].loyer[5] = 250;//
	Proprietes[1].nombreDeMaisons = 0;//
	Proprietes[1].nombreHotel = 0;//
	Proprietes[1].prixMaison =50;//
	Proprietes[1].hypotheque = false;//
	strcpy(Proprietes[1].proprietaire, "aucun proprietaire");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Caisse de communaute");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Interdit");

	//Case 3
	strcpy(Proprietes[3].Nom, "Rue Lecourbe");//
	strcpy(Proprietes[3].Couleur, "Marron");//
	Proprietes[3].prix = 60;//
	Proprietes[3].loyer[0] = 4;//
	Proprietes[3].loyer[1] = 20;//
	Proprietes[3].loyer[2] = 60;//
	Proprietes[3].loyer[3] = 180;//
	Proprietes[3].loyer[4] = 320;//
	Proprietes[3].loyer[5] = 450;//
	Proprietes[3].nombreDeMaisons = 0;//
	Proprietes[3].nombreHotel = 0;//
	Proprietes[3].prixMaison =50;//
	Proprietes[3].hypotheque = false;//
	strcpy(Proprietes[3].proprietaire, "aucun proprietaire");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "IMPOTS SUR LE REVENU");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Interdit");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Gare Montparnasse");//
	strcpy(Proprietes[5].Couleur, "Gare");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "aucun proprietaire");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Rue de Vaugirard");//
	strcpy(Proprietes[6].Couleur, "Bleu clair");//
	Proprietes[6].prix = 100;//
	Proprietes[6].loyer[0] = 6;//
	Proprietes[6].loyer[1] = 30;//
	Proprietes[6].loyer[2] = 90;//
	Proprietes[6].loyer[3] = 270;//
	Proprietes[6].loyer[4] = 400;//
	Proprietes[6].loyer[5] = 550;//
	Proprietes[6].nombreDeMaisons = 0;//
	Proprietes[6].nombreHotel = 0;//
	Proprietes[6].prixMaison =50;//
	Proprietes[6].hypotheque = false;//
	strcpy(Proprietes[6].proprietaire, "aucun proprietaire");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Interdit");

	//Case 8
	strcpy(Proprietes[8].Nom, "Rue de Courcelles");//
	strcpy(Proprietes[8].Couleur, "Bleu clair");//
	Proprietes[8].prix = 100;//
	Proprietes[8].loyer[0] = 6;//
	Proprietes[8].loyer[1] = 30;//
	Proprietes[8].loyer[2] = 90;//
	Proprietes[8].loyer[3] = 270;//
	Proprietes[8].loyer[4] = 400;//
	Proprietes[8].loyer[5] = 550;//
	Proprietes[8].nombreDeMaisons = 0;//
	Proprietes[8].nombreHotel = 0;//
	Proprietes[8].prixMaison =50;//
	Proprietes[8].hypotheque = false;//
	strcpy(Proprietes[8].proprietaire, "aucun proprietaire");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Avenue de la Republique");//
	strcpy(Proprietes[9].Couleur, "Bleu clair");//
	Proprietes[9].prix = 120;//
	Proprietes[9].loyer[0] = 8;//
	Proprietes[9].loyer[1] = 40;//
	Proprietes[9].loyer[2] = 100;//
	Proprietes[9].loyer[3] = 300;//
	Proprietes[9].loyer[4] = 450;//
	Proprietes[9].loyer[5] = 600;//
	Proprietes[9].nombreDeMaisons = 0;//
	Proprietes[9].nombreHotel = 0;//
	Proprietes[9].prixMaison =50;//
	Proprietes[9].hypotheque = false;//
	strcpy(Proprietes[9].proprietaire, "aucun proprietaire");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "PRISON - VISITEUR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Interdit");

	//Case 11
	strcpy(Proprietes[11].Nom, "Boulevard de la Villette");//
	strcpy(Proprietes[11].Couleur, "Rose");//
	Proprietes[11].prix = 140;//
	Proprietes[11].loyer[0] = 10;//
	Proprietes[11].loyer[1] = 50;//
	Proprietes[11].loyer[2] = 150;//
	Proprietes[11].loyer[3] = 450;//
	Proprietes[11].loyer[4] = 625;//
	Proprietes[11].loyer[5] = 750;//
	Proprietes[11].nombreDeMaisons = 0;//
	Proprietes[11].nombreHotel = 0;//
	Proprietes[11].prixMaison =100;//
	Proprietes[11].hypotheque = false;//
	strcpy(Proprietes[11].proprietaire, "aucun proprietaire");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Compangnie de distribution d'electricite");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "aucun proprietaire");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Avenue de Neuilly");//
	strcpy(Proprietes[13].Couleur, "Rose");//
	Proprietes[13].prix = 140;//
	Proprietes[13].loyer[0] = 10;//
	Proprietes[13].loyer[1] = 50;//
	Proprietes[13].loyer[2] = 150;//
	Proprietes[13].loyer[3] = 450;//
	Proprietes[13].loyer[4] = 625;//
	Proprietes[13].loyer[5] = 750;//
	Proprietes[13].nombreDeMaisons = 0;//
	Proprietes[13].nombreHotel = 0;//
	Proprietes[13].prixMaison =100;//
	Proprietes[13].hypotheque = false;//
	strcpy(Proprietes[13].proprietaire, "aucun proprietaire");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Rue de Paradis");//
	strcpy(Proprietes[14].Couleur, "Rose");//
	Proprietes[14].prix = 160;//
	Proprietes[14].loyer[0] = 12;//
	Proprietes[14].loyer[1] = 60;//
	Proprietes[14].loyer[2] = 180;//
	Proprietes[14].loyer[3] = 500;//
	Proprietes[14].loyer[4] = 700;//
	Proprietes[14].loyer[5] = 900;//
	Proprietes[14].nombreDeMaisons = 0;//
	Proprietes[14].nombreHotel = 0;//
	Proprietes[14].prixMaison =100;//
	Proprietes[14].hypotheque = false;//
	strcpy(Proprietes[14].proprietaire, "aucun proprietaire");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Gare de Lyon");//
	strcpy(Proprietes[15].Couleur, "Gare");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "aucun proprietaire");//

	//Case 16
	strcpy(Proprietes[16].Nom, "Avenue Mozart");//
	strcpy(Proprietes[16].Couleur, "Orange");//
	Proprietes[16].prix = 180;//
	Proprietes[16].loyer[0] = 14;//
	Proprietes[16].loyer[1] = 70;//
	Proprietes[16].loyer[2] = 200;//
	Proprietes[16].loyer[3] = 550;//
	Proprietes[16].loyer[4] = 750;//
	Proprietes[16].loyer[5] = 950;//
	Proprietes[16].nombreDeMaisons = 0;//
	Proprietes[16].nombreHotel = 0;//
	Proprietes[16].prixMaison =100;//
	Proprietes[16].hypotheque = false;//
	strcpy(Proprietes[16].proprietaire, "aucun proprietaire");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Caisse de communaute");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Interdit");

	//Case 18
	strcpy(Proprietes[18].Nom, "Boulevard Saint-Michel");//
	strcpy(Proprietes[18].Couleur, "Orange");//
	Proprietes[18].prix = 180;//
	Proprietes[18].loyer[0] = 14;//
	Proprietes[18].loyer[1] = 70;//
	Proprietes[18].loyer[2] = 200;//
	Proprietes[18].loyer[3] = 550;//
	Proprietes[18].loyer[4] = 750;//
	Proprietes[18].loyer[5] = 950;//
	Proprietes[18].nombreDeMaisons = 0;//
	Proprietes[18].nombreHotel = 0;//
	Proprietes[18].prixMaison =100;//
	Proprietes[18].hypotheque = false;//
	strcpy(Proprietes[18].proprietaire, "aucun proprietaire");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Place Pigalle ");//
	strcpy(Proprietes[19].Couleur, "Orange");//
	Proprietes[19].prix = 200;//
	Proprietes[19].loyer[0] = 16;//
	Proprietes[19].loyer[1] = 80;//
	Proprietes[19].loyer[2] = 220;//
	Proprietes[19].loyer[3] = 600;//
	Proprietes[19].loyer[4] = 800;//
	Proprietes[19].loyer[5] = 1000;//
	Proprietes[19].nombreDeMaisons = 0;//
	Proprietes[19].nombreHotel = 0;//
	Proprietes[19].prixMaison =100;//
	Proprietes[19].hypotheque = false;//
	strcpy(Proprietes[19].proprietaire, "aucun proprietaire");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "PARKING GRATUIT");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Interdit");

	//Case 21
	strcpy(Proprietes[21].Nom, "Avenue de Matignon");//
	strcpy(Proprietes[21].Couleur, "Rouge");//
	Proprietes[21].prix = 220;//
	Proprietes[21].loyer[0] = 18;//
	Proprietes[21].loyer[1] = 90;//
	Proprietes[21].loyer[2] = 250;//
	Proprietes[21].loyer[3] = 700;//
	Proprietes[21].loyer[4] = 875;//
	Proprietes[21].loyer[5] = 1050;//
	Proprietes[21].nombreDeMaisons = 0;//
	Proprietes[21].nombreHotel = 0;//
	Proprietes[21].prixMaison =150;//
	Proprietes[21].hypotheque = false;//
	strcpy(Proprietes[21].proprietaire, "aucun proprietaire");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Interdit");

	//Case 23
	strcpy(Proprietes[23].Nom, "Boulevard Malesherbes");//
	strcpy(Proprietes[23].Couleur, "Rouge");//
	Proprietes[23].prix = 220;//
	Proprietes[23].loyer[0] = 18;//
	Proprietes[23].loyer[1] = 90;//
	Proprietes[23].loyer[2] = 250;//
	Proprietes[23].loyer[3] = 700;//
	Proprietes[23].loyer[4] = 875;//
	Proprietes[23].loyer[5] = 1050;//
	Proprietes[23].nombreDeMaisons = 0;//
	Proprietes[23].nombreHotel = 0;//
	Proprietes[23].prixMaison =150;//
	Proprietes[23].hypotheque = false;//
	strcpy(Proprietes[23].proprietaire, "aucun proprietaire");//

	//Case 24
	strcpy(Proprietes[24].Nom, "Avenue Henri-Martin");//
	strcpy(Proprietes[24].Couleur, "Rouge");//
	Proprietes[24].prix = 240;//
	Proprietes[24].loyer[0] = 20;//
	Proprietes[24].loyer[1] = 100;//
	Proprietes[24].loyer[2] = 300;//
	Proprietes[24].loyer[3] = 750;//
	Proprietes[24].loyer[4] = 925;//
	Proprietes[24].loyer[5] = 1100;//
	Proprietes[24].nombreDeMaisons = 0;//
	Proprietes[24].nombreHotel = 0;//
	Proprietes[24].prixMaison =150;//
	Proprietes[24].hypotheque = false;//
	strcpy(Proprietes[24].proprietaire, "aucun proprietaire");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Gare du Nord");//
	strcpy(Proprietes[25].Couleur, "Gare");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "aucun proprietaire");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Faubourg Saint-Honore");//
	strcpy(Proprietes[26].Couleur, "Jaune");//
	Proprietes[26].prix = 260;//
	Proprietes[26].loyer[0] = 22;//
	Proprietes[26].loyer[1] = 110;//
	Proprietes[26].loyer[2] = 330;//
	Proprietes[26].loyer[3] = 800;//
	Proprietes[26].loyer[4] = 975;//
	Proprietes[26].loyer[5] = 1150;//
	Proprietes[26].nombreDeMaisons = 0;//
	Proprietes[26].nombreHotel = 0;//
	Proprietes[26].prixMaison =150;//
	Proprietes[26].hypotheque = false;//
	strcpy(Proprietes[26].proprietaire, "aucun proprietaire");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Place de la Bourse");//
	strcpy(Proprietes[27].Couleur, "Jaune");//
	Proprietes[27].prix = 260;//
	Proprietes[27].loyer[0] = 22;//
	Proprietes[27].loyer[1] = 110;//
	Proprietes[27].loyer[2] = 330;//
	Proprietes[27].loyer[3] = 800;//
	Proprietes[27].loyer[4] = 975;//
	Proprietes[27].loyer[5] = 1150;//
	Proprietes[27].nombreDeMaisons = 0;//
	Proprietes[27].nombreHotel = 0;//
	Proprietes[27].prixMaison =150;//
	Proprietes[27].hypotheque = false;//
	strcpy(Proprietes[27].proprietaire, "aucun proprietaire");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Compagnie de distribution des eaux ");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "aucun proprietaire");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Rue la Fayette");//
	strcpy(Proprietes[29].Couleur, "Jaune");//
	Proprietes[29].prix = 280;//
	Proprietes[29].loyer[0] = 24;//
	Proprietes[29].loyer[1] = 120;//
	Proprietes[29].loyer[2] = 360;//
	Proprietes[29].loyer[3] = 850;//
	Proprietes[29].loyer[4] = 1050;//
	Proprietes[29].loyer[5] = 1200;//
	Proprietes[29].nombreDeMaisons = 0;//
	Proprietes[29].nombreHotel = 0;//
	Proprietes[29].prixMaison =150;//
	Proprietes[29].hypotheque = false;//
	strcpy(Proprietes[29].proprietaire, "aucun proprietaire");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "VA EN PRISON");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Interdit");

	//Case 31
	strcpy(Proprietes[31].Nom, "Avenue de Breteuil");//
	strcpy(Proprietes[31].Couleur, "Vert");//
	Proprietes[31].prix = 300;//
	Proprietes[31].loyer[0] = 26;//
	Proprietes[31].loyer[1] = 130;//
	Proprietes[31].loyer[2] = 390;//
	Proprietes[31].loyer[3] = 900;//
	Proprietes[31].loyer[4] = 1100;//
	Proprietes[31].loyer[5] = 1275;//
	Proprietes[31].nombreDeMaisons = 0;//
	Proprietes[31].nombreHotel = 0;//
	Proprietes[31].prixMaison =200;//
	Proprietes[31].hypotheque = false;//
	strcpy(Proprietes[31].proprietaire, "aucun proprietaire");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Avenue Foch");//
	strcpy(Proprietes[32].Couleur, "Vert");//
	Proprietes[32].prix = 300;//
	Proprietes[32].loyer[0] = 26;//
	Proprietes[32].loyer[1] = 130;//
	Proprietes[32].loyer[2] = 390;//
	Proprietes[32].loyer[3] = 900;//
	Proprietes[32].loyer[4] = 1100;//
	Proprietes[32].loyer[5] = 1275;//
	Proprietes[32].nombreDeMaisons = 0;//
	Proprietes[32].nombreHotel = 0;//
	Proprietes[32].prixMaison =200;//
	Proprietes[32].hypotheque = false;//
	strcpy(Proprietes[32].proprietaire, "aucun proprietaire");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Caisse de communaute");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Interdit");

	//Case 34
	strcpy(Proprietes[34].Nom, "Boulevard des Capucines");//
	strcpy(Proprietes[34].Couleur, "Vert");//
	Proprietes[34].prix = 320;//
	Proprietes[34].loyer[0] = 28;//
	Proprietes[34].loyer[1] = 150;//
	Proprietes[34].loyer[2] = 450;//
	Proprietes[34].loyer[3] = 1000;//
	Proprietes[34].loyer[4] = 1200;//
	Proprietes[34].loyer[5] = 1400;//
	Proprietes[34].nombreDeMaisons = 0;//
	Proprietes[34].nombreHotel = 0;//
	Proprietes[34].prixMaison =200;//
	Proprietes[34].hypotheque = false;//
	strcpy(Proprietes[34].proprietaire, "aucun proprietaire");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Gare Saint-Lazare");//
	strcpy(Proprietes[35].Couleur, "Gare");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "aucun proprietaire");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Interdit");

	//Case 37
	strcpy(Proprietes[37].Nom, "Avenue des Champs-Elysees");//
	strcpy(Proprietes[37].Couleur, "Bleu Fonce");//
	Proprietes[37].prix = 350;//
	Proprietes[37].loyer[0] = 35;//
	Proprietes[37].loyer[1] = 175;//
	Proprietes[37].loyer[2] = 500;//
	Proprietes[37].loyer[3] = 1100;//
	Proprietes[37].loyer[4] = 1300;//
	Proprietes[37].loyer[5] = 1500;//
	Proprietes[37].nombreDeMaisons = 0;//
	Proprietes[37].nombreHotel = 0;//
	Proprietes[37].prixMaison =200;//
	Proprietes[37].hypotheque = false;//
	strcpy(Proprietes[37].proprietaire, "aucun proprietaire");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "TAXE DE LUXE");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Interdit");

	//Case 39
	strcpy(Proprietes[39].Nom, "Rue de la Paix");//
	strcpy(Proprietes[39].Couleur, "Bleu Fonce");//
	Proprietes[39].prix = 400;//
	Proprietes[39].loyer[0] = 50;//
	Proprietes[39].loyer[1] = 200;//
	Proprietes[39].loyer[2] = 600;//
	Proprietes[39].loyer[3] = 1400;//
	Proprietes[39].loyer[4] = 1700;//
	Proprietes[39].loyer[5] = 2000;//
	Proprietes[39].nombreDeMaisons = 0;//
	Proprietes[39].nombreHotel = 0;//
	Proprietes[39].prixMaison =200;//
	Proprietes[39].hypotheque = false;//
	strcpy(Proprietes[39].proprietaire, "aucun proprietaire");//
}

void initialiseTable1()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "debut");
	Proprietes[0].prix = 0;

	//Case 1
	fflush(stdin);//
	printf("Couleur : Marron\n");//
	printf("Quel est le nom de la 1 propriete: ");//
	scanf("%s",Proprietes[1].Nom);
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[1].Couleur, "Marron");//
	Proprietes[1].prix = 60;//
	Proprietes[1].loyer[0] = 2;//
	Proprietes[1].loyer[1] = 10;//
	Proprietes[1].loyer[2] = 30;//
	Proprietes[1].loyer[3] = 90;//
	Proprietes[1].loyer[4] = 160;//
	Proprietes[1].loyer[5] = 250;//
	Proprietes[1].nombreDeMaisons = 0;//
	Proprietes[1].nombreHotel = 0;//
	Proprietes[1].prixMaison =50;//
	Proprietes[1].hypotheque = false;//
	strcpy(Proprietes[1].proprietaire, "aucun proprietaire");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Caisse de communaute");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Interdit");

	//Case 3
	printf("Couleur : Marron\n");//
	printf("Quel est le nom de la 2 propriete: ");//
	scanf("%s", Proprietes[3].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[3].Couleur, "Marron");//
	Proprietes[3].prix = 60;//
	Proprietes[3].loyer[0] = 4;//
	Proprietes[3].loyer[1] = 20;//
	Proprietes[3].loyer[2] = 60;//
	Proprietes[3].loyer[3] = 180;//
	Proprietes[3].loyer[4] = 320;//
	Proprietes[3].loyer[5] = 450;//
	Proprietes[3].nombreDeMaisons = 0;//
	Proprietes[3].nombreHotel = 0;//
	Proprietes[3].prixMaison =50;//
	Proprietes[3].hypotheque = false;//
	strcpy(Proprietes[3].proprietaire, "aucun proprietaire");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "IMPOTS SUR LE REVENU");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Interdit");

	//Case 5 - GARE
	printf("Couleur : Gare\n");//
	printf("Quel est le nom de la 1 gare: ");//
	scanf("%s", Proprietes[5].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[5].Couleur, "Gare");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "aucun proprietaire");//

	//Case 6
	printf("Couleur : Bleu clair\n");//
	printf("Quel est le nom de la 3 propriete: ");//
	scanf("%s", Proprietes[6].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[6].Couleur, "Bleu clair");//
	Proprietes[6].prix = 100;//
	Proprietes[6].loyer[0] = 6;//
	Proprietes[6].loyer[1] = 30;//
	Proprietes[6].loyer[2] = 90;//
	Proprietes[6].loyer[3] = 270;//
	Proprietes[6].loyer[4] = 400;//
	Proprietes[6].loyer[5] = 550;//
	Proprietes[6].nombreDeMaisons = 0;//
	Proprietes[6].nombreHotel = 0;//
	Proprietes[6].prixMaison =50;//
	Proprietes[6].hypotheque = false;//
	strcpy(Proprietes[6].proprietaire, "aucun proprietaire");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Interdit");

	//Case 8
	printf("Couleur : Bleu clair\n");//
	printf("Quel est le nom de la 4 propriete: ");//
	scanf("%s", Proprietes[8].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[8].Couleur, "Bleu clair");//
	Proprietes[8].prix = 100;//
	Proprietes[8].loyer[0] = 6;//
	Proprietes[8].loyer[1] = 30;//
	Proprietes[8].loyer[2] = 90;//
	Proprietes[8].loyer[3] = 270;//
	Proprietes[8].loyer[4] = 400;//
	Proprietes[8].loyer[5] = 550;//
	Proprietes[8].nombreDeMaisons = 0;//
	Proprietes[8].nombreHotel = 0;//
	Proprietes[8].prixMaison =50;//
	Proprietes[8].hypotheque = false;//
	strcpy(Proprietes[8].proprietaire, "aucun proprietaire");//

	//Case 9
	printf("Couleur : Bleu clair\n");//
	printf("Quel est le nom de la 5 propriete: ");//
	scanf("%s", Proprietes[9].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[9].Couleur, "Bleu clair");//
	Proprietes[9].prix = 120;//
	Proprietes[9].loyer[0] = 8;//
	Proprietes[9].loyer[1] = 40;//
	Proprietes[9].loyer[2] = 100;//
	Proprietes[9].loyer[3] = 300;//
	Proprietes[9].loyer[4] = 450;//
	Proprietes[9].loyer[5] = 600;//
	Proprietes[9].nombreDeMaisons = 0;//
	Proprietes[9].nombreHotel = 0;//
	Proprietes[9].prixMaison =50;//
	Proprietes[9].hypotheque = false;//
	strcpy(Proprietes[9].proprietaire, "aucun proprietaire");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "PRISON - VISITEUR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Interdit");

	//Case 11
	printf("Couleur : Rose\n");//
	printf("Quel est le nom de la 6 propriete: ");//
	scanf("%s", Proprietes[11].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[11].Couleur, "Rose");//
	Proprietes[11].prix = 140;//
	Proprietes[11].loyer[0] = 10;//
	Proprietes[11].loyer[1] = 50;//
	Proprietes[11].loyer[2] = 150;//
	Proprietes[11].loyer[3] = 450;//
	Proprietes[11].loyer[4] = 625;//
	Proprietes[11].loyer[5] = 750;//
	Proprietes[11].nombreDeMaisons = 0;//
	Proprietes[11].nombreHotel = 0;//
	Proprietes[11].prixMaison =100;//
	Proprietes[11].hypotheque = false;//
	strcpy(Proprietes[11].proprietaire, "aucun proprietaire");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	printf("Couleur : Services\n");//
	printf("Quel est le nom du 1 Services: ");//
	scanf("%s", Proprietes[12].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "aucun proprietaire");//

	//Case 13
	printf("Couleur : Rose\n");//
	printf("Quel est le nom de la 7 propriete: ");//
	scanf("%s", Proprietes[13].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[13].Couleur, "Rose");//
	Proprietes[13].prix = 140;//
	Proprietes[13].loyer[0] = 10;//
	Proprietes[13].loyer[1] = 50;//
	Proprietes[13].loyer[2] = 150;//
	Proprietes[13].loyer[3] = 450;//
	Proprietes[13].loyer[4] = 625;//
	Proprietes[13].loyer[5] = 750;//
	Proprietes[13].nombreDeMaisons = 0;//
	Proprietes[13].nombreHotel = 0;//
	Proprietes[13].prixMaison =100;//
	Proprietes[13].hypotheque = false;//
	strcpy(Proprietes[13].proprietaire, "aucun proprietaire");//

	//Case 14
	printf("Couleur : Rose\n");//
	printf("Quel est le nom de la 8 propriete: ");//
	scanf("%s", Proprietes[14].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[14].Couleur, "Rose");//
	Proprietes[14].prix = 160;//
	Proprietes[14].loyer[0] = 12;//
	Proprietes[14].loyer[1] = 60;//
	Proprietes[14].loyer[2] = 180;//
	Proprietes[14].loyer[3] = 500;//
	Proprietes[14].loyer[4] = 700;//
	Proprietes[14].loyer[5] = 900;//
	Proprietes[14].nombreDeMaisons = 0;//
	Proprietes[14].nombreHotel = 0;//
	Proprietes[14].prixMaison =100;//
	Proprietes[14].hypotheque = false;//
	strcpy(Proprietes[14].proprietaire, "aucun proprietaire");//

	//Case 15 - GARE
	printf("Couleur : Gare\n");//
	printf("Quel est le nom de la 2 gare: ");//
	scanf("%s", Proprietes[15].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[15].Couleur, "Gare");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "aucun proprietaire");//

	//Case 16
	printf("Couleur : Orange\n");//
	printf("Quel est le nom de la 9 propriete: ");//
	scanf("%s", Proprietes[16].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[16].Couleur, "Orange");//
	Proprietes[16].prix = 180;//
	Proprietes[16].loyer[0] = 14;//
	Proprietes[16].loyer[1] = 70;//
	Proprietes[16].loyer[2] = 200;//
	Proprietes[16].loyer[3] = 550;//
	Proprietes[16].loyer[4] = 750;//
	Proprietes[16].loyer[5] = 950;//
	Proprietes[16].nombreDeMaisons = 0;//
	Proprietes[16].nombreHotel = 0;//
	Proprietes[16].prixMaison =100;//
	Proprietes[16].hypotheque = false;//
	strcpy(Proprietes[16].proprietaire, "aucun proprietaire");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Caisse de communaute");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Interdit");

	//Case 18
	printf("Couleur : Orange\n");//
	printf("Quel est le nom de la 10 propriete: ");//
	scanf("%s", Proprietes[18].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[18].Couleur, "Orange");//
	Proprietes[18].prix = 180;//
	Proprietes[18].loyer[0] = 14;//
	Proprietes[18].loyer[1] = 70;//
	Proprietes[18].loyer[2] = 200;//
	Proprietes[18].loyer[3] = 550;//
	Proprietes[18].loyer[4] = 750;//
	Proprietes[18].loyer[5] = 950;//
	Proprietes[18].nombreDeMaisons = 0;//
	Proprietes[18].nombreHotel = 0;//
	Proprietes[18].prixMaison =100;//
	Proprietes[18].hypotheque = false;//
	strcpy(Proprietes[18].proprietaire, "aucun proprietaire");//

	//Case 19
	printf("Couleur : Orange\n");//
	printf("Quel est le nom de la 11 propriete: ");//
	scanf("%s", Proprietes[19].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[19].Couleur, "Orange");//
	Proprietes[19].prix = 200;//
	Proprietes[19].loyer[0] = 16;//
	Proprietes[19].loyer[1] = 80;//
	Proprietes[19].loyer[2] = 220;//
	Proprietes[19].loyer[3] = 600;//
	Proprietes[19].loyer[4] = 800;//
	Proprietes[19].loyer[5] = 1000;//
	Proprietes[19].nombreDeMaisons = 0;//
	Proprietes[19].nombreHotel = 0;//
	Proprietes[19].prixMaison =100;//
	Proprietes[19].hypotheque = false;//
	strcpy(Proprietes[19].proprietaire, "aucun proprietaire");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "PARKING GRATUIT");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Interdit");

	//Case 21
	printf("Couleur : Rouge\n");//
	printf("Quel est le nom de la 12 propriete: ");//
	scanf("%s", Proprietes[21].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[21].Couleur, "Rouge");//
	Proprietes[21].prix = 220;//
	Proprietes[21].loyer[0] = 18;//
	Proprietes[21].loyer[1] = 90;//
	Proprietes[21].loyer[2] = 250;//
	Proprietes[21].loyer[3] = 700;//
	Proprietes[21].loyer[4] = 875;//
	Proprietes[21].loyer[5] = 1050;//
	Proprietes[21].nombreDeMaisons = 0;//
	Proprietes[21].nombreHotel = 0;//
	Proprietes[21].prixMaison =150;//
	Proprietes[21].hypotheque = false;//
	strcpy(Proprietes[21].proprietaire, "aucun proprietaire");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Interdit");

	//Case 23
	printf("Couleur : Rouge\n");//
	printf("Quel est le nom de la 13 propriete: ");//
	scanf("%s", Proprietes[23].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[23].Couleur, "Rouge");//
	Proprietes[23].prix = 220;//
	Proprietes[23].loyer[0] = 18;//
	Proprietes[23].loyer[1] = 90;//
	Proprietes[23].loyer[2] = 250;//
	Proprietes[23].loyer[3] = 700;//
	Proprietes[23].loyer[4] = 875;//
	Proprietes[23].loyer[5] = 1050;//
	Proprietes[23].nombreDeMaisons = 0;//
	Proprietes[23].nombreHotel = 0;//
	Proprietes[23].prixMaison =150;//
	Proprietes[23].hypotheque = false;//
	strcpy(Proprietes[23].proprietaire, "aucun proprietaire");//

	//Case 24
	printf("Couleur : Rouge\n");//
	printf("Quel est le nom de la 14 propriete: ");//
	scanf("%s", Proprietes[24].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[24].Couleur, "Rouge");//
	Proprietes[24].prix = 240;//
	Proprietes[24].loyer[0] = 20;//
	Proprietes[24].loyer[1] = 100;//
	Proprietes[24].loyer[2] = 300;//
	Proprietes[24].loyer[3] = 750;//
	Proprietes[24].loyer[4] = 925;//
	Proprietes[24].loyer[5] = 1100;//
	Proprietes[24].nombreDeMaisons = 0;//
	Proprietes[24].nombreHotel = 0;//
	Proprietes[24].prixMaison =150;//
	Proprietes[24].hypotheque = false;//
	strcpy(Proprietes[24].proprietaire, "aucun proprietaire");//

	//Case 25 - GARE
	printf("Couleur : Gare\n");//
	printf("Quel est le nom de la 3 propriete: ");//
	scanf("%s", Proprietes[25].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[25].Couleur, "Gare");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "aucun proprietaire");//

	//Case 26
	printf("Couleur : Jaune\n");//
	printf("Quel est le nom de la 15 propriete: ");//
	scanf("%s", Proprietes[26].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[26].Couleur, "Jaune");//
	Proprietes[26].prix = 260;//
	Proprietes[26].loyer[0] = 22;//
	Proprietes[26].loyer[1] = 110;//
	Proprietes[26].loyer[2] = 330;//
	Proprietes[26].loyer[3] = 800;//
	Proprietes[26].loyer[4] = 975;//
	Proprietes[26].loyer[5] = 1150;//
	Proprietes[26].nombreDeMaisons = 0;//
	Proprietes[26].nombreHotel = 0;//
	Proprietes[26].prixMaison =150;//
	Proprietes[26].hypotheque = false;//
	strcpy(Proprietes[26].proprietaire, "aucun proprietaire");//

	//Case 27
	printf("Couleur : Jaune\n");//
	printf("Quel est le nom de la 16 propriete: ");//
	scanf("%s", Proprietes[27].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[27].Couleur, "Jaune");//
	Proprietes[27].prix = 260;//
	Proprietes[27].loyer[0] = 22;//
	Proprietes[27].loyer[1] = 110;//
	Proprietes[27].loyer[2] = 330;//
	Proprietes[27].loyer[3] = 800;//
	Proprietes[27].loyer[4] = 975;//
	Proprietes[27].loyer[5] = 1150;//
	Proprietes[27].nombreDeMaisons = 0;//
	Proprietes[27].nombreHotel = 0;//
	Proprietes[27].prixMaison =150;//
	Proprietes[27].hypotheque = false;//
	strcpy(Proprietes[27].proprietaire, "aucun proprietaire");//

	//Case 28 - COMPAGNIE DE L'EAU
	printf("Couleur : Services\n");//
	printf("Quel est le nom de la 2 service: ");//
	scanf("%s", Proprietes[28].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "aucun proprietaire");//

	//Case 29
	printf("Couleur : Jaune\n");//
	printf("Quel est le nom de la 17 propriete: ");//
	scanf("%s", Proprietes[29].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[29].Couleur, "Jaune");//
	Proprietes[29].prix = 280;//
	Proprietes[29].loyer[0] = 24;//
	Proprietes[29].loyer[1] = 120;//
	Proprietes[29].loyer[2] = 360;//
	Proprietes[29].loyer[3] = 850;//
	Proprietes[29].loyer[4] = 1050;//
	Proprietes[29].loyer[5] = 1200;//
	Proprietes[29].nombreDeMaisons = 0;//
	Proprietes[29].nombreHotel = 0;//
	Proprietes[29].prixMaison =150;//
	Proprietes[29].hypotheque = false;//
	strcpy(Proprietes[29].proprietaire, "aucun proprietaire");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "VA EN PRISON");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Interdit");

	//Case 31
	printf("Couleur : Vert\n");//
	printf("Quel est le nom de la 18 propriete: ");//
	scanf("%s", Proprietes[31].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[31].Couleur, "Vert");//
	Proprietes[31].prix = 300;//
	Proprietes[31].loyer[0] = 26;//
	Proprietes[31].loyer[1] = 130;//
	Proprietes[31].loyer[2] = 390;//
	Proprietes[31].loyer[3] = 900;//
	Proprietes[31].loyer[4] = 1100;//
	Proprietes[31].loyer[5] = 1275;//
	Proprietes[31].nombreDeMaisons = 0;//
	Proprietes[31].nombreHotel = 0;//
	Proprietes[31].prixMaison =200;//
	Proprietes[31].hypotheque = false;//
	strcpy(Proprietes[31].proprietaire, "aucun proprietaire");//

	//Case 32
	printf("Couleur : Vert\n");//
	printf("Quel est le nom de la 19 propriete: ");//
	scanf("%s", Proprietes[32].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[32].Couleur, "Vert");//
	Proprietes[32].prix = 300;//
	Proprietes[32].loyer[0] = 26;//
	Proprietes[32].loyer[1] = 130;//
	Proprietes[32].loyer[2] = 390;//
	Proprietes[32].loyer[3] = 900;//
	Proprietes[32].loyer[4] = 1100;//
	Proprietes[32].loyer[5] = 1275;//
	Proprietes[32].nombreDeMaisons = 0;//
	Proprietes[32].nombreHotel = 0;//
	Proprietes[32].prixMaison =200;//
	Proprietes[32].hypotheque = false;//
	strcpy(Proprietes[32].proprietaire, "aucun proprietaire");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Caisse de communaute");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Interdit");

	//Case 34
	printf("Couleur : Vert\n");//
	printf("Quel est le nom de la 20 propriete: ");//
	scanf("%s", Proprietes[34].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[34].Couleur, "Vert");//
	Proprietes[34].prix = 320;//
	Proprietes[34].loyer[0] = 28;//
	Proprietes[34].loyer[1] = 150;//
	Proprietes[34].loyer[2] = 450;//
	Proprietes[34].loyer[3] = 1000;//
	Proprietes[34].loyer[4] = 1200;//
	Proprietes[34].loyer[5] = 1400;//
	Proprietes[34].nombreDeMaisons = 0;//
	Proprietes[34].nombreHotel = 0;//
	Proprietes[34].prixMaison =200;//
	Proprietes[34].hypotheque = false;//
	strcpy(Proprietes[34].proprietaire, "aucun proprietaire");//

	//Case 35 - GARE
	printf("Couleur : Gare\n");//
	printf("Quel est le nom de la 4 gare: ");//
	scanf("%s", Proprietes[35].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[35].Couleur, "Gare");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "aucun proprietaire");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Interdit");

	//Case 37
	printf("Couleur : Bleu Fonce\n");//
	printf("Quel est le nom de la 21 propriete: ");//
	scanf("%s", Proprietes[37].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[37].Couleur, "Bleu Fonce");//
	Proprietes[37].prix = 350;//
	Proprietes[37].loyer[0] = 35;//
	Proprietes[37].loyer[1] = 175;//
	Proprietes[37].loyer[2] = 500;//
	Proprietes[37].loyer[3] = 1100;//
	Proprietes[37].loyer[4] = 1300;//
	Proprietes[37].loyer[5] = 1500;//
	Proprietes[37].nombreDeMaisons = 0;//
	Proprietes[37].nombreHotel = 0;//
	Proprietes[37].prixMaison =200;//
	Proprietes[37].hypotheque = false;//
	strcpy(Proprietes[37].proprietaire, "aucun proprietaire");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "TAXE DE LUXE");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Interdit");

	//Case 39
	printf("Couleur : Bleu Fonce\n");//
	printf("Quel est le nom de la 22 propriete: ");//
	scanf("%s", Proprietes[39].Nom );
	fflush(stdin);printf("\n");//
	strcpy(Proprietes[39].Couleur, "Bleu Fonce");//
	Proprietes[39].prix = 400;//
	Proprietes[39].loyer[0] = 50;//
	Proprietes[39].loyer[1] = 200;//
	Proprietes[39].loyer[2] = 600;//
	Proprietes[39].loyer[3] = 1400;//
	Proprietes[39].loyer[4] = 1700;//
	Proprietes[39].loyer[5] = 2000;//
	Proprietes[39].nombreDeMaisons = 0;//
	Proprietes[39].nombreHotel = 0;//
	Proprietes[39].prixMaison =200;//
	Proprietes[39].hypotheque = false;//
	strcpy(Proprietes[39].proprietaire, "aucun proprietaire");//
}

void initialiseTable2()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "debut");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Vine street");//
	strcpy(Proprietes[1].Couleur, "Marron");//
	Proprietes[1].prix = 60;//
	Proprietes[1].loyer[0] = 2;//
	Proprietes[1].loyer[1] = 10;//
	Proprietes[1].loyer[2] = 30;//
	Proprietes[1].loyer[3] = 90;//
	Proprietes[1].loyer[4] = 160;//
	Proprietes[1].loyer[5] = 250;//
	Proprietes[1].nombreDeMaisons = 0;//
	Proprietes[1].nombreHotel = 0;//
	Proprietes[1].prixMaison =50;//
	Proprietes[1].hypotheque = false;//
	strcpy(Proprietes[1].proprietaire, "aucun proprietaire");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Caisse de communaute");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Interdit");

	//Case 3
	strcpy(Proprietes[3].Nom, "Coventry street");//
	strcpy(Proprietes[3].Couleur, "Marron");//
	Proprietes[3].prix = 60;//
	Proprietes[3].loyer[0] = 4;//
	Proprietes[3].loyer[1] = 20;//
	Proprietes[3].loyer[2] = 60;//
	Proprietes[3].loyer[3] = 180;//
	Proprietes[3].loyer[4] = 320;//
	Proprietes[3].loyer[5] = 450;//
	Proprietes[3].nombreDeMaisons = 0;//
	Proprietes[3].nombreHotel = 0;//
	Proprietes[3].prixMaison =50;//
	Proprietes[3].hypotheque = false;//
	strcpy(Proprietes[3].proprietaire, "aucun proprietaire");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "IMPOTS SUR LE REVENU");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Interdit");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Marylebone Station");//
	strcpy(Proprietes[5].Couleur, "Gare");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "aucun proprietaire");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Leicester square");//
	strcpy(Proprietes[6].Couleur, "Bleu clair");//
	Proprietes[6].prix = 100;//
	Proprietes[6].loyer[0] = 6;//
	Proprietes[6].loyer[1] = 30;//
	Proprietes[6].loyer[2] = 90;//
	Proprietes[6].loyer[3] = 270;//
	Proprietes[6].loyer[4] = 400;//
	Proprietes[6].loyer[5] = 550;//
	Proprietes[6].nombreDeMaisons = 0;//
	Proprietes[6].nombreHotel = 0;//
	Proprietes[6].prixMaison =50;//
	Proprietes[6].hypotheque = false;//
	strcpy(Proprietes[6].proprietaire, "aucun proprietaire");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Interdit");

	//Case 8
	strcpy(Proprietes[8].Nom, "Bow street");//
	strcpy(Proprietes[8].Couleur, "Bleu clair");//
	Proprietes[8].prix = 100;//
	Proprietes[8].loyer[0] = 6;//
	Proprietes[8].loyer[1] = 30;//
	Proprietes[8].loyer[2] = 90;//
	Proprietes[8].loyer[3] = 270;//
	Proprietes[8].loyer[4] = 400;//
	Proprietes[8].loyer[5] = 550;//
	Proprietes[8].nombreDeMaisons = 0;//
	Proprietes[8].nombreHotel = 0;//
	Proprietes[8].prixMaison =50;//
	Proprietes[8].hypotheque = false;//
	strcpy(Proprietes[8].proprietaire, "aucun proprietaire");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Whitechapel road");//
	strcpy(Proprietes[9].Couleur, "Bleu clair");//
	Proprietes[9].prix = 120;//
	Proprietes[9].loyer[0] = 8;//
	Proprietes[9].loyer[1] = 40;//
	Proprietes[9].loyer[2] = 100;//
	Proprietes[9].loyer[3] = 300;//
	Proprietes[9].loyer[4] = 450;//
	Proprietes[9].loyer[5] = 600;//
	Proprietes[9].nombreDeMaisons = 0;//
	Proprietes[9].nombreHotel = 0;//
	Proprietes[9].prixMaison =50;//
	Proprietes[9].hypotheque = false;//
	strcpy(Proprietes[9].proprietaire, "aucun proprietaire");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "PRISON - VISITEUR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Interdit");

	//Case 11
	strcpy(Proprietes[11].Nom, "The angel, islington");//
	strcpy(Proprietes[11].Couleur, "Rose");//
	Proprietes[11].prix = 140;//
	Proprietes[11].loyer[0] = 10;//
	Proprietes[11].loyer[1] = 50;//
	Proprietes[11].loyer[2] = 150;//
	Proprietes[11].loyer[3] = 450;//
	Proprietes[11].loyer[4] = 625;//
	Proprietes[11].loyer[5] = 750;//
	Proprietes[11].nombreDeMaisons = 0;//
	Proprietes[11].nombreHotel = 0;//
	Proprietes[11].prixMaison =100;//
	Proprietes[11].hypotheque = false;//
	strcpy(Proprietes[11].proprietaire, "aucun proprietaire");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Compangnie de distribution d'electricite");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "aucun proprietaire");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Trafalgar square");//
	strcpy(Proprietes[13].Couleur, "Rose");//
	Proprietes[13].prix = 140;//
	Proprietes[13].loyer[0] = 10;//
	Proprietes[13].loyer[1] = 50;//
	Proprietes[13].loyer[2] = 150;//
	Proprietes[13].loyer[3] = 450;//
	Proprietes[13].loyer[4] = 625;//
	Proprietes[13].loyer[5] = 750;//
	Proprietes[13].nombreDeMaisons = 0;//
	Proprietes[13].nombreHotel = 0;//
	Proprietes[13].prixMaison =100;//
	Proprietes[13].hypotheque = false;//
	strcpy(Proprietes[13].proprietaire, "aucun proprietaire");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Northumrl'd avenue");//
	strcpy(Proprietes[14].Couleur, "Rose");//
	Proprietes[14].prix = 160;//
	Proprietes[14].loyer[0] = 12;//
	Proprietes[14].loyer[1] = 60;//
	Proprietes[14].loyer[2] = 180;//
	Proprietes[14].loyer[3] = 500;//
	Proprietes[14].loyer[4] = 700;//
	Proprietes[14].loyer[5] = 900;//
	Proprietes[14].nombreDeMaisons = 0;//
	Proprietes[14].nombreHotel = 0;//
	Proprietes[14].prixMaison =100;//
	Proprietes[14].hypotheque = false;//
	strcpy(Proprietes[14].proprietaire, "aucun proprietaire");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Fenchurch St.Station");//
	strcpy(Proprietes[15].Couleur, "Gare");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "aucun proprietaire");//

	//Case 16
	strcpy(Proprietes[16].Nom, "M'borough street");//
	strcpy(Proprietes[16].Couleur, "Orange");//
	Proprietes[16].prix = 180;//
	Proprietes[16].loyer[0] = 14;//
	Proprietes[16].loyer[1] = 70;//
	Proprietes[16].loyer[2] = 200;//
	Proprietes[16].loyer[3] = 550;//
	Proprietes[16].loyer[4] = 750;//
	Proprietes[16].loyer[5] = 950;//
	Proprietes[16].nombreDeMaisons = 0;//
	Proprietes[16].nombreHotel = 0;//
	Proprietes[16].prixMaison =100;//
	Proprietes[16].hypotheque = false;//
	strcpy(Proprietes[16].proprietaire, "aucun proprietaire");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Caisse de communaute");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Interdit");

	//Case 18
	strcpy(Proprietes[18].Nom, "Fleet street");//
	strcpy(Proprietes[18].Couleur, "Orange");//
	Proprietes[18].prix = 180;//
	Proprietes[18].loyer[0] = 14;//
	Proprietes[18].loyer[1] = 70;//
	Proprietes[18].loyer[2] = 200;//
	Proprietes[18].loyer[3] = 550;//
	Proprietes[18].loyer[4] = 750;//
	Proprietes[18].loyer[5] = 950;//
	Proprietes[18].nombreDeMaisons = 0;//
	Proprietes[18].nombreHotel = 0;//
	Proprietes[18].prixMaison =100;//
	Proprietes[18].hypotheque = false;//
	strcpy(Proprietes[18].proprietaire, "aucun proprietaire");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Old kent road");//
	strcpy(Proprietes[19].Couleur, "Orange");//
	Proprietes[19].prix = 200;//
	Proprietes[19].loyer[0] = 16;//
	Proprietes[19].loyer[1] = 80;//
	Proprietes[19].loyer[2] = 220;//
	Proprietes[19].loyer[3] = 600;//
	Proprietes[19].loyer[4] = 800;//
	Proprietes[19].loyer[5] = 1000;//
	Proprietes[19].nombreDeMaisons = 0;//
	Proprietes[19].nombreHotel = 0;//
	Proprietes[19].prixMaison =100;//
	Proprietes[19].hypotheque = false;//
	strcpy(Proprietes[19].proprietaire, "aucun proprietaire");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "PARKING GRATUIT");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Interdit");

	//Case 21
	strcpy(Proprietes[21].Nom, "Whitehall");//
	strcpy(Proprietes[21].Couleur, "Rouge");//
	Proprietes[21].prix = 220;//
	Proprietes[21].loyer[0] = 18;//
	Proprietes[21].loyer[1] = 90;//
	Proprietes[21].loyer[2] = 250;//
	Proprietes[21].loyer[3] = 700;//
	Proprietes[21].loyer[4] = 875;//
	Proprietes[21].loyer[5] = 1050;//
	Proprietes[21].nombreDeMaisons = 0;//
	Proprietes[21].nombreHotel = 0;//
	Proprietes[21].prixMaison =150;//
	Proprietes[21].hypotheque = false;//
	strcpy(Proprietes[21].proprietaire, "aucun proprietaire");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Interdit");

	//Case 23
	strcpy(Proprietes[23].Nom, "Pentonville road");//
	strcpy(Proprietes[23].Couleur, "Rouge");//
	Proprietes[23].prix = 220;//
	Proprietes[23].loyer[0] = 18;//
	Proprietes[23].loyer[1] = 90;//
	Proprietes[23].loyer[2] = 250;//
	Proprietes[23].loyer[3] = 700;//
	Proprietes[23].loyer[4] = 875;//
	Proprietes[23].loyer[5] = 1050;//
	Proprietes[23].nombreDeMaisons = 0;//
	Proprietes[23].nombreHotel = 0;//
	Proprietes[23].prixMaison =150;//
	Proprietes[23].hypotheque = false;//
	strcpy(Proprietes[23].proprietaire, "aucun proprietaire");//

	//Case 24
	strcpy(Proprietes[24].Nom, "Pall mall");//
	strcpy(Proprietes[24].Couleur, "Rouge");//
	Proprietes[24].prix = 240;//
	Proprietes[24].loyer[0] = 20;//
	Proprietes[24].loyer[1] = 100;//
	Proprietes[24].loyer[2] = 300;//
	Proprietes[24].loyer[3] = 750;//
	Proprietes[24].loyer[4] = 925;//
	Proprietes[24].loyer[5] = 1100;//
	Proprietes[24].nombreDeMaisons = 0;//
	Proprietes[24].nombreHotel = 0;//
	Proprietes[24].prixMaison =150;//
	Proprietes[24].hypotheque = false;//
	strcpy(Proprietes[24].proprietaire, "aucun proprietaire");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Kings cross station");//
	strcpy(Proprietes[25].Couleur, "Gare");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "aucun proprietaire");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Bond street");//
	strcpy(Proprietes[26].Couleur, "Jaune");//
	Proprietes[26].prix = 260;//
	Proprietes[26].loyer[0] = 22;//
	Proprietes[26].loyer[1] = 110;//
	Proprietes[26].loyer[2] = 330;//
	Proprietes[26].loyer[3] = 800;//
	Proprietes[26].loyer[4] = 975;//
	Proprietes[26].loyer[5] = 1150;//
	Proprietes[26].nombreDeMaisons = 0;//
	Proprietes[26].nombreHotel = 0;//
	Proprietes[26].prixMaison =150;//
	Proprietes[26].hypotheque = false;//
	strcpy(Proprietes[26].proprietaire, "aucun proprietaire");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Strand");//
	strcpy(Proprietes[27].Couleur, "Jaune");//
	Proprietes[27].prix = 260;//
	Proprietes[27].loyer[0] = 22;//
	Proprietes[27].loyer[1] = 110;//
	Proprietes[27].loyer[2] = 330;//
	Proprietes[27].loyer[3] = 800;//
	Proprietes[27].loyer[4] = 975;//
	Proprietes[27].loyer[5] = 1150;//
	Proprietes[27].nombreDeMaisons = 0;//
	Proprietes[27].nombreHotel = 0;//
	Proprietes[27].prixMaison =150;//
	Proprietes[27].hypotheque = false;//
	strcpy(Proprietes[27].proprietaire, "aucun proprietaire");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Compagnie de distribution des eaux ");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "aucun proprietaire");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Regent street");//
	strcpy(Proprietes[29].Couleur, "Jaune");//
	Proprietes[29].prix = 280;//
	Proprietes[29].loyer[0] = 24;//
	Proprietes[29].loyer[1] = 120;//
	Proprietes[29].loyer[2] = 360;//
	Proprietes[29].loyer[3] = 850;//
	Proprietes[29].loyer[4] = 1050;//
	Proprietes[29].loyer[5] = 1200;//
	Proprietes[29].nombreDeMaisons = 0;//
	Proprietes[29].nombreHotel = 0;//
	Proprietes[29].prixMaison =150;//
	Proprietes[29].hypotheque = false;//
	strcpy(Proprietes[29].proprietaire, "aucun proprietaire");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "VA EN PRISON");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Interdit");

	//Case 31
	strcpy(Proprietes[31].Nom, "Euston road");//
	strcpy(Proprietes[31].Couleur, "Vert");//
	Proprietes[31].prix = 300;//
	Proprietes[31].loyer[0] = 26;//
	Proprietes[31].loyer[1] = 130;//
	Proprietes[31].loyer[2] = 390;//
	Proprietes[31].loyer[3] = 900;//
	Proprietes[31].loyer[4] = 1100;//
	Proprietes[31].loyer[5] = 1275;//
	Proprietes[31].nombreDeMaisons = 0;//
	Proprietes[31].nombreHotel = 0;//
	Proprietes[31].prixMaison =200;//
	Proprietes[31].hypotheque = false;//
	strcpy(Proprietes[31].proprietaire, "aucun proprietaire");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Piccadilly");//
	strcpy(Proprietes[32].Couleur, "Vert");//
	Proprietes[32].prix = 300;//
	Proprietes[32].loyer[0] = 26;//
	Proprietes[32].loyer[1] = 130;//
	Proprietes[32].loyer[2] = 390;//
	Proprietes[32].loyer[3] = 900;//
	Proprietes[32].loyer[4] = 1100;//
	Proprietes[32].loyer[5] = 1275;//
	Proprietes[32].nombreDeMaisons = 0;//
	Proprietes[32].nombreHotel = 0;//
	Proprietes[32].prixMaison =200;//
	Proprietes[32].hypotheque = false;//
	strcpy(Proprietes[32].proprietaire, "aucun proprietaire");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Caisse de communaute");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Interdit");

	//Case 34
	strcpy(Proprietes[34].Nom, "Oxford street");//
	strcpy(Proprietes[34].Couleur, "Vert");//
	Proprietes[34].prix = 320;//
	Proprietes[34].loyer[0] = 28;//
	Proprietes[34].loyer[1] = 150;//
	Proprietes[34].loyer[2] = 450;//
	Proprietes[34].loyer[3] = 1000;//
	Proprietes[34].loyer[4] = 1200;//
	Proprietes[34].loyer[5] = 1400;//
	Proprietes[34].nombreDeMaisons = 0;//
	Proprietes[34].nombreHotel = 0;//
	Proprietes[34].prixMaison =200;//
	Proprietes[34].hypotheque = false;//
	strcpy(Proprietes[34].proprietaire, "aucun proprietaire");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Liverpool St. station");//
	strcpy(Proprietes[35].Couleur, "Gare");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "aucun proprietaire");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Interdit");

	//Case 37
	strcpy(Proprietes[37].Nom, "Park lane");//
	strcpy(Proprietes[37].Couleur, "Bleu Fonce");//
	Proprietes[37].prix = 350;//
	Proprietes[37].loyer[0] = 35;//
	Proprietes[37].loyer[1] = 175;//
	Proprietes[37].loyer[2] = 500;//
	Proprietes[37].loyer[3] = 1100;//
	Proprietes[37].loyer[4] = 1300;//
	Proprietes[37].loyer[5] = 1500;//
	Proprietes[37].nombreDeMaisons = 0;//
	Proprietes[37].nombreHotel = 0;//
	Proprietes[37].prixMaison =200;//
	Proprietes[37].hypotheque = false;//
	strcpy(Proprietes[37].proprietaire, "aucun proprietaire");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "TAXE DE LUXE");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Interdit");

	//Case 39
	strcpy(Proprietes[39].Nom, "Mayfair");//
	strcpy(Proprietes[39].Couleur, "Bleu Fonce");//
	Proprietes[39].prix = 400;//
	Proprietes[39].loyer[0] = 50;//
	Proprietes[39].loyer[1] = 200;//
	Proprietes[39].loyer[2] = 600;//
	Proprietes[39].loyer[3] = 1400;//
	Proprietes[39].loyer[4] = 1700;//
	Proprietes[39].loyer[5] = 2000;//
	Proprietes[39].nombreDeMaisons = 0;//
	Proprietes[39].nombreHotel = 0;//
	Proprietes[39].prixMaison =200;//
	Proprietes[39].hypotheque = false;//
	strcpy(Proprietes[39].proprietaire, "aucun proprietaire");//
}

void initialiseTable3()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "debut");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "L'auberge du lac");//
	strcpy(Proprietes[1].Couleur, "Marron");//
	Proprietes[1].prix = 60;//
	Proprietes[1].loyer[0] = 2;//
	Proprietes[1].loyer[1] = 10;//
	Proprietes[1].loyer[2] = 30;//
	Proprietes[1].loyer[3] = 90;//
	Proprietes[1].loyer[4] = 160;//
	Proprietes[1].loyer[5] = 250;//
	Proprietes[1].nombreDeMaisons = 0;//
	Proprietes[1].nombreHotel = 0;//
	Proprietes[1].prixMaison =50;//
	Proprietes[1].hypotheque = false;//
	strcpy(Proprietes[1].proprietaire, "aucun proprietaire");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Caisse de communaute");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Interdit");

	//Case 3
	strcpy(Proprietes[3].Nom, "La montagne");//
	strcpy(Proprietes[3].Couleur, "Marron");//
	Proprietes[3].prix = 60;//
	Proprietes[3].loyer[0] = 4;//
	Proprietes[3].loyer[1] = 20;//
	Proprietes[3].loyer[2] = 60;//
	Proprietes[3].loyer[3] = 180;//
	Proprietes[3].loyer[4] = 320;//
	Proprietes[3].loyer[5] = 450;//
	Proprietes[3].nombreDeMaisons = 0;//
	Proprietes[3].nombreHotel = 0;//
	Proprietes[3].prixMaison =50;//
	Proprietes[3].hypotheque = false;//
	strcpy(Proprietes[3].proprietaire, "aucun proprietaire");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "IMPOTS SUR LE REVENU");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Interdit");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Fromage fondu");//
	strcpy(Proprietes[5].Couleur, "Gare");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "aucun proprietaire");//

	//Case 6
	strcpy(Proprietes[6].Nom, "le dresseur d'elephant");//
	strcpy(Proprietes[6].Couleur, "Bleu clair");//
	Proprietes[6].prix = 100;//
	Proprietes[6].loyer[0] = 6;//
	Proprietes[6].loyer[1] = 30;//
	Proprietes[6].loyer[2] = 90;//
	Proprietes[6].loyer[3] = 270;//
	Proprietes[6].loyer[4] = 400;//
	Proprietes[6].loyer[5] = 550;//
	Proprietes[6].nombreDeMaisons = 0;//
	Proprietes[6].nombreHotel = 0;//
	Proprietes[6].prixMaison =50;//
	Proprietes[6].hypotheque = false;//
	strcpy(Proprietes[6].proprietaire, "aucun proprietaire");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Interdit");

	//Case 8
	strcpy(Proprietes[8].Nom, "Le palais de rahazade");//
	strcpy(Proprietes[8].Couleur, "Bleu clair");//
	Proprietes[8].prix = 100;//
	Proprietes[8].loyer[0] = 6;//
	Proprietes[8].loyer[1] = 30;//
	Proprietes[8].loyer[2] = 90;//
	Proprietes[8].loyer[3] = 270;//
	Proprietes[8].loyer[4] = 400;//
	Proprietes[8].loyer[5] = 550;//
	Proprietes[8].nombreDeMaisons = 0;//
	Proprietes[8].nombreHotel = 0;//
	Proprietes[8].prixMaison =50;//
	Proprietes[8].hypotheque = false;//
	strcpy(Proprietes[8].proprietaire, "aucun proprietaire");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Le gange");//
	strcpy(Proprietes[9].Couleur, "Bleu clair");//
	Proprietes[9].prix = 120;//
	Proprietes[9].loyer[0] = 8;//
	Proprietes[9].loyer[1] = 40;//
	Proprietes[9].loyer[2] = 100;//
	Proprietes[9].loyer[3] = 300;//
	Proprietes[9].loyer[4] = 450;//
	Proprietes[9].loyer[5] = 600;//
	Proprietes[9].nombreDeMaisons = 0;//
	Proprietes[9].nombreHotel = 0;//
	Proprietes[9].prixMaison =50;//
	Proprietes[9].hypotheque = false;//
	strcpy(Proprietes[9].proprietaire, "aucun proprietaire");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "PRISON - VISITEUR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Interdit");

	//Case 11
	strcpy(Proprietes[11].Nom, "Le village de pepe");//
	strcpy(Proprietes[11].Couleur, "Rose");//
	Proprietes[11].prix = 140;//
	Proprietes[11].loyer[0] = 10;//
	Proprietes[11].loyer[1] = 50;//
	Proprietes[11].loyer[2] = 150;//
	Proprietes[11].loyer[3] = 450;//
	Proprietes[11].loyer[4] = 625;//
	Proprietes[11].loyer[5] = 750;//
	Proprietes[11].nombreDeMaisons = 0;//
	Proprietes[11].nombreHotel = 0;//
	Proprietes[11].prixMaison =100;//
	Proprietes[11].hypotheque = false;//
	strcpy(Proprietes[11].proprietaire, "aucun proprietaire");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Compangnie de transports terrestres");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "aucun proprietaire");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Le camps tsigane");//
	strcpy(Proprietes[13].Couleur, "Rose");//
	Proprietes[13].prix = 140;//
	Proprietes[13].loyer[0] = 10;//
	Proprietes[13].loyer[1] = 50;//
	Proprietes[13].loyer[2] = 150;//
	Proprietes[13].loyer[3] = 450;//
	Proprietes[13].loyer[4] = 625;//
	Proprietes[13].loyer[5] = 750;//
	Proprietes[13].nombreDeMaisons = 0;//
	Proprietes[13].nombreHotel = 0;//
	Proprietes[13].prixMaison =100;//
	Proprietes[13].hypotheque = false;//
	strcpy(Proprietes[13].proprietaire, "aucun proprietaire");//

	//Case 14
	strcpy(Proprietes[14].Nom, "La corrida");//
	strcpy(Proprietes[14].Couleur, "Rose");//
	Proprietes[14].prix = 160;//
	Proprietes[14].loyer[0] = 12;//
	Proprietes[14].loyer[1] = 60;//
	Proprietes[14].loyer[2] = 180;//
	Proprietes[14].loyer[3] = 500;//
	Proprietes[14].loyer[4] = 700;//
	Proprietes[14].loyer[5] = 900;//
	Proprietes[14].nombreDeMaisons = 0;//
	Proprietes[14].nombreHotel = 0;//
	Proprietes[14].prixMaison =100;//
	Proprietes[14].hypotheque = false;//
	strcpy(Proprietes[14].proprietaire, "aucun proprietaire");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Moules");//
	strcpy(Proprietes[15].Couleur, "Gare");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "aucun proprietaire");//

	//Case 16
	strcpy(Proprietes[16].Nom, "Olympie");//
	strcpy(Proprietes[16].Couleur, "Orange");//
	Proprietes[16].prix = 180;//
	Proprietes[16].loyer[0] = 14;//
	Proprietes[16].loyer[1] = 70;//
	Proprietes[16].loyer[2] = 200;//
	Proprietes[16].loyer[3] = 550;//
	Proprietes[16].loyer[4] = 750;//
	Proprietes[16].loyer[5] = 950;//
	Proprietes[16].nombreDeMaisons = 0;//
	Proprietes[16].nombreHotel = 0;//
	Proprietes[16].prixMaison =100;//
	Proprietes[16].hypotheque = false;//
	strcpy(Proprietes[16].proprietaire, "aucun proprietaire");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Caisse de communaute");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Interdit");

	//Case 18
	strcpy(Proprietes[18].Nom, "L'acorpole");//
	strcpy(Proprietes[18].Couleur, "Orange");//
	Proprietes[18].prix = 180;//
	Proprietes[18].loyer[0] = 14;//
	Proprietes[18].loyer[1] = 70;//
	Proprietes[18].loyer[2] = 200;//
	Proprietes[18].loyer[3] = 550;//
	Proprietes[18].loyer[4] = 750;//
	Proprietes[18].loyer[5] = 950;//
	Proprietes[18].nombreDeMaisons = 0;//
	Proprietes[18].nombreHotel = 0;//
	Proprietes[18].prixMaison =100;//
	Proprietes[18].hypotheque = false;//
	strcpy(Proprietes[18].proprietaire, "aucun proprietaire");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Le discobole");//
	strcpy(Proprietes[19].Couleur, "Orange");//
	Proprietes[19].prix = 200;//
	Proprietes[19].loyer[0] = 16;//
	Proprietes[19].loyer[1] = 80;//
	Proprietes[19].loyer[2] = 220;//
	Proprietes[19].loyer[3] = 600;//
	Proprietes[19].loyer[4] = 800;//
	Proprietes[19].loyer[5] = 1000;//
	Proprietes[19].nombreDeMaisons = 0;//
	Proprietes[19].nombreHotel = 0;//
	Proprietes[19].prixMaison =100;//
	Proprietes[19].hypotheque = false;//
	strcpy(Proprietes[19].proprietaire, "aucun proprietaire");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "PARKING GRATUIT");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Interdit");

	//Case 21
	strcpy(Proprietes[21].Nom, "Le stade du rugby");//
	strcpy(Proprietes[21].Couleur, "Rouge");//
	Proprietes[21].prix = 220;//
	Proprietes[21].loyer[0] = 18;//
	Proprietes[21].loyer[1] = 90;//
	Proprietes[21].loyer[2] = 250;//
	Proprietes[21].loyer[3] = 700;//
	Proprietes[21].loyer[4] = 875;//
	Proprietes[21].loyer[5] = 1050;//
	Proprietes[21].nombreDeMaisons = 0;//
	Proprietes[21].nombreHotel = 0;//
	Proprietes[21].prixMaison =150;//
	Proprietes[21].hypotheque = false;//
	strcpy(Proprietes[21].proprietaire, "aucun proprietaire");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Interdit");

	//Case 23
	strcpy(Proprietes[23].Nom, "La manche");//
	strcpy(Proprietes[23].Couleur, "Rouge");//
	Proprietes[23].prix = 220;//
	Proprietes[23].loyer[0] = 18;//
	Proprietes[23].loyer[1] = 90;//
	Proprietes[23].loyer[2] = 250;//
	Proprietes[23].loyer[3] = 700;//
	Proprietes[23].loyer[4] = 875;//
	Proprietes[23].loyer[5] = 1050;//
	Proprietes[23].nombreDeMaisons = 0;//
	Proprietes[23].nombreHotel = 0;//
	Proprietes[23].prixMaison =150;//
	Proprietes[23].hypotheque = false;//
	strcpy(Proprietes[23].proprietaire, "aucun proprietaire");//

	//Case 24
	strcpy(Proprietes[24].Nom, "Londinium");//
	strcpy(Proprietes[24].Couleur, "Rouge");//
	Proprietes[24].prix = 240;//
	Proprietes[24].loyer[0] = 20;//
	Proprietes[24].loyer[1] = 100;//
	Proprietes[24].loyer[2] = 300;//
	Proprietes[24].loyer[3] = 750;//
	Proprietes[24].loyer[4] = 925;//
	Proprietes[24].loyer[5] = 1100;//
	Proprietes[24].nombreDeMaisons = 0;//
	Proprietes[24].nombreHotel = 0;//
	Proprietes[24].prixMaison =150;//
	Proprietes[24].hypotheque = false;//
	strcpy(Proprietes[24].proprietaire, "aucun proprietaire");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Saumon picte");//
	strcpy(Proprietes[25].Couleur, "Gare");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "aucun proprietaire");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Le sphinx");//
	strcpy(Proprietes[26].Couleur, "Jaune");//
	Proprietes[26].prix = 260;//
	Proprietes[26].loyer[0] = 22;//
	Proprietes[26].loyer[1] = 110;//
	Proprietes[26].loyer[2] = 330;//
	Proprietes[26].loyer[3] = 800;//
	Proprietes[26].loyer[4] = 975;//
	Proprietes[26].loyer[5] = 1150;//
	Proprietes[26].nombreDeMaisons = 0;//
	Proprietes[26].nombreHotel = 0;//
	Proprietes[26].prixMaison =150;//
	Proprietes[26].hypotheque = false;//
	strcpy(Proprietes[26].proprietaire, "aucun proprietaire");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Louxor");//
	strcpy(Proprietes[27].Couleur, "Jaune");//
	Proprietes[27].prix = 260;//
	Proprietes[27].loyer[0] = 22;//
	Proprietes[27].loyer[1] = 110;//
	Proprietes[27].loyer[2] = 330;//
	Proprietes[27].loyer[3] = 800;//
	Proprietes[27].loyer[4] = 975;//
	Proprietes[27].loyer[5] = 1150;//
	Proprietes[27].nombreDeMaisons = 0;//
	Proprietes[27].nombreHotel = 0;//
	Proprietes[27].prixMaison =150;//
	Proprietes[27].hypotheque = false;//
	strcpy(Proprietes[27].proprietaire, "aucun proprietaire");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Compangnie de transports maritimes");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "aucun proprietaire");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Le palais de Cleopatre");//
	strcpy(Proprietes[29].Couleur, "Jaune");//
	Proprietes[29].prix = 280;//
	Proprietes[29].loyer[0] = 24;//
	Proprietes[29].loyer[1] = 120;//
	Proprietes[29].loyer[2] = 360;//
	Proprietes[29].loyer[3] = 850;//
	Proprietes[29].loyer[4] = 1050;//
	Proprietes[29].loyer[5] = 1200;//
	Proprietes[29].nombreDeMaisons = 0;//
	Proprietes[29].nombreHotel = 0;//
	Proprietes[29].prixMaison =150;//
	Proprietes[29].hypotheque = false;//
	strcpy(Proprietes[29].proprietaire, "aucun proprietaire");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "VA EN PRISON");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Interdit");

	//Case 31
	strcpy(Proprietes[31].Nom, "Le banquet");//
	strcpy(Proprietes[31].Couleur, "Vert");//
	Proprietes[31].prix = 300;//
	Proprietes[31].loyer[0] = 26;//
	Proprietes[31].loyer[1] = 130;//
	Proprietes[31].loyer[2] = 390;//
	Proprietes[31].loyer[3] = 900;//
	Proprietes[31].loyer[4] = 1100;//
	Proprietes[31].loyer[5] = 1275;//
	Proprietes[31].nombreDeMaisons = 0;//
	Proprietes[31].nombreHotel = 0;//
	Proprietes[31].prixMaison =200;//
	Proprietes[31].hypotheque = false;//
	strcpy(Proprietes[31].proprietaire, "aucun proprietaire");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Lutece");//
	strcpy(Proprietes[32].Couleur, "Vert");//
	Proprietes[32].prix = 300;//
	Proprietes[32].loyer[0] = 26;//
	Proprietes[32].loyer[1] = 130;//
	Proprietes[32].loyer[2] = 390;//
	Proprietes[32].loyer[3] = 900;//
	Proprietes[32].loyer[4] = 1100;//
	Proprietes[32].loyer[5] = 1275;//
	Proprietes[32].nombreDeMaisons = 0;//
	Proprietes[32].nombreHotel = 0;//
	Proprietes[32].prixMaison =200;//
	Proprietes[32].hypotheque = false;//
	strcpy(Proprietes[32].proprietaire, "aucun proprietaire");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Caisse de communaute");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Interdit");

	//Case 34
	strcpy(Proprietes[34].Nom, "Massilia");//
	strcpy(Proprietes[34].Couleur, "Vert");//
	Proprietes[34].prix = 320;//
	Proprietes[34].loyer[0] = 28;//
	Proprietes[34].loyer[1] = 150;//
	Proprietes[34].loyer[2] = 450;//
	Proprietes[34].loyer[3] = 1000;//
	Proprietes[34].loyer[4] = 1200;//
	Proprietes[34].loyer[5] = 1400;//
	Proprietes[34].nombreDeMaisons = 0;//
	Proprietes[34].nombreHotel = 0;//
	Proprietes[34].prixMaison =200;//
	Proprietes[34].hypotheque = false;//
	strcpy(Proprietes[34].proprietaire, "aucun proprietaire");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Sanglier roti");//
	strcpy(Proprietes[35].Couleur, "Gare");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "aucun proprietaire");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Interdit");

	//Case 37
	strcpy(Proprietes[37].Nom, "Le palais de Cesar");//
	strcpy(Proprietes[37].Couleur, "Bleu Fonce");//
	Proprietes[37].prix = 350;//
	Proprietes[37].loyer[0] = 35;//
	Proprietes[37].loyer[1] = 175;//
	Proprietes[37].loyer[2] = 500;//
	Proprietes[37].loyer[3] = 1100;//
	Proprietes[37].loyer[4] = 1300;//
	Proprietes[37].loyer[5] = 1500;//
	Proprietes[37].nombreDeMaisons = 0;//
	Proprietes[37].nombreHotel = 0;//
	Proprietes[37].prixMaison =200;//
	Proprietes[37].hypotheque = false;//
	strcpy(Proprietes[37].proprietaire, "aucun proprietaire");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "TAXE DE LUXE");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Interdit");

	//Case 39
	strcpy(Proprietes[39].Nom, "Rome");//
	strcpy(Proprietes[39].Couleur, "Bleu Fonce");//
	Proprietes[39].prix = 400;//
	Proprietes[39].loyer[0] = 50;//
	Proprietes[39].loyer[1] = 200;//
	Proprietes[39].loyer[2] = 600;//
	Proprietes[39].loyer[3] = 1400;//
	Proprietes[39].loyer[4] = 1700;//
	Proprietes[39].loyer[5] = 2000;//
	Proprietes[39].nombreDeMaisons = 0;//
	Proprietes[39].nombreHotel = 0;//
	Proprietes[39].prixMaison =200;//
	Proprietes[39].hypotheque = false;//
	strcpy(Proprietes[39].proprietaire, "aucun proprietaire");//
}

void initialiseTable4()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "debut");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Celui qui demenage");//
	strcpy(Proprietes[1].Couleur, "Marron");//
	Proprietes[1].prix = 60;//
	Proprietes[1].loyer[0] = 2;//
	Proprietes[1].loyer[1] = 10;//
	Proprietes[1].loyer[2] = 30;//
	Proprietes[1].loyer[3] = 90;//
	Proprietes[1].loyer[4] = 160;//
	Proprietes[1].loyer[5] = 250;//
	Proprietes[1].nombreDeMaisons = 0;//
	Proprietes[1].nombreHotel = 0;//
	Proprietes[1].prixMaison =50;//
	Proprietes[1].hypotheque = false;//
	strcpy(Proprietes[1].proprietaire, "aucun proprietaire");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Caisse de communaute");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Interdit");

	//Case 3
	strcpy(Proprietes[3].Nom, "Celui qui fait craquer Rachel");//
	strcpy(Proprietes[3].Couleur, "Marron");//
	Proprietes[3].prix = 60;//
	Proprietes[3].loyer[0] = 4;//
	Proprietes[3].loyer[1] = 20;//
	Proprietes[3].loyer[2] = 60;//
	Proprietes[3].loyer[3] = 180;//
	Proprietes[3].loyer[4] = 320;//
	Proprietes[3].loyer[5] = 450;//
	Proprietes[3].nombreDeMaisons = 0;//
	Proprietes[3].nombreHotel = 0;//
	Proprietes[3].prixMaison =50;//
	Proprietes[3].hypotheque = false;//
	strcpy(Proprietes[3].proprietaire, "aucun proprietaire");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "IMPOTS SUR LE REVENU");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Interdit");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Relaxi-Taxi");//
	strcpy(Proprietes[5].Couleur, "Gare");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "aucun proprietaire");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Celui qui tombe des nues");//
	strcpy(Proprietes[6].Couleur, "Bleu clair");//
	Proprietes[6].prix = 100;//
	Proprietes[6].loyer[0] = 6;//
	Proprietes[6].loyer[1] = 30;//
	Proprietes[6].loyer[2] = 90;//
	Proprietes[6].loyer[3] = 270;//
	Proprietes[6].loyer[4] = 400;//
	Proprietes[6].loyer[5] = 550;//
	Proprietes[6].nombreDeMaisons = 0;//
	Proprietes[6].nombreHotel = 0;//
	Proprietes[6].prixMaison =50;//
	Proprietes[6].hypotheque = false;//
	strcpy(Proprietes[6].proprietaire, "aucun proprietaire");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Interdit");

	//Case 8
	strcpy(Proprietes[8].Nom, "Celui qui avait pris un coup sur la tete");//
	strcpy(Proprietes[8].Couleur, "Bleu clair");//
	Proprietes[8].prix = 100;//
	Proprietes[8].loyer[0] = 6;//
	Proprietes[8].loyer[1] = 30;//
	Proprietes[8].loyer[2] = 90;//
	Proprietes[8].loyer[3] = 270;//
	Proprietes[8].loyer[4] = 400;//
	Proprietes[8].loyer[5] = 550;//
	Proprietes[8].nombreDeMaisons = 0;//
	Proprietes[8].nombreHotel = 0;//
	Proprietes[8].prixMaison =50;//
	Proprietes[8].hypotheque = false;//
	strcpy(Proprietes[8].proprietaire, "aucun proprietaire");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Celui qui a du mal a se preparer");//
	strcpy(Proprietes[9].Couleur, "Bleu clair");//
	Proprietes[9].prix = 120;//
	Proprietes[9].loyer[0] = 8;//
	Proprietes[9].loyer[1] = 40;//
	Proprietes[9].loyer[2] = 100;//
	Proprietes[9].loyer[3] = 300;//
	Proprietes[9].loyer[4] = 450;//
	Proprietes[9].loyer[5] = 600;//
	Proprietes[9].nombreDeMaisons = 0;//
	Proprietes[9].nombreHotel = 0;//
	Proprietes[9].prixMaison =50;//
	Proprietes[9].hypotheque = false;//
	strcpy(Proprietes[9].proprietaire, "aucun proprietaire");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "PRISON - VISITEUR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Interdit");

	//Case 11
	strcpy(Proprietes[11].Nom, "Celui qui allait a la plage");//
	strcpy(Proprietes[11].Couleur, "Rose");//
	Proprietes[11].prix = 140;//
	Proprietes[11].loyer[0] = 10;//
	Proprietes[11].loyer[1] = 50;//
	Proprietes[11].loyer[2] = 150;//
	Proprietes[11].loyer[3] = 450;//
	Proprietes[11].loyer[4] = 625;//
	Proprietes[11].loyer[5] = 750;//
	Proprietes[11].nombreDeMaisons = 0;//
	Proprietes[11].nombreHotel = 0;//
	Proprietes[11].prixMaison =100;//
	Proprietes[11].hypotheque = false;//
	strcpy(Proprietes[11].proprietaire, "aucun proprietaire");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Entretien du reseau electrique par M.Treeger");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "aucun proprietaire");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Celui qui ne voyait qu'un chat");//
	strcpy(Proprietes[13].Couleur, "Rose");//
	Proprietes[13].prix = 140;//
	Proprietes[13].loyer[0] = 10;//
	Proprietes[13].loyer[1] = 50;//
	Proprietes[13].loyer[2] = 150;//
	Proprietes[13].loyer[3] = 450;//
	Proprietes[13].loyer[4] = 625;//
	Proprietes[13].loyer[5] = 750;//
	Proprietes[13].nombreDeMaisons = 0;//
	Proprietes[13].nombreHotel = 0;//
	Proprietes[13].prixMaison =100;//
	Proprietes[13].hypotheque = false;//
	strcpy(Proprietes[13].proprietaire, "aucun proprietaire");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Celui qui va se marier");//
	strcpy(Proprietes[14].Couleur, "Rose");//
	Proprietes[14].prix = 160;//
	Proprietes[14].loyer[0] = 12;//
	Proprietes[14].loyer[1] = 60;//
	Proprietes[14].loyer[2] = 180;//
	Proprietes[14].loyer[3] = 500;//
	Proprietes[14].loyer[4] = 700;//
	Proprietes[14].loyer[5] = 900;//
	Proprietes[14].nombreDeMaisons = 0;//
	Proprietes[14].nombreHotel = 0;//
	Proprietes[14].prixMaison =100;//
	Proprietes[14].hypotheque = false;//
	strcpy(Proprietes[14].proprietaire, "aucun proprietaire");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Taxi de la grand-Mere de Phoebe");//
	strcpy(Proprietes[15].Couleur, "Gare");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "aucun proprietaire");//

	//Case 16
	strcpy(Proprietes[16].Nom, "Celui qui avait des souvenirs difficiles a avaler");//
	strcpy(Proprietes[16].Couleur, "Orange");//
	Proprietes[16].prix = 180;//
	Proprietes[16].loyer[0] = 14;//
	Proprietes[16].loyer[1] = 70;//
	Proprietes[16].loyer[2] = 200;//
	Proprietes[16].loyer[3] = 550;//
	Proprietes[16].loyer[4] = 750;//
	Proprietes[16].loyer[5] = 950;//
	Proprietes[16].nombreDeMaisons = 0;//
	Proprietes[16].nombreHotel = 0;//
	Proprietes[16].prixMaison =100;//
	Proprietes[16].hypotheque = false;//
	strcpy(Proprietes[16].proprietaire, "aucun proprietaire");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Caisse de communaute");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Interdit");

	//Case 18
	strcpy(Proprietes[18].Nom, "Celui qui enviait ses amis");//
	strcpy(Proprietes[18].Couleur, "Orange");//
	Proprietes[18].prix = 180;//
	Proprietes[18].loyer[0] = 14;//
	Proprietes[18].loyer[1] = 70;//
	Proprietes[18].loyer[2] = 200;//
	Proprietes[18].loyer[3] = 550;//
	Proprietes[18].loyer[4] = 750;//
	Proprietes[18].loyer[5] = 950;//
	Proprietes[18].nombreDeMaisons = 0;//
	Proprietes[18].nombreHotel = 0;//
	Proprietes[18].prixMaison =100;//
	Proprietes[18].hypotheque = false;//
	strcpy(Proprietes[18].proprietaire, "aucun proprietaire");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Celui qui avait les dents blanches");//
	strcpy(Proprietes[19].Couleur, "Orange");//
	Proprietes[19].prix = 200;//
	Proprietes[19].loyer[0] = 16;//
	Proprietes[19].loyer[1] = 80;//
	Proprietes[19].loyer[2] = 220;//
	Proprietes[19].loyer[3] = 600;//
	Proprietes[19].loyer[4] = 800;//
	Proprietes[19].loyer[5] = 1000;//
	Proprietes[19].nombreDeMaisons = 0;//
	Proprietes[19].nombreHotel = 0;//
	Proprietes[19].prixMaison =100;//
	Proprietes[19].hypotheque = false;//
	strcpy(Proprietes[19].proprietaire, "aucun proprietaire");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "PARKING GRATUIT");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Interdit");

	//Case 21
	strcpy(Proprietes[21].Nom, "Celui qui souhaitait la bonne année");//
	strcpy(Proprietes[21].Couleur, "Rouge");//
	Proprietes[21].prix = 220;//
	Proprietes[21].loyer[0] = 18;//
	Proprietes[21].loyer[1] = 90;//
	Proprietes[21].loyer[2] = 250;//
	Proprietes[21].loyer[3] = 700;//
	Proprietes[21].loyer[4] = 875;//
	Proprietes[21].loyer[5] = 1050;//
	Proprietes[21].nombreDeMaisons = 0;//
	Proprietes[21].nombreHotel = 0;//
	Proprietes[21].prixMaison =150;//
	Proprietes[21].hypotheque = false;//
	strcpy(Proprietes[21].proprietaire, "aucun proprietaire");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Interdit");

	//Case 23
	strcpy(Proprietes[23].Nom, "Celui qui offrait un velo");//
	strcpy(Proprietes[23].Couleur, "Rouge");//
	Proprietes[23].prix = 220;//
	Proprietes[23].loyer[0] = 18;//
	Proprietes[23].loyer[1] = 90;//
	Proprietes[23].loyer[2] = 250;//
	Proprietes[23].loyer[3] = 700;//
	Proprietes[23].loyer[4] = 875;//
	Proprietes[23].loyer[5] = 1050;//
	Proprietes[23].nombreDeMaisons = 0;//
	Proprietes[23].nombreHotel = 0;//
	Proprietes[23].prixMaison =150;//
	Proprietes[23].hypotheque = false;//
	strcpy(Proprietes[23].proprietaire, "aucun proprietaire");//

	//Case 24
	strcpy(Proprietes[24].Nom, "Celui qui se deguisait");//
	strcpy(Proprietes[24].Couleur, "Rouge");//
	Proprietes[24].prix = 240;//
	Proprietes[24].loyer[0] = 20;//
	Proprietes[24].loyer[1] = 100;//
	Proprietes[24].loyer[2] = 300;//
	Proprietes[24].loyer[3] = 750;//
	Proprietes[24].loyer[4] = 925;//
	Proprietes[24].loyer[5] = 1100;//
	Proprietes[24].nombreDeMaisons = 0;//
	Proprietes[24].nombreHotel = 0;//
	Proprietes[24].prixMaison =150;//
	Proprietes[24].hypotheque = false;//
	strcpy(Proprietes[24].proprietaire, "aucun proprietaire");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Voiture de sport de Monica");//
	strcpy(Proprietes[25].Couleur, "Gare");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "aucun proprietaire");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Celui qui a epouse Monica");//
	strcpy(Proprietes[26].Couleur, "Jaune");//
	Proprietes[26].prix = 260;//
	Proprietes[26].loyer[0] = 22;//
	Proprietes[26].loyer[1] = 110;//
	Proprietes[26].loyer[2] = 330;//
	Proprietes[26].loyer[3] = 800;//
	Proprietes[26].loyer[4] = 975;//
	Proprietes[26].loyer[5] = 1150;//
	Proprietes[26].nombreDeMaisons = 0;//
	Proprietes[26].nombreHotel = 0;//
	Proprietes[26].prixMaison =150;//
	Proprietes[26].hypotheque = false;//
	strcpy(Proprietes[26].proprietaire, "aucun proprietaire");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Celui qui perturbait halloween");//
	strcpy(Proprietes[27].Couleur, "Jaune");//
	Proprietes[27].prix = 260;//
	Proprietes[27].loyer[0] = 22;//
	Proprietes[27].loyer[1] = 110;//
	Proprietes[27].loyer[2] = 330;//
	Proprietes[27].loyer[3] = 800;//
	Proprietes[27].loyer[4] = 975;//
	Proprietes[27].loyer[5] = 1150;//
	Proprietes[27].nombreDeMaisons = 0;//
	Proprietes[27].nombreHotel = 0;//
	Proprietes[27].prixMaison =150;//
	Proprietes[27].hypotheque = false;//
	strcpy(Proprietes[27].proprietaire, "aucun proprietaire");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Entretient des canalisations par M.Treeger");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "aucun proprietaire");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Celui qui avait un bebe");//
	strcpy(Proprietes[29].Couleur, "Jaune");//
	Proprietes[29].prix = 280;//
	Proprietes[29].loyer[0] = 24;//
	Proprietes[29].loyer[1] = 120;//
	Proprietes[29].loyer[2] = 360;//
	Proprietes[29].loyer[3] = 850;//
	Proprietes[29].loyer[4] = 1050;//
	Proprietes[29].loyer[5] = 1200;//
	Proprietes[29].nombreDeMaisons = 0;//
	Proprietes[29].nombreHotel = 0;//
	Proprietes[29].prixMaison =150;//
	Proprietes[29].hypotheque = false;//
	strcpy(Proprietes[29].proprietaire, "aucun proprietaire");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "VA EN PRISON");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Interdit");

	//Case 31
	strcpy(Proprietes[31].Nom, "Celui qui gagner a la loterie");//
	strcpy(Proprietes[31].Couleur, "Vert");//
	Proprietes[31].prix = 300;//
	Proprietes[31].loyer[0] = 26;//
	Proprietes[31].loyer[1] = 130;//
	Proprietes[31].loyer[2] = 390;//
	Proprietes[31].loyer[3] = 900;//
	Proprietes[31].loyer[4] = 1100;//
	Proprietes[31].loyer[5] = 1275;//
	Proprietes[31].nombreDeMaisons = 0;//
	Proprietes[31].nombreHotel = 0;//
	Proprietes[31].prixMaison =200;//
	Proprietes[31].hypotheque = false;//
	strcpy(Proprietes[31].proprietaire, "aucun proprietaire");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Celui qui allait a la barbade");//
	strcpy(Proprietes[32].Couleur, "Vert");//
	Proprietes[32].prix = 300;//
	Proprietes[32].loyer[0] = 26;//
	Proprietes[32].loyer[1] = 130;//
	Proprietes[32].loyer[2] = 390;//
	Proprietes[32].loyer[3] = 900;//
	Proprietes[32].loyer[4] = 1100;//
	Proprietes[32].loyer[5] = 1275;//
	Proprietes[32].nombreDeMaisons = 0;//
	Proprietes[32].nombreHotel = 0;//
	Proprietes[32].prixMaison =200;//
	Proprietes[32].hypotheque = false;//
	strcpy(Proprietes[32].proprietaire, "aucun proprietaire");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Caisse de communaute");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Interdit");

	//Case 34
	strcpy(Proprietes[34].Nom, "Celui qui jouait le role du pere");//
	strcpy(Proprietes[34].Couleur, "Vert");//
	Proprietes[34].prix = 320;//
	Proprietes[34].loyer[0] = 28;//
	Proprietes[34].loyer[1] = 150;//
	Proprietes[34].loyer[2] = 450;//
	Proprietes[34].loyer[3] = 1000;//
	Proprietes[34].loyer[4] = 1200;//
	Proprietes[34].loyer[5] = 1400;//
	Proprietes[34].nombreDeMaisons = 0;//
	Proprietes[34].nombreHotel = 0;//
	Proprietes[34].prixMaison =200;//
	Proprietes[34].hypotheque = false;//
	strcpy(Proprietes[34].proprietaire, "aucun proprietaire");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Bateau de Joey");//
	strcpy(Proprietes[35].Couleur, "Gare");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "aucun proprietaire");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Interdit");

	//Case 37
	strcpy(Proprietes[37].Nom, "Ceux qui s'en allaient 1er partie");//
	strcpy(Proprietes[37].Couleur, "Bleu Fonce");//
	Proprietes[37].prix = 350;//
	Proprietes[37].loyer[0] = 35;//
	Proprietes[37].loyer[1] = 175;//
	Proprietes[37].loyer[2] = 500;//
	Proprietes[37].loyer[3] = 1100;//
	Proprietes[37].loyer[4] = 1300;//
	Proprietes[37].loyer[5] = 1500;//
	Proprietes[37].nombreDeMaisons = 0;//
	Proprietes[37].nombreHotel = 0;//
	Proprietes[37].prixMaison =200;//
	Proprietes[37].hypotheque = false;//
	strcpy(Proprietes[37].proprietaire, "aucun proprietaire");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "TAXE DE LUXE");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Interdit");

	//Case 39
	strcpy(Proprietes[39].Nom, "Ceux qui s'en allaient 2eme partie");//
	strcpy(Proprietes[39].Couleur, "Bleu Fonce");//
	Proprietes[39].prix = 400;//
	Proprietes[39].loyer[0] = 50;//
	Proprietes[39].loyer[1] = 200;//
	Proprietes[39].loyer[2] = 600;//
	Proprietes[39].loyer[3] = 1400;//
	Proprietes[39].loyer[4] = 1700;//
	Proprietes[39].loyer[5] = 2000;//
	Proprietes[39].nombreDeMaisons = 0;//
	Proprietes[39].nombreHotel = 0;//
	Proprietes[39].prixMaison =200;//
	Proprietes[39].hypotheque = false;//
	strcpy(Proprietes[39].proprietaire, "aucun proprietaire");//
}

void affichePlateau()
{



                        Color(15,0);printf("%-16.16s",Proprietes[0].Nom);Color(15,0);printf(" ");Color(15,8);printf("%-16.16s",Proprietes[1].Nom);Color(15,0);printf(" ");Color(15,3);printf("%-16.16s",Proprietes[2].Nom);Color(15,0);printf(" ");Color(15,8);printf("%-16.16s",Proprietes[3].Nom);Color(15,0);printf(" ");Color(15,0);printf("%-16.16s",Proprietes[4].Nom);Color(15,0);printf(" ");Color(0,15);printf("%-16.16s",Proprietes[5].Nom);Color(15,0);printf(" ");Color(15,9);printf("%-16.16s",Proprietes[6].Nom);Color(15,0);printf(" ");Color(0,12);printf("%-16.16s",Proprietes[7].Nom);Color(15,0);printf(" ");Color(15,9);printf("%-16.16s",Proprietes[8].Nom);Color(15,0);printf(" ");Color(15,9);printf("%-16.16s",Proprietes[9].Nom);Color(15,0);printf(" ");Color(15,0);printf("%-16.16s",Proprietes[10].Nom);Color(15,0);printf("\n");
                                    printf("________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________\n");
    if (Joueures[0].position==0){   printf("|J1            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==1){   printf("|              | |J1            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==2){   printf("|              | |              | |J1            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==3){   printf("|              | |              | |              | |J1            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==4){   printf("|              | |              | |              | |              | |J1            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==5){   printf("|              | |              | |              | |              | |              | |J1            | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==6){   printf("|              | |              | |              | |              | |              | |              | |J1            | |              | |              | |              | |              |\n");}else if (Joueures[0].position==7){   printf("|              | |              | |              | |              | |              | |              | |              | |J1            | |              | |              | |              |\n");}else if (Joueures[0].position==8){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J1            | |              | |              |\n");}else if (Joueures[0].position==9){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J1            | |              |\n");}else if (Joueures[0].position==10){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J1            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[1].position==0){   printf("|J2            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==1){   printf("|              | |J2            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==2){   printf("|              | |              | |J2            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==3){   printf("|              | |              | |              | |J2            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==4){   printf("|              | |              | |              | |              | |J2            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==5){   printf("|              | |              | |              | |              | |              | |J2            | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==6){   printf("|              | |              | |              | |              | |              | |              | |J2            | |              | |              | |              | |              |\n");}else if (Joueures[1].position==7){   printf("|              | |              | |              | |              | |              | |              | |              | |J2            | |              | |              | |              |\n");}else if (Joueures[1].position==8){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J2            | |              | |              |\n");}else if (Joueures[1].position==9){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J2            | |              |\n");}else if (Joueures[1].position==10){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J2            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[2].position==0){   printf("|J3            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==1){   printf("|              | |J3            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==2){   printf("|              | |              | |J3            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==3){   printf("|              | |              | |              | |J3            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==4){   printf("|              | |              | |              | |              | |J3            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==5){   printf("|              | |              | |              | |              | |              | |J3            | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==6){   printf("|              | |              | |              | |              | |              | |              | |J3            | |              | |              | |              | |              |\n");}else if (Joueures[2].position==7){   printf("|              | |              | |              | |              | |              | |              | |              | |J3            | |              | |              | |              |\n");}else if (Joueures[2].position==8){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J3            | |              | |              |\n");}else if (Joueures[2].position==9){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J3            | |              |\n");}else if (Joueures[2].position==10){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J3            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[3].position==0){   printf("|J4            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==1){   printf("|              | |J4            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==2){   printf("|              | |              | |J4            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==3){   printf("|              | |              | |              | |J4            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==4){   printf("|              | |              | |              | |              | |J4            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==5){   printf("|              | |              | |              | |              | |              | |J4            | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==6){   printf("|              | |              | |              | |              | |              | |              | |J4            | |              | |              | |              | |              |\n");}else if (Joueures[3].position==7){   printf("|              | |              | |              | |              | |              | |              | |              | |J4            | |              | |              | |              |\n");}else if (Joueures[3].position==8){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J4            | |              | |              |\n");}else if (Joueures[3].position==9){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J4            | |              |\n");}else if (Joueures[3].position==10){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J4            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[4].position==0){   printf("|J5            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==1){   printf("|              | |J5            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==2){   printf("|              | |              | |J5            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==3){   printf("|              | |              | |              | |J5            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==4){   printf("|              | |              | |              | |              | |J5            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==5){   printf("|              | |              | |              | |              | |              | |J5            | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==6){   printf("|              | |              | |              | |              | |              | |              | |J5            | |              | |              | |              | |              |\n");}else if (Joueures[4].position==7){   printf("|              | |              | |              | |              | |              | |              | |              | |J5            | |              | |              | |              |\n");}else if (Joueures[4].position==8){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J5            | |              | |              |\n");}else if (Joueures[4].position==9){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J5            | |              |\n");}else if (Joueures[4].position==10){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J5            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[5].position==0){   printf("|J6            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==1){   printf("|              | |J6            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==2){   printf("|              | |              | |J6            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==3){   printf("|              | |              | |              | |J6            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==4){   printf("|              | |              | |              | |              | |J6            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==5){   printf("|              | |              | |              | |              | |              | |J6            | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==6){   printf("|              | |              | |              | |              | |              | |              | |J6            | |              | |              | |              | |              |\n");}else if (Joueures[5].position==7){   printf("|              | |              | |              | |              | |              | |              | |              | |J6            | |              | |              | |              |\n");}else if (Joueures[5].position==8){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J6            | |              | |              |\n");}else if (Joueures[5].position==9){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J6            | |              |\n");}else if (Joueures[5].position==10){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J6            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
                                    printf("|______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________|\n");
                        Color(15,1);printf("%-16.16s",Proprietes[39].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,13);printf("%-16.16s",Proprietes[11].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==39){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==11){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==39){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==11){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==39){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==11){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==39){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==11){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==39){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==11){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==39){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==11){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(15,0);printf("%-16.16s",Proprietes[38].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,0);printf("%-16.16s",Proprietes[12].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==38){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==12){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==38){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==12){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==38){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==12){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==38){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==12){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==38){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==12){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==38){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==12){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(15,1);printf("%-16.16s",Proprietes[37].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,13);printf("%-16.16s",Proprietes[13].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==37){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==13){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==37){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==13){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==37){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==13){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==37){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==13){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==37){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==13){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==37){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==13){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(0,12);printf("%-16.16s",Proprietes[36].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,13);printf("%-16.16s",Proprietes[14].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==36){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==14){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==36){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==14){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==36){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==14){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==36){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==14){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==36){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==14){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==36){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==14){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(0,15);printf("%-16.16s",Proprietes[35].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(0,15);printf("%-16.16s",Proprietes[15].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==35){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==15){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==35){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==15){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==35){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==15){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==35){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==15){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==35){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==15){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==35){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==15){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(15,2);printf("%-16.16s",Proprietes[34].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,12);printf("%-16.16s",Proprietes[16].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==34){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==16){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==34){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==16){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==34){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==16){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==34){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==16){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==34){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==16){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==34){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==16){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(15,3);printf("%-16.16s",Proprietes[33].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,3);printf("%-16.16s",Proprietes[17].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==33){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==17){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==33){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==17){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==33){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==17){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==33){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==17){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==33){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==17){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==33){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==17){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(15,2);printf("%-16.16s",Proprietes[32].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,12);printf("%-16.16s",Proprietes[18].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==32){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==18){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==32){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==18){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==32){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==18){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==32){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==18){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==32){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==18){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==32){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==18){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(15,2);printf("%-16.16s",Proprietes[31].Nom);Color(15,0);printf("                                                                                                                                                          ");Color(15,12);printf("%-16.16s",Proprietes[19].Nom);Color(15,0);printf("\n");
                                    printf("________________                                                                                                                                                          ________________\n");
    if (Joueures[0].position==31){  printf("|J1            |                                                                                                                                                          |              |\n");}else if(Joueures[0].position==19){   printf("|              |                                                                                                                                                          |J1            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[1].position==31){  printf("|J2            |                                                                                                                                                          |              |\n");}else if(Joueures[1].position==19){   printf("|              |                                                                                                                                                          |J2            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[2].position==31){  printf("|J3            |                                                                                                                                                          |              |\n");}else if(Joueures[2].position==19){   printf("|              |                                                                                                                                                          |J3            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[3].position==31){  printf("|J4            |                                                                                                                                                          |              |\n");}else if(Joueures[3].position==19){   printf("|              |                                                                                                                                                          |J4            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[4].position==31){  printf("|J5            |                                                                                                                                                          |              |\n");}else if(Joueures[4].position==19){   printf("|              |                                                                                                                                                          |J5            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
    if (Joueures[5].position==31){  printf("|J6            |                                                                                                                                                          |              |\n");}else if(Joueures[5].position==19){   printf("|              |                                                                                                                                                          |J6            |\n");}else{   printf("|              |                                                                                                                                                          |              |\n");}
                                    printf("|______________|                                                                                                                                                          |______________|\n");
                        Color(15,0);printf("%-16.16s",Proprietes[30].Nom);Color(15,0);printf(" ");Color(0,14);printf("%-16.16s",Proprietes[29].Nom);Color(15,0);printf(" ");Color(15,0);printf("%-16.16s",Proprietes[28].Nom);Color(15,0);printf(" ");Color(0,14);printf("%-16.16s",Proprietes[27].Nom);Color(15,0);printf(" ");Color(0,14);printf("%-16.16s",Proprietes[26].Nom);Color(15,0);printf(" ");Color(0,15);printf("%-16.16s",Proprietes[25].Nom);Color(15,0);printf(" ");Color(15,4);printf("%-16.16s",Proprietes[24].Nom);Color(15,0);printf(" ");Color(15,4);printf("%-16.16s",Proprietes[23].Nom);Color(15,0);printf(" ");Color(0,12);printf("%-16.16s",Proprietes[22].Nom);Color(15,0);printf(" ");Color(15,4);printf("%-16.16s",Proprietes[21].Nom);Color(15,0);printf(" ");Color(15,0);printf("%-16.16s",Proprietes[20].Nom);Color(15,0);printf("\n");
                                    printf("________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________ ________________\n");
    if (Joueures[0].position==30){  printf("|J1            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==29){   printf("|              | |J1            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==28){   printf("|              | |              | |J1            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==27){   printf("|              | |              | |              | |J1            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==26){   printf("|              | |              | |              | |              | |J1            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==25){   printf("|              | |              | |              | |              | |              | |J1            | |              | |              | |              | |              | |              |\n");}else if (Joueures[0].position==24){   printf("|              | |              | |              | |              | |              | |              | |J1            | |              | |              | |              | |              |\n");}else if (Joueures[0].position==23){   printf("|              | |              | |              | |              | |              | |              | |              | |J1            | |              | |              | |              |\n");}else if (Joueures[0].position==22){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J1            | |              | |              |\n");}else if (Joueures[0].position==21){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J1            | |              |\n");}else if (Joueures[0].position==20){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J1            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[1].position==30){  printf("|J2            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==29){   printf("|              | |J2            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==28){   printf("|              | |              | |J2            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==27){   printf("|              | |              | |              | |J2            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==26){   printf("|              | |              | |              | |              | |J2            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==25){   printf("|              | |              | |              | |              | |              | |J2            | |              | |              | |              | |              | |              |\n");}else if (Joueures[1].position==24){   printf("|              | |              | |              | |              | |              | |              | |J2            | |              | |              | |              | |              |\n");}else if (Joueures[1].position==23){   printf("|              | |              | |              | |              | |              | |              | |              | |J2            | |              | |              | |              |\n");}else if (Joueures[1].position==22){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J2            | |              | |              |\n");}else if (Joueures[1].position==21){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J2            | |              |\n");}else if (Joueures[1].position==20){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J2            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[2].position==30){  printf("|J3            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==29){   printf("|              | |J3            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==28){   printf("|              | |              | |J3            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==27){   printf("|              | |              | |              | |J3            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==26){   printf("|              | |              | |              | |              | |J3            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==25){   printf("|              | |              | |              | |              | |              | |J3            | |              | |              | |              | |              | |              |\n");}else if (Joueures[2].position==24){   printf("|              | |              | |              | |              | |              | |              | |J3            | |              | |              | |              | |              |\n");}else if (Joueures[2].position==23){   printf("|              | |              | |              | |              | |              | |              | |              | |J3            | |              | |              | |              |\n");}else if (Joueures[2].position==22){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J3            | |              | |              |\n");}else if (Joueures[2].position==21){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J3            | |              |\n");}else if (Joueures[2].position==20){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J3            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[3].position==30){  printf("|J4            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==29){   printf("|              | |J4            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==28){   printf("|              | |              | |J4            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==27){   printf("|              | |              | |              | |J4            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==26){   printf("|              | |              | |              | |              | |J4            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==25){   printf("|              | |              | |              | |              | |              | |J4            | |              | |              | |              | |              | |              |\n");}else if (Joueures[3].position==24){   printf("|              | |              | |              | |              | |              | |              | |J4            | |              | |              | |              | |              |\n");}else if (Joueures[3].position==23){   printf("|              | |              | |              | |              | |              | |              | |              | |J4            | |              | |              | |              |\n");}else if (Joueures[3].position==22){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J4            | |              | |              |\n");}else if (Joueures[3].position==21){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J4            | |              |\n");}else if (Joueures[3].position==20){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J4            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[4].position==30){  printf("|J5            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==29){   printf("|              | |J5            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==28){   printf("|              | |              | |J5            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==27){   printf("|              | |              | |              | |J5            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==26){   printf("|              | |              | |              | |              | |J5            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==25){   printf("|              | |              | |              | |              | |              | |J5            | |              | |              | |              | |              | |              |\n");}else if (Joueures[4].position==24){   printf("|              | |              | |              | |              | |              | |              | |J5            | |              | |              | |              | |              |\n");}else if (Joueures[4].position==23){   printf("|              | |              | |              | |              | |              | |              | |              | |J5            | |              | |              | |              |\n");}else if (Joueures[4].position==22){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J5            | |              | |              |\n");}else if (Joueures[4].position==21){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J5            | |              |\n");}else if (Joueures[4].position==20){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J5            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
    if (Joueures[5].position==30){  printf("|J6            | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==29){   printf("|              | |J6            | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==28){   printf("|              | |              | |J6            | |              | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==27){   printf("|              | |              | |              | |J6            | |              | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==26){   printf("|              | |              | |              | |              | |J6            | |              | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==25){   printf("|              | |              | |              | |              | |              | |J6            | |              | |              | |              | |              | |              |\n");}else if (Joueures[5].position==24){   printf("|              | |              | |              | |              | |              | |              | |J6            | |              | |              | |              | |              |\n");}else if (Joueures[5].position==23){   printf("|              | |              | |              | |              | |              | |              | |              | |J6            | |              | |              | |              |\n");}else if (Joueures[5].position==22){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |J6            | |              | |              |\n");}else if (Joueures[5].position==21){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |J6            | |              |\n");}else if (Joueures[5].position==20){   printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |J6            |\n");}else{printf("|              | |              | |              | |              | |              | |              | |              | |              | |              | |              | |              |\n");}
                                    printf("|______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________| |______________|\n");

}

//hypothequer des proprietes
void hypothequerPropriete(int player)
{
	int i = player;//
	int option = 0;//
	int numerodelapropriete=0;//
	int nombreDepropriete=0;
	for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    printf(" %d   * %s\n",j,Proprietes[j].Nom);//
                    nombreDepropriete++;
                }
        }
    if (nombreDepropriete>0)
    {
        do{
        printf("entrez le numero de la propriete a hypothequer \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//
        printf("Voulez-vous hypothequer - %s - pour M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prix / 2));//
        printf(" 1 - Oui\n");//
        printf(" 0 - Non\n");//
        printf("saisir une option: ");//
        scanf("%d", &option);//
    }
    else
    {
        printf("Vous navez pas de propriete");
        option=0;
    }

    if ((Proprietes[numerodelapropriete].nombreDeMaisons == 0)&&(Proprietes[numerodelapropriete].nombreHotel == 0))
    {
        menuhypotheque://
            switch (option)//
            {
            case 1://
                Joueures[i].compte += (Proprietes[numerodelapropriete].prixMaison / 2);
                Proprietes[numerodelapropriete].hypotheque = true;//
                printf("La propriete de %s a ete hypothequee.\n", Proprietes[numerodelapropriete].Nom);//
                fflush(stdin);//
                getchar();//
                break;//
            case 0:
                break;//
            default://
                printf("Erreur! Option invalide.\n");//
                fflush(stdin);//
                getchar();//
                goto menuhypotheque;//
                break;//
            }
    }
    else
    {
      printf("Erreur! vendez d'abord toutes vos maisons et hotels\n");//
    }
}

//vendre des proprietes
void vendreConstruction(int player)//
{
	int i = player;//
	int option = 0;//
	int numerodelapropriete=0;//
	int nombreDepropriete=0;
	for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    printf(" %d   * %s\n",j,Proprietes[j].Nom);//
                    nombreDepropriete++;
                }
        }
    if (nombreDepropriete>0)
    {
        do{
        printf("entrez le numero de la propriete ou il faut vendre un batiment \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//
        if ((Proprietes[numerodelapropriete].nombreDeMaisons>0))
        {
            printf("Voulez-vous vendre une maison - %s - pour M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prixMaison / 2));//
            printf(" 1 - Oui\n");//
            printf(" 0 - Non\n");//
            printf("saisir une option: ");//
            scanf("%d", &option);//
        }
        else if (Proprietes[numerodelapropriete].nombreHotel>0)
        {
            printf("Voulez-vous vendre un hotel - %s - pour M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prixMaison / 2));//
            printf(" 2 - Voulez-vous vendre un hotel et recuperer 4 maisons\n");//
            printf(" 3 - Voulez-vous vendre un hotel et vendre 4 maisons\n");//
            printf("saisir une option: ");//
            scanf("%d", &option);//

            if (option==2)
            {
                printf("Voulez-vous vendre un hotel - %s - pour M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prixMaison / 2));//
                printf(" 2 - Oui\n");//
                printf(" 0 - Non\n");//
                printf("saisir une option: ");//
                scanf("%d", &option);//
            }
            else if (option==3)
            {
                printf("Voulez-vous vendre un hotel et 4 maisons - %s - pour M%d ?\n", Proprietes[numerodelapropriete].Nom, 5*(Proprietes[numerodelapropriete].prixMaison / 2));//
                printf(" 3 - Oui\n");//
                printf(" 0 - Non\n");//
                printf("saisir une option: ");//
                scanf("%d", &option);//
            }

        }
        else
        {
            printf("Vous navez pas de batiment\n");
        }
    }
    else
    {
        printf("Vous n'avez pas de propriete\n");
        option=0;
    }

menuvente://

	switch (option)//
	{
	case 1://
		Proprietes[numerodelapropriete].nombreDeMaisons--;//
        Joueures[i].compte += (Proprietes[numerodelapropriete].prixMaison/2) ;//
        Batiments.nMaison += 1;

		printf("\nVente termine!\n");//
		printf("%s a ete vendu par %s.\n", Proprietes[numerodelapropriete].Nom, Joueures[i].Nom);//
		fflush(stdin);//
		getchar();//
		break;//
	case 2://
	    Proprietes[numerodelapropriete].nombreHotel--;
	    Proprietes[numerodelapropriete].nombreDeMaisons =4;//
        Joueures[i].compte += (Proprietes[numerodelapropriete].prixMaison/2) ;//
        Batiments.nHotel += 1;
        Batiments.nMaison -=4;

		printf("\nVente termine!\n");//
		printf("%s a ete vendu par %s.\n", Proprietes[numerodelapropriete].Nom, Joueures[i].Nom);//
		fflush(stdin);//
		getchar();//
		break;//
    case 3:
        Proprietes[numerodelapropriete].nombreHotel--;//
        Joueures[i].compte += 5*(Proprietes[numerodelapropriete].prixMaison/2) ;//
        Batiments.nHotel += 1;

		printf("\nVente termine!\n");//
		printf("%s a ete vendu par %s.\n", Proprietes[numerodelapropriete].Nom, Joueures[i].Nom);//
		fflush(stdin);//
		getchar();//
        break;
    case 0:
        break;
	default://
		printf("Erreur! Option invalide.\n");//
		fflush(stdin);//
		getchar();//
		goto menuvente;//
		break;//
	}

}

//faillite
void Faillite(int player)
{
    int i= player;
    int option = 0;//
	int nombreDepropriete=0;

	printf("Vous etes en faillite votre compte est de % d\n",Joueures[i].compte);
	for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    nombreDepropriete++;
                }
        }

        menuFaillite://
			printf("\n Qu'est-ce que tu veux faire?\n");//

            if (nombreDepropriete>0)
            {
                printf("1 - Vendre des constructions\n");//
                printf("2 - Hypothequer des Propriete\n");//
            }
            else if (nombreDepropriete<0)
            {
                printf("Vous n'avez pas de propriete\n");
                printf("\n %s vous avez perdu !\n",Joueures[i].Nom);
                system("pause");
            }



			scanf("%d", &option);//
			switch (option)//
			{

			//6 - Vendre une propriété
			case 1: vendreConstruction(i);//

				break;//

			//7 - Hypothequer une propriété
			case 2: hypothequerPropriete(i);//

				break;//

			//0 - Terminer le tour
			case 0://
				break;//

			//option Invalide
			default://
				printf("Erreur! Veuillez saisir une option valide : ");//
				fflush(stdin);//
				goto menuFaillite;//
				break;//
			}
}

//Menu initial
int menuInitial()
{
	int option;//
    do{
        printf("MENU\n");//
        printf("1 - Nouvelle partie\n");//
        printf("2 - Continuer\n");//
        printf("3 - Credit\n");//
        scanf("%d", &option);//
      }while((option < 1) || (option > 3));
	return(option);//
}

//selection des joueurs
int selectionJoueures()
{
	int nJoueures;//

	printf("Quel est le nombre de joueur (2 a 6): ");//
	scanf("%d", &nJoueures);//
	printf("\n");//

	while ((nJoueures < 2) || (nJoueures > 6))//
	{
		printf("ERREUR! %d Ce n'est pas un nombre valide de joueurs.\n", nJoueures);//
		printf("Quel est le nombre de joueur (2 a 6): ");//
		scanf("%d", &nJoueures);//
	}
	getchar();//
	for (int i = 0; i < nJoueures; i++)//
	{
		printf("Quel est le nom du joueur %d: ", i + 1);//
        scanf("%s",Joueures[i].Nom);//
        fflush(stdin);
		Joueures[i].compte = 1500;//
        Joueures[i].position=0;
		Joueures[i].prison = false;//
		Joueures[i].carteSortiedePrison=0;
	}
	return (nJoueures);//
}

//prison
void prison(int player, int nJoueures)
{
    int i = player;//
    int j=0;
	printf("Vous devez faire un double pour sortir de prison.\n");//
	int de1, de2;//

	de1 = (rand() % 6) + 1;//
	de2 = (rand() % 6) + 1;//
	//de1=1; de2=2;
	printf("Lancer: %d + %d = %d\n", de1, de2, de1 + de2);//

	if (de1 == de2)//
	{
		printf("Sortez de prison !\n");//
		Joueures[i].prison = false;//
		Joueures[i].position = 10+de1+de2;//

	}
	else if(Joueures[i].carteSortiedePrison > 0)
	{
	    printf("Vous avez utiliser votre carte de sortie de prison\n");//
	    printf("Sortez de prison !\n");
		Joueures[i].prison = false;//
		Joueures[i].position = 10+de1+de2;//
		Joueures[i].carteSortiedePrison -= 1;

	}

	else {Joueures[i].prison = true;//

	int option = 0;//
        menuJoueur://
            do{
			printf("\n Qu'est-ce que tu veux faire?\n");//
			printf("1 - Acheter une carte de sortie de prison\n");//
            printf("2 - Payer une amende de 50M pour sortir\n");//
			printf("0 - Rester en prison\n");//
            }while((option < 0) || (option > 2));

			scanf("%d", &option);//
			switch (option)//
			{
			//1 - Acheter une carte a un autre joueur
			case 1: for (j=0;j<nJoueures;j++)
                    {
                        if (Joueures[j].carteSortiedePrison==1)
                        {
                            int option1=0;
                            do{
                            printf(" %s voulez vous vendre votre carte de sortie de prison\n",Joueures[j].Nom);
                            printf(" 1 - Oui\n");//
                            printf(" 0 - Non\n");//
                            printf("saisir une option: ");//
                            scanf("%d", &option1);//
                            }while((option1 < 0) || (option1 > 1));
                            if (option1==1)
                            {
                                int prix=0;

                                printf("%s a quel prix voulez vous la vendre\n",Joueures[j].Nom);
                                printf("saisir le prix: \n");//
                                scanf("%d", &prix);//
                                int option2=0;
                                do{
                                printf(" %s acceptez vous le prix de vente de %d\n",Joueures[i].Nom,prix);
                                printf(" 1 - Oui\n");//
                                printf(" 0 - Non\n");//
                                printf("saisir une option: ");//
                                scanf("%d", &option2);//
                                }while((option2 < 0) || (option2 > 1));
                                if ((prix<Joueures[i].compte)&&(option2==1))
                                {
                                    Joueures[j].carteSortiedePrison -= 1;
                                    Joueures[j].compte += prix;
                                    Joueures[i].compte -= prix;
                                    printf("Vous avez achete une carte sortie de prison a %s.\n",Joueures[j].Nom);
                                    printf("Vous avez utiliser votre carte de sortie de prison\n");//
                                    printf("Sortez de prison !\n");
                                    Joueures[i].prison = false;//
                                    Joueures[i].position = 10;//
                                    printf(" * place : Case %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
                                }

                            }
                        }
                        else printf("personne n'a de carte de sorti de prison\n");//
                    }//
				break;//

			//2 - Payer une amende
			case 2:     Joueures[i].prison = false;
                        Joueures[i].position=10;
                        Joueures[i].compte -= 50;
                        printf("Vous avez payez une amende de 50M \n");
                        printf(" * place : Case %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
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
	}
}

//Lancer de dés
int lancerDedes(int player)
{
	int de1 = 0, de2 = 0, total = 0, compteur = 0,i = player;//



	printf("\n========== Lancer de des ==========\n");//
	do
	{
		de1 = (rand() % 6) + 1; de2 = (rand() % 6) + 1;//
		//de1=1; de2=0;
        //de1=1;de2=1;
		printf(" * %d Lancer: %d + %d = %d\n", compteur + 1, de1, de2, de1 + de2);//
		total += de1 + de2;//
		if (de1 != de2)//
		{
			printf("\nAvance de %d case.\n", total);//
			fflush(stdin);//
			getchar();//
			return (total);//
		}
		else
		{
			printf(" DOUBLE!\n\n");//
			compteur++;//
			fflush(stdin);//
			getchar();//
		}
	} while ((de1 == de2) && (compteur < 3));//

	//Aller à la chaine d'accueil pour 3 doubles consécutifs
	if (compteur == 3)//
	{
		printf("Obtention de 3 DOUBLES consecutifs. Aller en prison!\n");//
		fflush(stdin);//
		getchar();//
		Joueures[i].prison = true;//
        return (0);
	}
	else return (total);//
}

//loyer
void loyer(int player, int nJoueures)
{
    int i=player;
    int j=0;
    int de1=0;
    int de2=0;
    int Couleurcompteur = 0;//compteur couleur
    int Couleurcompteur1 = 0;//compteur couleur
    int Couleurcompteur2 = 0;//compteur couleur
    int nbmaison=Proprietes[Joueures[i].position].nombreDeMaisons;

    for (j=0;j<nJoueures;j++)
    {

            for (int l = 0; l < 40; l++)//
            {
                //Stocke les codes des propriété ayant la même Couleur

                    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, Proprietes[l].Couleur) == 0)&&(strcmp(Proprietes[l].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Gare") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false))//
                    {
                        Couleurcompteur++;//

                    }

            }
        if ((Couleurcompteur == 2)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Marron") == 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Gare") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))//
        {
            printf("%s vous devez payer %d a %s \n",Joueures[i].Nom ,Proprietes[Joueures[i].position].loyer[0]*2,Joueures[j].Nom);//
            printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            Joueures[i].compte -= (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//

            printf("Compte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            Joueures[j].compte += (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Compte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            printf("virement accompli !\n");
        }

        else if ((Couleurcompteur == 2)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Bleu Fonce") == 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Gare") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))//
        {
            printf("%s vous devez payer %d a %s \n",Joueures[i].Nom ,Proprietes[Joueures[i].position].loyer[0]*2,Joueures[j].Nom);//
            printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            Joueures[i].compte -= (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//

            printf("Compte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            Joueures[j].compte += (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Compte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            printf("virement accompli !\n");
        }

        else if ((Couleurcompteur == 3)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Gare") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))//
        {
            printf("%s vous devez payer %d a %s \n",Joueures[i].Nom ,Proprietes[Joueures[i].position].loyer[0]*2,Joueures[j].Nom);//
            printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            Joueures[i].compte -= (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//

            printf("Compte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            Joueures[j].compte += (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Compte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            printf("virement accompli !\n");
        }

        else if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Gare") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))
        {
            printf("%s vous devez payer %d \n",Joueures[i].Nom,Proprietes[Joueures[i].position].loyer[nbmaison] );//
            Joueures[i].compte -= Proprietes[Joueures[i].position].loyer[nbmaison] ;
            Joueures[j].compte += Proprietes[Joueures[i].position].loyer[nbmaison] ;
            printf("virement accompli !!\n");
            printf("\nCompte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
        }
        else if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Gare" ) == 0)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))
        {
          for (int l = 0; l < 40; l++)//
            {
                //Stocke les codes des propriété ayant la même Couleur

                    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, Proprietes[l].Couleur) == 0)&&(strcmp(Proprietes[l].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Gare") == 0)&&(Proprietes[Joueures[i].position].hypotheque==false))//
                    {
                        Couleurcompteur1++;//

                    }
            }
            if (Couleurcompteur1 == 1)//
            {
                    Joueures[i].compte -= 25 ;
                    Joueures[j].compte += 25 ;
                    printf("virement accompli !!!\n");
                    printf("\nCompte actuel de %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if ((Couleurcompteur1 == 2)&&((Joueures[i].compte -= 50)>0))//
            {
                    Joueures[i].compte -= 50 ;
                    Joueures[j].compte += 50 ;
                    printf("virement accompli !!!\n");
                    printf("\nCompte actuel de %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Couleurcompteur1 == 3)//
            {
                    Joueures[i].compte -= 100 ;
                    Joueures[j].compte += 100 ;
                    printf("virement accompli !!!\n");
                    printf("\nCompte actuel de %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Couleurcompteur1 == 4)//
            {
                    Joueures[i].compte -= 200 ;
                    Joueures[j].compte += 200 ;
                    printf("virement accompli !!!\n");
                    printf("\nCompte actuel de %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Joueures[i].compte<0)
            {
                Faillite(i);
            }

        }
        else if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Services" ) == 0)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))
        {
          for (int l = 0; l < 40; l++)//
            {
                //Stocke les codes des propriété ayant la même Couleur

                    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, Proprietes[l].Couleur) == 0)&&(strcmp(Proprietes[l].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") == 0)&&(Proprietes[Joueures[i].position].hypotheque==false))//
                    {
                        Couleurcompteur2++;//

                    }
            }
            if (Couleurcompteur2 == 1)//
            {
                    printf("\n========== Lancer de des ==========\n");//
                    de1 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Lancer: %d + %d = %d\n",de1, de2, de1 + de2);//
                    printf("Vous devez payer 4 fois le montant indiquer par les des soit %d\n",4*(de1 + de2));//
                    Joueures[i].compte -= 4*(de1+de2);
                    Joueures[j].compte += 4*(de1+de2);
                    printf("virement accompli !!!!\n");
                    printf("\nCompte actuel de %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Couleurcompteur2 == 2)//
            {
                    printf("\n========== Lancer de des ==========\n");//
                    de1 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Lancer: %d + %d = %d\n",de1, de2, de1 + de2);//
                    printf("Vous devez payer 10 fois le montant indiquer par les des soit %d\n",10*(de1 + de2));//
                    Joueures[i].compte -= 10*(de1+de2);
                    Joueures[j].compte += 10*(de1+de2);
                    printf("virement accompli !!!!\n");
                    printf("\nCompte actuel de %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Joueures[i].compte<0)
            {
                Faillite(i);
            }

        }
        else if (Joueures[i].compte<0)
        {
            Faillite(i);
        }
    }
}

//Calculer la nouvelle position du Joueur apres le Lancer de des
int nouvelleposition(int posActuel, int lancerDedes)
{
	int nouvellePos = posActuel + lancerDedes;//

	if (nouvellePos == 40)//
	{
		nouvellePos = 0;//
		return (nouvellePos);//
	}
	else if (nouvellePos > 40) return(nouvellePos - 40);//
	else return nouvellePos;//
}

//État du jeu
void etatduJeu(int nplayer)
{
	int nJoueures = nplayer, option;//
	bool erreur;//

	printf("1 - Statut general de chaque joueur\n");//
	printf("2 - Statut general du plateau\n");//
	do
	{
		erreur = false;//
		scanf("%d", &option);//
		switch (option)//
		{
			//Etat général du jeu organisé par Joueur
		case 1://
			for (int i = 0; i < nJoueures; i++)//
			{
				printf("\n========== Joueur %d - %s ==========\n", i + 1, Joueures[i].Nom);//
				printf(" * Compte        : %d euros\n", Joueures[i].compte);//
				printf(" * Carte sortie de prison        : %d\n", Joueures[i].carteSortiedePrison);//
				if(Joueures[i].prison== true){printf(" * En prison        : OUI\n");}
                else {printf(" * En prison        : NON\n");}
				printf(" * Place      : Case %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
				printf(" * propriete acquise :\n");//
				for (int j = 0; j < 40; j++)//
				{
					if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
					{
						printf("    * %s\n", Proprietes[j].Nom);//
					}
				}
				printf("\n=======================================\n");
			}
			break;//

			//État général du jeu organisé par plateau.
		case 2:
			printf("\n=============== Plateau ===============\n");//
			for (int i = 0; i < 40; i++)//
			{
				if (i == 10 || i == 20 || i == 30)//
					printf("\n\n");//
				printf("\n * %2d - %s\n", i, Proprietes[i].Nom);//
				if (strcmp(Proprietes[i].proprietaire, "Interdit") == 0)//
					printf("\n");//
				else
				{
					printf("        PROPRIETAIRE : %s\n", Proprietes[i].proprietaire);//
					if (strcmp(Proprietes[i].proprietaire, "aucun proprietaire") == 0)//
						printf("\n");//
					else
					{
						if (Proprietes[i].nombreDeMaisons == 5)//
						{
							printf("        Maison        : 4\n");//
							printf("        HOTEL        : 1\n");//
						}
						else
						{
							printf("        Maison        : %d\n", Proprietes[i].nombreDeMaisons);//
							printf("        HOTEL        : 0\n");//
						}
						if (Proprietes[i].hypotheque == true)
						{
							printf("        Hypotheque   : Oui\n");//
						}
						else
							printf("        Hypotheque   : Non\n");//
					}
				}
			}
			printf("\n=========================================\n");
			break;//

			//option Invalidé
		default://
			printf("Erreur! Entrez une option valide: ");//
			erreur = true;//
			break;//
		}
	} while (erreur == true);//
}

//acheter des proprietes
void acheterPropriete(int player)//
{
	int i = player;//

	if ((Joueures[i].compte >= Proprietes[Joueures[i].position].prix)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, "aucun proprietaire") == 0))//
    {
		Joueures[i].compte -= Proprietes[Joueures[i].position].prix;//
		strcpy(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom);//

		printf("\nAcquisition termine!\n");//
		printf("%s a ete acquis par %s.\n", Proprietes[Joueures[i].position].Nom, Joueures[i].Nom);//

	}
	else if ((Joueures[i].compte >= Proprietes[Joueures[i].position].prix)&&(Proprietes[Joueures[i].position].hypotheque == true))//
    {
		Joueures[i].compte -= ((Proprietes[Joueures[i].position].prix/2)+((Proprietes[Joueures[i].position].prix)*(10/100)));//
		strcpy(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom);//
		Proprietes[Joueures[i].position].hypotheque = false;

		printf("\nAcquisition termine!\n");//
		printf("%s a ete acquis par %s.\n", Proprietes[Joueures[i].position].Nom, Joueures[i].Nom);//

	}
	else
	{
		printf("N'a pas assez d'argent pour l'achat !");//
		printf("Vous avez besoin de %d euros pour finaliser l'achat.", Proprietes[Joueures[i].position].prix - Joueures[i].compte);//

	}
}

//Vente Aux Encheres des Proprietes
void offre(int player, int numplayer)
{
	int nJoueures = numplayer;//
	int option = 0;
    int j;
    int i=player;
			menuventeAuxEncheres:
			    do{
				printf("Qu'est-ce que tu veux faire?\n");
				printf(" 1 - Offre\n");
				printf(" 2 - Abandonner\n");
				printf("\nsaisir une option: ");
				fflush(stdin);
				scanf("%d", &option);
                }while((option < 1) || (option > 2));
				switch (option)
				{
				//enchere

				case 1:
					for (j=0;j<nJoueures;j++)
                    {
                        if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))
                        {
                            int option1=0;
                            do{
                            printf(" %s voulez vous vendre votre propiete\n",Joueures[j].Nom);
                            printf(" 1 - Oui\n");//
                            printf(" 0 - Non\n");//
                            printf("saisir une option: ");//
                            scanf("%d", &option1);//
                            }while((option1 < 0) || (option1 > 2));
                            if (option1==1)
                            {
                                int prix;
                                printf("%s a quel prix voulez vous la vendre\n",Joueures[j].Nom);
                                printf("saisir le prix: \n");//
                                scanf("%d", &prix);//
                                int option2=0;
                                do{
                                printf(" %s acceptez vous le prix de vente de %d\n",Joueures[i].Nom,prix);
                                printf(" 1 - Oui\n");//
                                printf(" 0 - Non\n");//
                                printf("saisir une option: ");//
                                scanf("%d", &option2);//
                                }while((option2 < 0) || (option2 > 1));
                                if ((prix<Joueures[i].compte)&&(option2==1))
                                    {
                                        Joueures[j].compte += prix;
                                        Joueures[i].compte -= prix;
                                        strcpy(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom );//
                                        printf("Vous avez achete cette propriete a %s.\n",Joueures[j].Nom);
                                        printf("\nCompte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
                                        printf("\nCompte actuel de %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
                                    }
                                else
                                {
                                    goto menuventeAuxEncheres;
                                }
                            }
                        }

                    }//
					break;

				//Abandonner
				case 2:
					printf("vous avez renonce à faire une offre.");
					break;

				//option Invalidé
				default:
					printf("entree invalide");
					goto menuventeAuxEncheres;
					break;
				}

}

// construire un hotel
void construireHotel(int player)
{
	int i = player;//numero du joueur
	int numerodelapropriete=0;//
	int nombreDepropriete=0;
	for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    printf(" %d   * %s\n",j,Proprietes[j].Nom);//
                    nombreDepropriete++;
                }
        }
    if (nombreDepropriete>0)
    {
        do{
        printf("entrez le numero de la propriete ou il faut construire un hotel \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//

        if ((Proprietes[numerodelapropriete].nombreDeMaisons >= 4)&&(Proprietes[numerodelapropriete].nombreHotel <1)&&((Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison)>0))
        {
            if (Batiments.nHotel>0)
            {
                Proprietes[numerodelapropriete].nombreDeMaisons = 5;//
                Batiments.nMaison += 4;
                Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison ;//
                Proprietes[numerodelapropriete].nombreHotel += 1;//
                Batiments.nHotel -= 1;
                printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);
                printf("Hotel construit avec succes!\n");//
                printf("Cette propriete a maintenant %d maison(s) mais un Hotel.\n", Proprietes[numerodelapropriete].nombreDeMaisons); //
            }
            else
            {
                printf("Il n'a plus d'hotels attendez que des joueurs en vendent.");//
            }

        }
        else printf("Il vous faut 4 maison sur la meme prorpiete pour construire un hotel.");//
    }
    else
    {
        printf("Vous n'avez pas de propriete");
    }
}

//Construire une maison
void construireMaison(int player)
{
	int i = player;//numero du joueur
	int Couleurcompteur = 0;//compteur couleur
	//int proprietairecompteur = 0;//
	//int CouleurCodes[3];//
    int numerodelapropriete=0;//
	int nombreDepropriete=0;
	for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    printf(" %d   * %s\n",j,Proprietes[j].Nom);//
                    nombreDepropriete++;
                }
        }
    if (nombreDepropriete>0)
    {
        do{
        printf("entrez le numero de la propriete ou il faut construire une Maison \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//

        for (int l = 0; l < 40; l++)//
            {
                //Stocke les codes des propriété ayant la même Couleur

                    if ((strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) == 0)&&(strcmp(Proprietes[numerodelapropriete].Couleur, Proprietes[l].Couleur) == 0)&&(strcmp(Proprietes[l].proprietaire, Joueures[i].Nom) == 0)&&(strcmp(Proprietes[numerodelapropriete].Couleur,"Gare") != 0)&&(strcmp(Proprietes[numerodelapropriete].Couleur, "Services") != 0)&&(Proprietes[numerodelapropriete].hypotheque==false))//
                    {
                        Couleurcompteur++;//
                        printf("compteur : %d\n",Couleurcompteur);
                    }

            }
             if ((Couleurcompteur == 3)&&((Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison)>0))//
            {
                    if (Batiments.nMaison>0)
                        {
                            if (Proprietes[numerodelapropriete].nombreDeMaisons<=4)
                            {
                               Proprietes[numerodelapropriete].nombreDeMaisons++;//
                                Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison ;//
                                Batiments.nMaison -= 1;
                                printf("maison construite avec succes!\n");//
                                printf("Cette propriete a maintenant %d maison(s).\n", Proprietes[numerodelapropriete].nombreDeMaisons);//
                                printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);
                            }
                            else construireHotel(i);

                        }
                        else
                        {
                            printf("Il n'a plus de maison attendez que des joueurs en vendent.\n");//
                        }


            }
            if ((Couleurcompteur == 2)&&(strcmp(Proprietes[numerodelapropriete].Couleur,"Marron") == 0)&&((Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison)>0))//
            {
                    if (Batiments.nMaison>0)
                        {
                            if (Proprietes[numerodelapropriete].nombreDeMaisons<=4)
                            {
                               Proprietes[numerodelapropriete].nombreDeMaisons++;//
                                Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison ;//
                                Batiments.nMaison -= 1;
                                printf("maison construite avec succes!\n");//
                                printf("Cette propriete a maintenant %d maison(s).\n", Proprietes[numerodelapropriete].nombreDeMaisons);//
                                printf("Compte actuel de %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);
                            }
                            else construireHotel(i);

                        }
                        else
                        {
                            printf("Il n'a plus de maison attendez que des joueurs en vendent.\n");//
                        }


            }
             else
                        {
                            printf("vous ne possedez pas toute les couleurs.\n");//
                        }
    }


    else
    {
        printf("Vous navez pas de propriete\n");
    }
}

//carte chance
void carteChance(int player, int nJoueures)
{
    int i=player;
    int j=0;
    int de1=0;
    int de2=0;
    int de3=0;

    de1 = (rand() % 16) + 1;//
    de2 = (rand() % 6) + 1;//
    de3 = (rand() % 6) + 1;//

    if(de1==1)
    {
        for (j=0;j<nJoueures;j++)
        {
            if ((Joueures[j].carteSortiedePrison==0)&&(Joueures[i].carteSortiedePrison==0))
            {
                Joueures[i].carteSortiedePrison=1;
                printf("Vous avez piochez une carte sortie de prison.\n");
            }
        }
    }
    else if (de1==2)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Amende pour exces de beaute: Payez 15M.");//
        fflush(stdin);//
        getchar();//
        Joueures[i].compte -= 15;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==3)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Vous avez ete elu president du conseil d'administration versez 50M a chaque joueur.");//
        for (j=0;j<nJoueures;j++)
        {
            Joueures[i].compte -= 50;//
            Joueures[j].compte += 50;//
            printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
        }
    }
    else if (de1==4)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Rendez vous a %s si vous passez par la case depart recevez 200M.",Proprietes[24].Nom);//
        Joueures[i].position = 24;//

    }
    else if (de1==5)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Avancez jusqu'a la case depart (recevez 200M).");//
        Joueures[i].position = 0;//
    }
    else if (de1==6)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Rendez vous a %s si vous passez par la case depart recevez 200M.",Proprietes[11].Nom);//
        Joueures[i].position = 11;//
    }
    else if (de1==7)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Rendez vous a %s si vous passez par la case depart recevez 200M.",Proprietes[39].Nom);//
        Joueures[i].position = 39;//
    }
    else if (de1==8)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Allez a la %s si vous passez par la case depart recevez 200M.",Proprietes[5].Nom);//
        Joueures[i].position = 5;//
    }
    else if (de1==9)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Reculez de trois case.");//
        Joueures[i].position -= 3;//
    }
    else if (de1==10)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("La banque vous verse un dividende de 50M.");//
        Joueures[i].compte += 50;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==11)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Votre immeuble et votre pret rapportent. Touchez 150M.");//
        Joueures[i].compte += 150;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }

    else if (de1==12)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Allez en prison");//
        Joueures[i].prison = true;//
    }
    else if (de1==13)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Vous faites des reparations sur toutes vos proprietes : versez 25M pour chaque maison et 100M pour chaque hotel que vous possedez.");//
        for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    Joueures[i].compte -= 100*Proprietes[j].nombreHotel;//
                    Joueures[i].compte -= 25*Proprietes[j].nombreDeMaisons;//
                }
        }

        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==14)
    {
        printf("Avancez jusqu'a la compagnie de services public la plus proche.\n");//
        printf("Si elle n'appartient a personne, vous pouvez l'acheter aupres de la banque.\n");
        printf("Si elle appartient a un autre joueur, lancez les des et payez le montant du total de vos des multiplie par 10.\n");
        if ((12<Joueures[i].position)&&(Joueures[i].position < 28))
        {
            Joueures[i].position=28;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("\n========== Lancer de des ==========\n");//
                    de3 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Lancer: %d + %d = %d\n",de3, de2, de3 + de2);//
                    printf("Vous devez payer 10 fois le montant indiquer par les des soit %d\n",de3 + de2);//
                    Joueures[i].compte -= 10*(de3+de2);
                    Joueures[j].compte += 10*(de3+de2);
                }
            }
        }
        if ((28<Joueures[i].position)&&(Joueures[i].position < 12))
        {
            Joueures[i].position=12;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("\n========== Lancer de des ==========\n");//
                    de3 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Lancer: %d + %d = %d\n",de3, de2, de3 + de2);//
                    printf("Vous devez payer 10 fois le montant indiquer par les des soit %d\n",de1 + de2);//
                    Joueures[i].compte -= 10*(de3+de2);
                    Joueures[j].compte += 10*(de3+de2);
                }
            }
        }
    }
    else if (de1==15)
    {
        printf("Avancez jusqu'a la gare la plus proche.\n");//
        printf("Si elle n'appartient a personne, vous pouvez l'acheter aupres de la banque.\n");
        printf("Si elle appartient a un autre joueur, vous devez lui payez deux fois le loyer demandé.\n");
        if ((35<Joueures[i].position)&&(Joueures[i].position < 5))
        {
            Joueures[i].position=5;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);
                }
            }
        }
        if ((5<Joueures[i].position)&&(Joueures[i].position <15 ))
        {
            Joueures[i].position=15;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);

                }
            }
        }
        if ((15<Joueures[i].position)&&(Joueures[i].position < 25))
        {
            Joueures[i].position=25;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);
                }
            }
        }
        if ((25<Joueures[i].position)&&(Joueures[i].position < 35))
        {
            Joueures[i].position=35;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);

                }
            }
        }
    }
    else if (de1==16)
    {
        printf("Avancez jusqu'a la gare la plus proche.\n");//
        printf("Si elle n'appartient a personne, vous pouvez l'acheter aupres de la banque.\n");
        printf("Si elle appartient a un autre joueur, vous devez lui payez deux fois le loyer demandé.\n");
        if ((35<Joueures[i].position)&&(Joueures[i].position < 5))
        {
            Joueures[i].position=5;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);
                }
            }
        }
        if ((5<Joueures[i].position)&&(Joueures[i].position <15 ))
        {
            Joueures[i].position=15;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);

                }
            }
        }
        if ((15<Joueures[i].position)&&(Joueures[i].position < 25))
        {
            Joueures[i].position=25;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);
                }
            }
        }
        if ((25<Joueures[i].position)&&(Joueures[i].position < 35))
        {
            Joueures[i].position=35;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("Vous devez payer 2 fois le loyer demander\n");//
                    loyer(i,nJoueures);
                    loyer(i,nJoueures);

                }
            }
        }
    }
}

//carte de communauté
void carteCaissedeCommunaute(int player, int nJoueures)
{
    int i=player;
    int j=0;
    int de1=0;

    de1 = (rand() % 16) + 1;//

    if(de1==1)
    {
        for (j=0;j<nJoueures;j++)
        {
            if ((Joueures[j].carteSortiedePrison==0)&&(Joueures[i].carteSortiedePrison==0))
            {
                Joueures[i].carteSortiedePrison=1;
                printf("Vous avez piochez une carte sortie de prison.\n");
            }
            else
            {
                de1 = (rand() % 6) + 1;//
            }
        }
    }
    else if (de1==2)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Vous avez gagne le deuxieme prix de beaute. Recevez 10M.");//
        fflush(stdin);//
        getchar();//
        Joueures[i].compte += 10;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==3)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("C'est votre anniversaire : chaque joueur doit vous donner 10M.");//
        for (j=0;j<nJoueures;j++)
        {
            Joueures[i].compte += 10;//
            Joueures[j].compte -= 10;//
            printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
            printf("\nCompte actuel de %s : %d", Joueures[j].Nom,Joueures[j].compte);//
        }
    }
    else if (de1==4)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Vous heritez de 100M.");//
        Joueures[i].compte += 100;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//

    }
    else if (de1==5)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Avancez jusqu'a la case depart (recevez 200M).");//
        Joueures[i].position = 0;//
    }
    else if (de1==6)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Les impots vous remboursent 20M.");//
        Joueures[i].compte += 20;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==7)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Votre assurance vie vous rapporte. Recevez 100M.");//
        Joueures[i].compte += 100;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==8)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Votre placement vous rapporte. Recevez 100M.");//
        Joueures[i].compte += 100;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==9)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Erreur de la banque en votre faveur.Recevez 200M.");//
        Joueures[i].compte += 200;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==10)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("La vente de votre stock vous rapporte 50M.");//
        Joueures[i].compte += 50;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==11)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Commission d'expert immobilier. Recevez 25M");//
        Joueures[i].compte += 25;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }

    else if (de1==12)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Allez en prison");//
        Joueures[i].prison = true;//
    }
    else if (de1==13)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Vous devez faire des travaux sur vos proprietes : versez 40M pour chaque maison et 115M pour chaque hotel que vous possedez.");//
        for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    Joueures[i].compte -= 115*Proprietes[j].nombreHotel;//
                    Joueures[i].compte -= 40*Proprietes[j].nombreDeMaisons;//
                }
        }

        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==14)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Frais d'hospitalisation. Payez 100M");//
        Joueures[i].compte -= 100;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==15)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Visite chez le medecin : Payez 50M.");//
        Joueures[i].compte -= 50;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==16)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Frais de scolarite. Payez 50M");//
        Joueures[i].compte -= 50;//
        printf("\nCompte actuel de %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
}

int monopolyfr()
{
    system("cls");//
	//initialiseTable();//
	//affichePlateau();

	srand (time(NULL));

	//Début du jeu
	printf(" ____________________________________________________________________________\n");
	printf("|                                                                            |\n");
	printf("|                                  MONOPOLY                                  |\n");
	printf("|____________________________________________________________________________|\n");
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



	Batiments.nMaison =32;
	Batiments.nHotel =12;
	printf("\n====================================================================\n");
	fflush(stdin);//

	int plateau;//

	printf("Avec quel plateau voulez vous jouer ?\n");//
	printf("1 - Paris\n");//
	printf("2 - Personalise\n");//
	printf("3 - Londre\n");//
	printf("4 - Asterix\n");//
	printf("5 - Friends\n");//
	scanf("%d", &plateau);//
	if (plateau==1)
    {
       initialiseTable();//
    }
    if (plateau==2)
    {
       initialiseTable1();//
    }
    if (plateau==3)
    {
       initialiseTable2();//
    }
    if (plateau==4)
    {
       initialiseTable3();//
    }
    if (plateau==5)
    {
       initialiseTable4();//
    }
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
