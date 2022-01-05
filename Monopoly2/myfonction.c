#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>
#include "mabiblio.h"


void initialiseTableEn()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Boulevard de Belleville");//
	strcpy(Proprietes[1].Couleur, "Brown");//
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
	strcpy(Proprietes[1].proprietaire, "no owner");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	strcpy(Proprietes[3].Nom, "Rue Lecourbe");//
	strcpy(Proprietes[3].Couleur, "Brown");//
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
	strcpy(Proprietes[3].proprietaire, "no owner");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "INCOME TAX");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Gare Montparnasse");//
	strcpy(Proprietes[5].Couleur, "Station");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "no owner");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Rue de Vaugirard");//
	strcpy(Proprietes[6].Couleur, "Light blue");//
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
	strcpy(Proprietes[6].proprietaire, "no owner");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	strcpy(Proprietes[8].Nom, "Rue de Courcelles");//
	strcpy(Proprietes[8].Couleur, "Light blue");//
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
	strcpy(Proprietes[8].proprietaire, "no owner");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Avenue de la Republique");//
	strcpy(Proprietes[9].Couleur, "Light blue");//
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
	strcpy(Proprietes[9].proprietaire, "no owner");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	strcpy(Proprietes[11].Nom, "Boulevard de la Villette");//
	strcpy(Proprietes[11].Couleur, "Pink");//
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
	strcpy(Proprietes[11].proprietaire, "no owner");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Compangnie de distribution d'electricite");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "no owner");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Avenue de Neuilly");//
	strcpy(Proprietes[13].Couleur, "Pink");//
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
	strcpy(Proprietes[13].proprietaire, "no owner");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Rue de Paradis");//
	strcpy(Proprietes[14].Couleur, "Pink");//
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
	strcpy(Proprietes[14].proprietaire, "no owner");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Gare de Lyon");//
	strcpy(Proprietes[15].Couleur, "Station");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "no owner");//

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
	strcpy(Proprietes[16].proprietaire, "no owner");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

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
	strcpy(Proprietes[18].proprietaire, "no owner");//

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
	strcpy(Proprietes[19].proprietaire, "no owner");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	strcpy(Proprietes[21].Nom, "Avenue de Matignon");//
	strcpy(Proprietes[21].Couleur, "Red");//
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
	strcpy(Proprietes[21].proprietaire, "no owner");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	strcpy(Proprietes[23].Nom, "Boulevard Malesherbes");//
	strcpy(Proprietes[23].Couleur, "Red");//
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
	strcpy(Proprietes[23].proprietaire, "no owner");//

	//Case 24
	strcpy(Proprietes[24].Nom, "Avenue Henri-Martin");//
	strcpy(Proprietes[24].Couleur, "Red");//
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
	strcpy(Proprietes[24].proprietaire, "no owner");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Gare du Nord");//
	strcpy(Proprietes[25].Couleur, "Station");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "no owner");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Faubourg Saint-Honore");//
	strcpy(Proprietes[26].Couleur, "Yellow");//
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
	strcpy(Proprietes[26].proprietaire, "no owner");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Place de la Bourse");//
	strcpy(Proprietes[27].Couleur, "Yellow");//
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
	strcpy(Proprietes[27].proprietaire, "no owner");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Compagnie de distribution des eaux ");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "no owner");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Rue la Fayette");//
	strcpy(Proprietes[29].Couleur, "Yellow");//
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
	strcpy(Proprietes[29].proprietaire, "no owner");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	strcpy(Proprietes[31].Nom, "Avenue de Breteuil");//
	strcpy(Proprietes[31].Couleur, "Green");//
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
	strcpy(Proprietes[31].proprietaire, "no owner");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Avenue Foch");//
	strcpy(Proprietes[32].Couleur, "Green");//
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
	strcpy(Proprietes[32].proprietaire, "no owner");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	strcpy(Proprietes[34].Nom, "Boulevard des Capucines");//
	strcpy(Proprietes[34].Couleur, "Green");//
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
	strcpy(Proprietes[34].proprietaire, "no owner");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Gare Saint-Lazare");//
	strcpy(Proprietes[35].Couleur, "Station");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "no owner");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	strcpy(Proprietes[37].Nom, "Avenue des Champs-Elysees");//
	strcpy(Proprietes[37].Couleur, "Dark blue");//
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
	strcpy(Proprietes[37].proprietaire, "no owner");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "SUPER TAX");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	strcpy(Proprietes[39].Nom, "Rue de la Paix");//
	strcpy(Proprietes[39].Couleur, "Dark blue");//
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
	strcpy(Proprietes[39].proprietaire, "no owner");//
}

void initialiseTable1En()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	printf("Color : Brown\n");//
	printf("What is the name of the 1 property: ");//
	scanf("%s",Proprietes[1].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[1].Couleur, "Brown");//
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
	strcpy(Proprietes[1].proprietaire, "no owner");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	printf("Color : Brown\n");//
	printf("What is the name of the 2 property: ");//
	scanf("%s",Proprietes[3].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[3].Couleur, "Brown");//
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
	strcpy(Proprietes[3].proprietaire, "no owner");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "INCOME TAX");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	printf("Color : Station\n");//
	printf("What is the name of the 1 station: ");//
	scanf("%s",Proprietes[5].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[5].Couleur, "Station");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "no owner");//

	//Case 6
	printf("Color : Light blue\n");//
	printf("What is the name of the 3 property: ");//
	scanf("%s",Proprietes[6].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[6].Couleur, "Light blue");//
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
	strcpy(Proprietes[6].proprietaire, "no owner");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	printf("Color : Light blue\n");//
	printf("What is the name of the 4 property: ");//
	scanf("%s",Proprietes[8].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[8].Couleur, "Light blue");//
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
	strcpy(Proprietes[8].proprietaire, "no owner");//

	//Case 9
	printf("Color : Light blue\n");//
	printf("What is the name of the 5 property: ");//
	scanf("%s",Proprietes[9].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[9].Couleur, "Light blue");//
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
	strcpy(Proprietes[9].proprietaire, "no owner");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	printf("Color : Pink\n");//
	printf("What is the name of the 6 property: ");//
	scanf("%s",Proprietes[11].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[11].Couleur, "Pink");//
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
	strcpy(Proprietes[11].proprietaire, "no owner");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	printf("Color : Services\n");//
	printf("What is the name of the 1 property: ");//
	scanf("%s",Proprietes[12].Nom);
	fflush(stdin);
	printf("\n");////
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "no owner");//

	//Case 13
	printf("Color : Pink\n");//
	printf("What is the name of the 7 property: ");//
	scanf("%s",Proprietes[13].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[13].Couleur, "Pink");//
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
	strcpy(Proprietes[13].proprietaire, "no owner");//

	//Case 14
	printf("Color : Pink\n");//
	printf("What is the name of the 8 property: ");//
	scanf("%s",Proprietes[14].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[14].Couleur, "Pink");//
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
	strcpy(Proprietes[14].proprietaire, "no owner");//

	//Case 15 - GARE
	printf("Color : Station\n");//
	printf("What is the name of the 2 station: ");//
	scanf("%s",Proprietes[15].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[15].Couleur, "Station");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "no owner");//

	//Case 16
	printf("Color : Orange\n");//
	printf("What is the name of the 9 property: ");//
	scanf("%s",Proprietes[16].Nom);
	fflush(stdin);
	printf("\n");//
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
	strcpy(Proprietes[16].proprietaire, "no owner");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

	//Case 18
	printf("Color : Orange\n");//
	printf("What is the name of the 10 property: ");//
	scanf("%s",Proprietes[18].Nom);
	fflush(stdin);
	printf("\n");//
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
	strcpy(Proprietes[18].proprietaire, "no owner");//

	//Case 19
	printf("Color : Orange\n");//
	printf("What is the name of the 11 property: ");//
	scanf("%s",Proprietes[19].Nom);
	fflush(stdin);
	printf("\n");//
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
	strcpy(Proprietes[19].proprietaire, "no owner");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	printf("Color : Red\n");//
	printf("What is the name of the 12 property: ");//
	scanf("%s",Proprietes[21].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[21].Couleur, "Red");//
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
	strcpy(Proprietes[21].proprietaire, "no owner");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	printf("Color : Red\n");//
	printf("What is the name of the 13 property: ");//
	scanf("%s",Proprietes[23].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[23].Couleur, "Red");//
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
	strcpy(Proprietes[23].proprietaire, "no owner");//

	//Case 24
	printf("Color : Red\n");//
	printf("What is the name of the 14 property: ");//
	scanf("%s",Proprietes[24].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[24].Couleur, "Red");//
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
	strcpy(Proprietes[24].proprietaire, "no owner");//

	//Case 25 - GARE
	printf("Color : Station\n");//
	printf("What is the name of the 3 station: ");//
	scanf("%s",Proprietes[25].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[25].Couleur, "Station");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "no owner");//

	//Case 26
	printf("Color : Yellow\n");//
	printf("What is the name of the 15 property: ");//
	scanf("%s",Proprietes[26].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[26].Couleur, "Yellow");//
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
	strcpy(Proprietes[26].proprietaire, "no owner");//

	//Case 27
	printf("Color : Yellow\n");//
	printf("What is the name of the 16 property: ");//
	scanf("%s",Proprietes[27].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[27].Couleur, "Yellow");//
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
	strcpy(Proprietes[27].proprietaire, "no owner");//

	//Case 28 - COMPAGNIE DE L'EAU
	printf("Color : Services\n");//
	printf("What is the name of the 2 services: ");//
	scanf("%s",Proprietes[28].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "no owner");//

	//Case 29
	printf("Color : Yellow\n");//
	printf("What is the name of the 17 property: ");//
	scanf("%s",Proprietes[29].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[29].Couleur, "Yellow");//
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
	strcpy(Proprietes[29].proprietaire, "no owner");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	printf("Color : Green\n");//
	printf("What is the name of the 18 property: ");//
	scanf("%s",Proprietes[31].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[31].Couleur, "Green");//
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
	strcpy(Proprietes[31].proprietaire, "no owner");//

	//Case 32
	printf("Color : Green\n");//
	printf("What is the name of the 19 property: ");//
	scanf("%s",Proprietes[32].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[32].Couleur, "Green");//
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
	strcpy(Proprietes[32].proprietaire, "no owner");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	printf("Color : Green\n");//
	printf("What is the name of the 20 property: ");//
	scanf("%s",Proprietes[34].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[34].Couleur, "Green");//
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
	strcpy(Proprietes[34].proprietaire, "no owner");//

	//Case 35 - GARE
	printf("Color : Station\n");//
	printf("What is the name of the 4 station: ");//
	scanf("%s",Proprietes[35].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[35].Couleur, "Station");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "no owner");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	printf("Color : Dark blue\n");//
	printf("What is the name of the 21 property: ");//
	scanf("%s",Proprietes[37].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[37].Couleur, "Dark blue");//
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
	strcpy(Proprietes[37].proprietaire, "no owner");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "SUPER TAX");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	printf("Color : Dark blue\n");//
	printf("What is the name of the 22 property: ");//
	scanf("%s",Proprietes[39].Nom);
	fflush(stdin);
	printf("\n");//
	strcpy(Proprietes[39].Couleur, "Dark blue");//
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
	strcpy(Proprietes[39].proprietaire, "no owner");//
}

void initialiseTable2En()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Vine street");//
	strcpy(Proprietes[1].Couleur, "Brown");//
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
	strcpy(Proprietes[1].proprietaire, "no owner");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	strcpy(Proprietes[3].Nom, "Coventry street");//
	strcpy(Proprietes[3].Couleur, "Brown");//
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
	strcpy(Proprietes[3].proprietaire, "no owner");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "INCOME TAX");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Marylebone station");//
	strcpy(Proprietes[5].Couleur, "Station");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "no owner");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Leicester square");//
	strcpy(Proprietes[6].Couleur, "Light blue");//
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
	strcpy(Proprietes[6].proprietaire, "no owner");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	strcpy(Proprietes[8].Nom, "Bow street");//
	strcpy(Proprietes[8].Couleur, "Light blue");//
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
	strcpy(Proprietes[8].proprietaire, "no owner");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Whitechapel road");//
	strcpy(Proprietes[9].Couleur, "Light blue");//
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
	strcpy(Proprietes[9].proprietaire, "no owner");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	strcpy(Proprietes[11].Nom, "The angel, islington");//
	strcpy(Proprietes[11].Couleur, "Pink");//
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
	strcpy(Proprietes[11].proprietaire, "no owner");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Electric company");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "no owner");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Trafalgar square");//
	strcpy(Proprietes[13].Couleur, "Pink");//
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
	strcpy(Proprietes[13].proprietaire, "no owner");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Northumlr'd avenue");//
	strcpy(Proprietes[14].Couleur, "Pink");//
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
	strcpy(Proprietes[14].proprietaire, "no owner");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Fenchurch St. station");//
	strcpy(Proprietes[15].Couleur, "Station");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "no owner");//

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
	strcpy(Proprietes[16].proprietaire, "no owner");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

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
	strcpy(Proprietes[18].proprietaire, "no owner");//

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
	strcpy(Proprietes[19].proprietaire, "no owner");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	strcpy(Proprietes[21].Nom, "Whitehall");//
	strcpy(Proprietes[21].Couleur, "Red");//
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
	strcpy(Proprietes[21].proprietaire, "no owner");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	strcpy(Proprietes[23].Nom, "Pentonville road");//
	strcpy(Proprietes[23].Couleur, "Red");//
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
	strcpy(Proprietes[23].proprietaire, "no owner");//

	//Case 24
	strcpy(Proprietes[24].Nom, "pall mall");//
	strcpy(Proprietes[24].Couleur, "Red");//
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
	strcpy(Proprietes[24].proprietaire, "no owner");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Kings cross station");//
	strcpy(Proprietes[25].Couleur, "Station");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "no owner");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Bond street");//
	strcpy(Proprietes[26].Couleur, "Yellow");//
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
	strcpy(Proprietes[26].proprietaire, "no owner");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Strand");//
	strcpy(Proprietes[27].Couleur, "Yellow");//
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
	strcpy(Proprietes[27].proprietaire, "no owner");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Water works");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "no owner");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Regent street");//
	strcpy(Proprietes[29].Couleur, "Yellow");//
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
	strcpy(Proprietes[29].proprietaire, "no owner");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	strcpy(Proprietes[31].Nom, "Euston road");//
	strcpy(Proprietes[31].Couleur, "Green");//
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
	strcpy(Proprietes[31].proprietaire, "no owner");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Piccadilly");//
	strcpy(Proprietes[32].Couleur, "Green");//
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
	strcpy(Proprietes[32].proprietaire, "no owner");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	strcpy(Proprietes[34].Nom, "Oxford street");//
	strcpy(Proprietes[34].Couleur, "Green");//
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
	strcpy(Proprietes[34].proprietaire, "no owner");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Liverpool St station");//
	strcpy(Proprietes[35].Couleur, "Station");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "no owner");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	strcpy(Proprietes[37].Nom, "Park lane");//
	strcpy(Proprietes[37].Couleur, "Dark blue");//
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
	strcpy(Proprietes[37].proprietaire, "no owner");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "SUPER TAX");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	strcpy(Proprietes[39].Nom, "Mayfair");//
	strcpy(Proprietes[39].Couleur, "Dark blue");//
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
	strcpy(Proprietes[39].proprietaire, "no owner");//
}

void initialiseTable3En()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "A. Jones Manure Hauling (1885)");//
	strcpy(Proprietes[1].Couleur, "Brown");//
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
	strcpy(Proprietes[1].proprietaire, "no owner");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	strcpy(Proprietes[3].Nom, "D. Jones Manure Hauling (1955)");//
	strcpy(Proprietes[3].Couleur, "Brown");//
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
	strcpy(Proprietes[3].proprietaire, "no owner");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "INCOME TAX");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Time Train (1885)");//
	strcpy(Proprietes[5].Couleur, "Station");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "no owner");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Honest Joe Statler's Horses (1885)");//
	strcpy(Proprietes[6].Couleur, "Light blue");//
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
	strcpy(Proprietes[6].proprietaire, "no owner");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	strcpy(Proprietes[8].Nom, "Statler Automotive (1955)");//
	strcpy(Proprietes[8].Couleur, "Light blue");//
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
	strcpy(Proprietes[8].proprietaire, "no owner");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Statler Automotive (2015)");//
	strcpy(Proprietes[9].Couleur, "Light blue");//
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
	strcpy(Proprietes[9].proprietaire, "no owner");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	strcpy(Proprietes[11].Nom, "Pohatchee Drive-in (1955)");//
	strcpy(Proprietes[11].Couleur, "Pink");//
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
	strcpy(Proprietes[11].proprietaire, "no owner");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Mr.Fusion");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "no owner");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Essex Theater (1985)");//
	strcpy(Proprietes[13].Couleur, "Pink");//
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
	strcpy(Proprietes[13].proprietaire, "no owner");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Holomax Theater (2015)");//
	strcpy(Proprietes[14].Couleur, "Pink");//
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
	strcpy(Proprietes[14].proprietaire, "no owner");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Biff's car(1955)");//
	strcpy(Proprietes[15].Couleur, "Station");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "no owner");//

	//Case 16
	strcpy(Proprietes[16].Nom, "Marshall Strickland's Office (1885)");//
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
	strcpy(Proprietes[16].proprietaire, "no owner");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

	//Case 18
	strcpy(Proprietes[18].Nom, "Hill Valley High School (1955)");//
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
	strcpy(Proprietes[18].proprietaire, "no owner");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Hill Valley High School (1985)");//
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
	strcpy(Proprietes[19].proprietaire, "no owner");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	strcpy(Proprietes[21].Nom, "Baines Residence (1955)");//
	strcpy(Proprietes[21].Couleur, "Red");//
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
	strcpy(Proprietes[21].proprietaire, "no owner");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	strcpy(Proprietes[23].Nom, "McFly Residence (1985)");//
	strcpy(Proprietes[23].Couleur, "Red");//
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
	strcpy(Proprietes[23].proprietaire, "no owner");//

	//Case 24
	strcpy(Proprietes[24].Nom, "McFly Residence (2015)");//
	strcpy(Proprietes[24].Couleur, "Red");//
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
	strcpy(Proprietes[24].proprietaire, "no owner");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Skateboard (1985)");//
	strcpy(Proprietes[25].Couleur, "Station");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "no owner");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Palace Saloon (1885)");//
	strcpy(Proprietes[26].Couleur, "Yellow");//
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
	strcpy(Proprietes[26].proprietaire, "no owner");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Lou's Diner (1955)");//
	strcpy(Proprietes[27].Couleur, "Yellow");//
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
	strcpy(Proprietes[27].proprietaire, "no owner");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Flux Capacitor");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "no owner");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Café 80's (2015)");//
	strcpy(Proprietes[29].Couleur, "Yellow");//
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
	strcpy(Proprietes[29].proprietaire, "no owner");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	strcpy(Proprietes[31].Nom, "Doc's Blacksmith Shop (1885)");//
	strcpy(Proprietes[31].Couleur, "Green");//
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
	strcpy(Proprietes[31].proprietaire, "no owner");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Doc's Mansion (1955)");//
	strcpy(Proprietes[32].Couleur, "Green");//
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
	strcpy(Proprietes[32].proprietaire, "no owner");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	strcpy(Proprietes[34].Nom, "Doc's Lab (1985)");//
	strcpy(Proprietes[34].Couleur, "Green");//
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
	strcpy(Proprietes[34].proprietaire, "no owner");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Hover Board (2015)");//
	strcpy(Proprietes[35].Couleur, "Station");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "no owner");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	strcpy(Proprietes[37].Nom, "Clock Tower (1885)");//
	strcpy(Proprietes[37].Couleur, "Dark blue");//
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
	strcpy(Proprietes[37].proprietaire, "no owner");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "SUPER TAX");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	strcpy(Proprietes[39].Nom, "Clock Tower (1955)");//
	strcpy(Proprietes[39].Couleur, "Dark blue");//
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
	strcpy(Proprietes[39].proprietaire, "no owner");//
}

void initialiseTable4En()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Nursery");//
	strcpy(Proprietes[1].Couleur, "Brown");//
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
	strcpy(Proprietes[1].proprietaire, "no owner");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	strcpy(Proprietes[3].Nom, "Mushroom House");//
	strcpy(Proprietes[3].Couleur, "Brown");//
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
	strcpy(Proprietes[3].proprietaire, "no owner");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "INCOME TAX");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Snail");//
	strcpy(Proprietes[5].Couleur, "Station");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "no owner");//

	//Case 6
	strcpy(Proprietes[6].Nom, "New's Stand");//
	strcpy(Proprietes[6].Couleur, "Light blue");//
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
	strcpy(Proprietes[6].proprietaire, "no owner");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	strcpy(Proprietes[8].Nom, "Clinic");//
	strcpy(Proprietes[8].Couleur, "Light blue");//
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
	strcpy(Proprietes[8].proprietaire, "no owner");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Clothing Store");//
	strcpy(Proprietes[9].Couleur, "Light blue");//
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
	strcpy(Proprietes[9].proprietaire, "no owner");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	strcpy(Proprietes[11].Nom, "Field");//
	strcpy(Proprietes[11].Couleur, "Pink");//
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
	strcpy(Proprietes[11].proprietaire, "no owner");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Windmill");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "no owner");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Woodshop");//
	strcpy(Proprietes[13].Couleur, "Pink");//
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
	strcpy(Proprietes[13].proprietaire, "no owner");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Mine");//
	strcpy(Proprietes[14].Couleur, "Pink");//
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
	strcpy(Proprietes[14].proprietaire, "no owner");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Train");//
	strcpy(Proprietes[15].Couleur, "Station");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "no owner");//

	//Case 16
	strcpy(Proprietes[16].Nom, "Wishing Well");//
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
	strcpy(Proprietes[16].proprietaire, "no owner");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

	//Case 18
	strcpy(Proprietes[18].Nom, "Concert Hall");//
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
	strcpy(Proprietes[18].proprietaire, "no owner");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Studio");//
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
	strcpy(Proprietes[19].proprietaire, "no owner");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	strcpy(Proprietes[21].Nom, "Foregy");//
	strcpy(Proprietes[21].Couleur, "Red");//
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
	strcpy(Proprietes[21].proprietaire, "no owner");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	strcpy(Proprietes[23].Nom, "Sarsaparilla Fields");//
	strcpy(Proprietes[23].Couleur, "Red");//
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
	strcpy(Proprietes[23].proprietaire, "no owner");//

	//Case 24
	strcpy(Proprietes[24].Nom, "Fishing Hole");//
	strcpy(Proprietes[24].Couleur, "Red");//
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
	strcpy(Proprietes[24].proprietaire, "no owner");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Boat");//
	strcpy(Proprietes[25].Couleur, "Station");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "no owner");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Gift Shop");//
	strcpy(Proprietes[26].Couleur, "Yellow");//
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
	strcpy(Proprietes[26].proprietaire, "no owner");//

	//Case 27
	strcpy(Proprietes[27].Nom, "River");//
	strcpy(Proprietes[27].Couleur, "Yellow");//
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
	strcpy(Proprietes[27].proprietaire, "no owner");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Dam");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "no owner");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Bakery");//
	strcpy(Proprietes[29].Couleur, "Yellow");//
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
	strcpy(Proprietes[29].proprietaire, "no owner");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	strcpy(Proprietes[31].Nom, "Weight Room");//
	strcpy(Proprietes[31].Couleur, "Green");//
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
	strcpy(Proprietes[31].proprietaire, "no owner");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Workshop");//
	strcpy(Proprietes[32].Couleur, "Green");//
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
	strcpy(Proprietes[32].proprietaire, "no owner");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	strcpy(Proprietes[34].Nom, "Library");//
	strcpy(Proprietes[34].Couleur, "Green");//
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
	strcpy(Proprietes[34].proprietaire, "no owner");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Plane");//
	strcpy(Proprietes[35].Couleur, "Station");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "no owner");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	strcpy(Proprietes[37].Nom, "Flower Garden");//
	strcpy(Proprietes[37].Couleur, "Dark blue");//
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
	strcpy(Proprietes[37].proprietaire, "no owner");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "SUPER TAX");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	strcpy(Proprietes[39].Nom, "Papa Smurf's Lab");//
	strcpy(Proprietes[39].Couleur, "Dark blue");//
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
	strcpy(Proprietes[39].proprietaire, "no owner");//
}

void initialiseTable5En()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Salle P315a-E2");//
	strcpy(Proprietes[1].Couleur, "Brown");//
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
	strcpy(Proprietes[1].proprietaire, "no owner");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	strcpy(Proprietes[3].Nom, "Salle P315b-E2");//
	strcpy(Proprietes[3].Couleur, "Brown");//
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
	strcpy(Proprietes[3].proprietaire, "no owner");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "INCOME TAX");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Place du Docteur Hayem - Radio France Bus-70");//
	strcpy(Proprietes[5].Couleur, "Station");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "no owner");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Salle P317-E2");//
	strcpy(Proprietes[6].Couleur, "Light blue");//
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
	strcpy(Proprietes[6].proprietaire, "no owner");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	strcpy(Proprietes[8].Nom, "Salle P406-E2");//
	strcpy(Proprietes[8].Couleur, "Light blue");//
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
	strcpy(Proprietes[8].proprietaire, "no owner");//

	//Case 9
	strcpy(Proprietes[9].Nom, "Salle P417-E2");//
	strcpy(Proprietes[9].Couleur, "Light blue");//
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
	strcpy(Proprietes[9].proprietaire, "no owner");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	strcpy(Proprietes[11].Nom, "Salle C-0.13-E3");//
	strcpy(Proprietes[11].Couleur, "Pink");//
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
	strcpy(Proprietes[11].proprietaire, "no owner");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "Infirmerie");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "no owner");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Salle C-0.14-E3");//
	strcpy(Proprietes[13].Couleur, "Pink");//
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
	strcpy(Proprietes[13].proprietaire, "no owner");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Fablab E2");//
	strcpy(Proprietes[14].Couleur, "Pink");//
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
	strcpy(Proprietes[14].proprietaire, "no owner");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Charles Michels Metros-10");//
	strcpy(Proprietes[15].Couleur, "Station");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "no owner");//

	//Case 16
	strcpy(Proprietes[16].Nom, "Salle C-1.06-E3");//
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
	strcpy(Proprietes[16].proprietaire, "no owner");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

	//Case 18
	strcpy(Proprietes[18].Nom, "Cafetaria E2");//
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
	strcpy(Proprietes[18].proprietaire, "no owner");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Salle C-3.20-E3");//
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
	strcpy(Proprietes[19].proprietaire, "no owner");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	strcpy(Proprietes[21].Nom, "Salle G002-E4");//
	strcpy(Proprietes[21].Couleur, "Red");//
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
	strcpy(Proprietes[21].proprietaire, "no owner");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	strcpy(Proprietes[23].Nom, "Accueil E4");//
	strcpy(Proprietes[23].Couleur, "Red");//
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
	strcpy(Proprietes[23].proprietaire, "no owner");//

	//Case 24
	strcpy(Proprietes[24].Nom, "Salle G009-E4");//
	strcpy(Proprietes[24].Couleur, "Red");//
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
	strcpy(Proprietes[24].proprietaire, "no owner");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Champ de Mars Tour Eiffel RER-C");//
	strcpy(Proprietes[25].Couleur, "Station");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "no owner");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Salle G007-E4");//
	strcpy(Proprietes[26].Couleur, "Yellow");//
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
	strcpy(Proprietes[26].proprietaire, "no owner");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Salle P445-E2");//
	strcpy(Proprietes[27].Couleur, "Yellow");//
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
	strcpy(Proprietes[27].proprietaire, "no owner");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "Scolarite");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "no owner");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Salle P446-E2");//
	strcpy(Proprietes[29].Couleur, "Yellow");//
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
	strcpy(Proprietes[29].proprietaire, "no owner");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	strcpy(Proprietes[31].Nom, "Terrasse-E0");//
	strcpy(Proprietes[31].Couleur, "Green");//
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
	strcpy(Proprietes[31].proprietaire, "no owner");//

	//Case 32
	strcpy(Proprietes[32].Nom, "Salle P347-E2");//
	strcpy(Proprietes[32].Couleur, "Green");//
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
	strcpy(Proprietes[32].proprietaire, "no owner");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	strcpy(Proprietes[34].Nom, "Salle C-3.18-E3");//
	strcpy(Proprietes[34].Couleur, "Green");//
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
	strcpy(Proprietes[34].proprietaire, "no owner");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Bir-Hakeim Metros-6");//
	strcpy(Proprietes[35].Couleur, "Station");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "no owner");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	strcpy(Proprietes[37].Nom, "Salle EM009-Amphithéâtre-E1");//
	strcpy(Proprietes[37].Couleur, "Dark blue");//
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
	strcpy(Proprietes[37].proprietaire, "no owner");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "SUPER TAX");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	strcpy(Proprietes[39].Nom, "Salle EM010-Amphithéâtre-E1");//
	strcpy(Proprietes[39].Couleur, "Dark blue");//
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
	strcpy(Proprietes[39].proprietaire, "no owner");//
}

void initialiseTable6En()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "GO TO JAIL");//
	Proprietes[1].prix = 0;//
    strcpy(Proprietes[1].proprietaire, "Forbidden");


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	strcpy(Proprietes[3].Nom, "GO TO JAIL");//
	Proprietes[3].prix = 0;//
    strcpy(Proprietes[3].proprietaire, "Forbidden");

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "GO TO JAIL");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "GO TO JAIL");//
	Proprietes[5].prix = 0;//
    strcpy(Proprietes[5].proprietaire, "Forbidden");

	//Case 6
	strcpy(Proprietes[6].Nom, "GO TO JAIL");//
	Proprietes[6].prix = 0;//
    strcpy(Proprietes[6].proprietaire, "Forbidden");

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	strcpy(Proprietes[8].Nom, "GO TO JAIL");//
	Proprietes[8].prix = 0;//
    strcpy(Proprietes[8].proprietaire, "Forbidden");

	//Case 9
	strcpy(Proprietes[9].Nom, "GO TO JAIL");//
	Proprietes[9].prix = 0;//
    strcpy(Proprietes[9].proprietaire, "Forbidden");

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	strcpy(Proprietes[11].Nom, "GO TO JAIL");//
	Proprietes[11].prix = 0;//
    strcpy(Proprietes[11].proprietaire, "Forbidden");

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "GO TO JAIL");//
	Proprietes[12].prix = 0;//
    strcpy(Proprietes[12].proprietaire, "Forbidden");

	//Case 13
	strcpy(Proprietes[13].Nom, "GO TO JAIL");//
	Proprietes[13].prix = 0;//
    strcpy(Proprietes[13].proprietaire, "Forbidden");

	//Case 14
	strcpy(Proprietes[14].Nom, "GO TO JAIL");//
	Proprietes[14].prix = 0;//
    strcpy(Proprietes[14].proprietaire, "Forbidden");

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "GO TO JAIL");//
	Proprietes[15].prix = 0;//
    strcpy(Proprietes[15].proprietaire, "Forbidden");

	//Case 16
	strcpy(Proprietes[16].Nom, "GO TO JAIL");//
	Proprietes[16].prix = 0;//
    strcpy(Proprietes[16].proprietaire, "Forbidden");

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

	//Case 18
	strcpy(Proprietes[18].Nom, "GO TO JAIL");//
	Proprietes[18].prix = 0;//
    strcpy(Proprietes[18].proprietaire, "Forbidden");

	//Case 19
	strcpy(Proprietes[19].Nom, "GO TO JAIL");//
	Proprietes[19].prix = 0;//
    strcpy(Proprietes[19].proprietaire, "Forbidden");

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	strcpy(Proprietes[21].Nom, "GO TO JAIL");//
	Proprietes[21].prix = 0;//
    strcpy(Proprietes[21].proprietaire, "Forbidden");

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	strcpy(Proprietes[23].Nom, "GO TO JAIL");//
	Proprietes[23].prix = 0;//
    strcpy(Proprietes[23].proprietaire, "Forbidden");

	//Case 24
	strcpy(Proprietes[24].Nom, "GO TO JAIL");//
	Proprietes[24].prix = 0;//
    strcpy(Proprietes[24].proprietaire, "Forbidden");

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "GO TO JAIL");//
	Proprietes[25].prix = 0;//
    strcpy(Proprietes[25].proprietaire, "Forbidden");

	//Case 26
	strcpy(Proprietes[26].Nom, "GO TO JAIL");//
	Proprietes[26].prix = 0;//
    strcpy(Proprietes[26].proprietaire, "Forbidden");

	//Case 27
	strcpy(Proprietes[27].Nom, "GO TO JAIL");//
	Proprietes[27].prix = 0;//
    strcpy(Proprietes[27].proprietaire, "Forbidden");

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "GO TO JAIL");//
	Proprietes[28].prix = 0;//
    strcpy(Proprietes[28].proprietaire, "Forbidden");

	//Case 29
	strcpy(Proprietes[29].Nom, "GO TO JAIL");//
	Proprietes[29].prix = 0;//
    strcpy(Proprietes[29].proprietaire, "Forbidden");

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	strcpy(Proprietes[31].Nom, "GO TO JAIL");//
	Proprietes[31].prix = 0;//
    strcpy(Proprietes[31].proprietaire, "Forbidden");

	//Case 32
	strcpy(Proprietes[32].Nom, "GO TO JAIL");//
	Proprietes[32].prix = 0;//
    strcpy(Proprietes[32].proprietaire, "Forbidden");

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	strcpy(Proprietes[34].Nom, "GO TO JAIL");//
	Proprietes[34].prix = 0;//
    strcpy(Proprietes[34].proprietaire, "Forbidden");

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "GO TO JAIL");//
	Proprietes[35].prix = 0;//
    strcpy(Proprietes[35].proprietaire, "Forbidden");

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	strcpy(Proprietes[37].Nom, "GO TO JAIL");//
	Proprietes[37].prix = 0;//
    strcpy(Proprietes[37].proprietaire, "Forbidden");

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "GO TO JAIL");//
	Proprietes[38].prix = 0;//
    strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	strcpy(Proprietes[39].Nom, "GO TO JAIL");//
	Proprietes[39].prix = 0;//
    strcpy(Proprietes[39].proprietaire, "Forbidden");
}

void initialiseTable7En()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "Start");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Dr.No");//
	strcpy(Proprietes[1].Couleur, "Brown");//
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
	strcpy(Proprietes[1].proprietaire, "no owner");//


	//Case 2 - Caisse de communaute
	strcpy(Proprietes[2].Nom, "Community Chest");//
	Proprietes[2].prix = 0;//
    strcpy(Proprietes[2].proprietaire, "Forbidden");

	//Case 3
	strcpy(Proprietes[3].Nom, "From Russia with Love");//
	strcpy(Proprietes[3].Couleur, "Brown");//
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
	strcpy(Proprietes[3].proprietaire, "no owner");//

	//Case 4 - IMPÔT SUR LE CAPITAL (M200)
	strcpy(Proprietes[4].Nom, "INCOME TAX");//
	Proprietes[4].prix = 0;//
    strcpy(Proprietes[4].proprietaire, "Forbidden");

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Aston Martin DBS");//
	strcpy(Proprietes[5].Couleur, "Station");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "no owner");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Goldfinger");//
	strcpy(Proprietes[6].Couleur, "Light blue");//
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
	strcpy(Proprietes[6].proprietaire, "no owner");//

	//Case 7 - CHANCE
	strcpy(Proprietes[7].Nom, "CHANCE");//
	Proprietes[7].prix = 0;//
	strcpy(Proprietes[7].proprietaire, "Forbidden");

	//Case 8
	strcpy(Proprietes[8].Nom, "Thunderball");//
	strcpy(Proprietes[8].Couleur, "Light blue");//
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
	strcpy(Proprietes[8].proprietaire, "no owner");//

	//Case 9
	strcpy(Proprietes[9].Nom, "You only live twice");//
	strcpy(Proprietes[9].Couleur, "Light blue");//
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
	strcpy(Proprietes[9].proprietaire, "no owner");//

	//Case 10 - PRISON - VISITEUR
	strcpy(Proprietes[10].Nom, "JAIL - VISITOR");//
	Proprietes[10].prix = 0;//
	strcpy(Proprietes[10].proprietaire, "Forbidden");

	//Case 11
	strcpy(Proprietes[11].Nom, "On her Majesty Secret Service");//
	strcpy(Proprietes[11].Couleur, "Pink");//
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
	strcpy(Proprietes[11].proprietaire, "no owner");//

	//Case 12 - COMPAGNIE D'ELETRECITE
	strcpy(Proprietes[12].Nom, "M.");//
	strcpy(Proprietes[12].Couleur, "Services");//
	Proprietes[12].prix = 150;//
	Proprietes[12].hypotheque = false;//
	strcpy(Proprietes[12].proprietaire, "no owner");//

	//Case 13
	strcpy(Proprietes[13].Nom, "Diamonds are forever");//
	strcpy(Proprietes[13].Couleur, "Pink");//
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
	strcpy(Proprietes[13].proprietaire, "no owner");//

	//Case 14
	strcpy(Proprietes[14].Nom, "Live and Let die");//
	strcpy(Proprietes[14].Couleur, "Pink");//
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
	strcpy(Proprietes[14].proprietaire, "no owner");//

	//Case 15 - GARE
	strcpy(Proprietes[15].Nom, "Mustang Mach 1");//
	strcpy(Proprietes[15].Couleur, "Station");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "no owner");//

	//Case 16
	strcpy(Proprietes[16].Nom, "The man with the golden gun");//
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
	strcpy(Proprietes[16].proprietaire, "no owner");//

	//Case 17 - Caisse de communaute
	strcpy(Proprietes[17].Nom, "Community Chest");//
	Proprietes[17].prix = 0;//
	strcpy(Proprietes[17].proprietaire, "Forbidden");

	//Case 18
	strcpy(Proprietes[18].Nom, "The spy who loved me");//
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
	strcpy(Proprietes[18].proprietaire, "no owner");//

	//Case 19
	strcpy(Proprietes[19].Nom, "Moonraker");//
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
	strcpy(Proprietes[19].proprietaire, "no owner");//

	//Case 20 - PARKING GRATUIT
	strcpy(Proprietes[20].Nom, "FREE PARKING");//
	Proprietes[20].prix = 0;//
	strcpy(Proprietes[20].proprietaire, "Forbidden");

	//Case 21
	strcpy(Proprietes[21].Nom, "For your eyes only");//
	strcpy(Proprietes[21].Couleur, "Red");//
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
	strcpy(Proprietes[21].proprietaire, "no owner");//

	//Case 22 - CHANCE
	strcpy(Proprietes[22].Nom, "CHANCE");//
	Proprietes[22].prix = 0;//
	strcpy(Proprietes[22].proprietaire, "Forbidden");

	//Case 23
	strcpy(Proprietes[23].Nom, "Octopussy");//
	strcpy(Proprietes[23].Couleur, "Red");//
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
	strcpy(Proprietes[23].proprietaire, "no owner");//

	//Case 24
	strcpy(Proprietes[24].Nom, "A View to a kill");//
	strcpy(Proprietes[24].Couleur, "Red");//
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
	strcpy(Proprietes[24].proprietaire, "no owner");//

	//Case 25 - GARE
	strcpy(Proprietes[25].Nom, "Lotus Esprit");//
	strcpy(Proprietes[25].Couleur, "Station");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "no owner");//

	//Case 26
	strcpy(Proprietes[26].Nom, "The living Daylights");//
	strcpy(Proprietes[26].Couleur, "Yellow");//
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
	strcpy(Proprietes[26].proprietaire, "no owner");//

	//Case 27
	strcpy(Proprietes[27].Nom, "Licence to kill");//
	strcpy(Proprietes[27].Couleur, "Yellow");//
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
	strcpy(Proprietes[27].proprietaire, "no owner");//

	//Case 28 - COMPAGNIE DE L'EAU
	strcpy(Proprietes[28].Nom, "James Bond");//
	strcpy(Proprietes[28].Couleur, "Services");//
	Proprietes[28].prix = 150;//
	Proprietes[28].hypotheque = false;//
	strcpy(Proprietes[28].proprietaire, "no owner");//

	//Case 29
	strcpy(Proprietes[29].Nom, "Goldeneye");//
	strcpy(Proprietes[29].Couleur, "Yellow");//
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
	strcpy(Proprietes[29].proprietaire, "no owner");//

	//Case 30 - VA EN PRISON
	strcpy(Proprietes[30].Nom, "GO TO JAIL");//
	Proprietes[30].prix = 0;//
    strcpy(Proprietes[30].proprietaire, "Forbidden");

	//Case 31
	strcpy(Proprietes[31].Nom, "Tomorrow never dies");//
	strcpy(Proprietes[31].Couleur, "Green");//
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
	strcpy(Proprietes[31].proprietaire, "no owner");//

	//Case 32
	strcpy(Proprietes[32].Nom, "The world is not enough");//
	strcpy(Proprietes[32].Couleur, "Green");//
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
	strcpy(Proprietes[32].proprietaire, "no owner");//

	//Case 33 - Caisse de communaute
	strcpy(Proprietes[33].Nom, "Community Chest");//
	Proprietes[33].prix = 0;//
	strcpy(Proprietes[33].proprietaire, "Forbidden");

	//Case 34
	strcpy(Proprietes[34].Nom, "Die another day");//
	strcpy(Proprietes[34].Couleur, "Green");//
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
	strcpy(Proprietes[34].proprietaire, "no owner");//

	//Case 35 - GARE
	strcpy(Proprietes[35].Nom, "Aston Martin DB5");//
	strcpy(Proprietes[35].Couleur, "Station");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "no owner");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//
	strcpy(Proprietes[36].proprietaire, "Forbidden");

	//Case 37
	strcpy(Proprietes[37].Nom, "Casino Royale");//
	strcpy(Proprietes[37].Couleur, "Dark blue");//
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
	strcpy(Proprietes[37].proprietaire, "no owner");//

	//Case 38 - TAXE DE LUXE
	strcpy(Proprietes[38].Nom, "SUPER TAX");//
	Proprietes[38].prix = 0;//
	strcpy(Proprietes[38].proprietaire, "Forbidden");

	//Case 39
	strcpy(Proprietes[39].Nom, "Quantum of Solace");//
	strcpy(Proprietes[39].Couleur, "Dark blue");//
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
	strcpy(Proprietes[39].proprietaire, "no owner");//
}

void affichePlateauEn()
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
void hypothequerProprieteEn(int player)
{
	int i = player;//
	int option = 0;//
	int numerodelapropriete=0;//
	int nombreDepropriete=0;
	printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
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
        printf("enter the number of the property to be mortgaged \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//
        do{
        printf("Do you want to mortgage - %s - for M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prix / 2));//
        printf(" 1 - Yes\n");//
        printf(" 0 - No\n");//
        printf("Enter an option: ");//
        scanf("%d", &option);//
        }while((option < 0) || (option > 1));
    }
    else
    {
        printf("You have no property");
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
                printf("The property of %s has been mortgaged.\n", Proprietes[numerodelapropriete].Nom);//
                printf("\n///////////////////////////////////////\n");
                fflush(stdin);//
                getchar();//
                break;//
            case 0:
                printf("\n///////////////////////////////////////\n");
                break;//
            default://
                printf("Error! Disabled Option.\n");//
                fflush(stdin);//
                getchar();//
                goto menuhypotheque;//
                break;//
            }
    }
    else
    {
      printf("Error! sell all your houses and hotels first\n");//
      printf("\n///////////////////////////////////////\n");
    }

}

//vendre des proprietes
void vendreConstructionEn(int player)//
{
	int i = player;//
	int option = 0;//
	int numerodelapropriete=0;//
	int nombreDepropriete=0;
	printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
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
        printf("enter the number of the property to sell a building \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//
        if ((Proprietes[numerodelapropriete].nombreDeMaisons>0))
        {
            do{
            printf("Do you want to sell a house - %s - for M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prixMaison / 2));//
            printf(" 1 - Yes\n");//
            printf(" 0 - No\n");//
            printf("Enter an option: ");//
            scanf("%d", &option);//
            }while((option < 0) || (option > 1));
        }
        else if (Proprietes[numerodelapropriete].nombreHotel>0)
        {
            do{
            printf("Do you want to sell a hotel - %s - For M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prixMaison / 2));//
            printf(" 2 - Do you want to sell a hotel and get back 4 house\n");//
            printf(" 3 - Do you want to sell a hotel and sell 4 house\n");//
            printf("Enter an option: ");//
            scanf("%d", &option);//
            }while((option < 2) || (option > 3));

            if (option==2)
            {
                do{
                printf("Do you want to sell a hotel - %s - For M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prixMaison / 2));//
                printf(" 2 - Yes\n");//
                printf(" 0 - No\n");//
                printf("Enter an option: ");//
                scanf("%d", &option);//
                }while((option == 0) || (option == 2));
            }
            else if (option==3)
            {
                do{
                printf("Do you want to sell a hotel and sell 4 house - %s - pour M%d ?\n", Proprietes[numerodelapropriete].Nom, 5*(Proprietes[numerodelapropriete].prixMaison / 2));//
                printf(" 3 - Yes\n");//
                printf(" 0 - No\n");//
                printf("Enter an option: ");//
                scanf("%d", &option);//
                }while((option == 0) || (option == 3));
            }

        }
        else
        {
            printf("You have no building\n");
        }
    }
    else
    {
        printf("You have no property\n");
        option=0;
    }

menuvente://

	switch (option)//
	{
	case 1://
		Proprietes[numerodelapropriete].nombreDeMaisons--;//
        Joueures[i].compte += (Proprietes[numerodelapropriete].prixMaison/2) ;//
        Batiments.nMaison += 1;

		printf("\n Sale completed!\n");//
		printf("%s was sold by %s.\n", Proprietes[numerodelapropriete].Nom, Joueures[i].Nom);//
		printf("\n///////////////////////////////////////\n");
		fflush(stdin);//
		getchar();//

		break;//
	case 2://
	    Proprietes[numerodelapropriete].nombreHotel--;
	    Proprietes[numerodelapropriete].nombreDeMaisons =4;//
        Joueures[i].compte += (Proprietes[numerodelapropriete].prixMaison/2) ;//
        Batiments.nHotel += 1;
        Batiments.nMaison -=4;

		printf("\nSale completed!\n");//
		printf("%s was sold by %s.\n", Proprietes[numerodelapropriete].Nom, Joueures[i].Nom);//
		printf("\n///////////////////////////////////////\n");
		fflush(stdin);//
		getchar();//

		break;//
    case 3:
        Proprietes[numerodelapropriete].nombreHotel--;//
        Joueures[i].compte += 5*(Proprietes[numerodelapropriete].prixMaison/2) ;//
        Batiments.nHotel += 1;

		printf("\nSale completed!\n");//
		printf("%s was sold by %s.\n", Proprietes[numerodelapropriete].Nom, Joueures[i].Nom);//
		printf("\n///////////////////////////////////////\n");
		fflush(stdin);//
		getchar();//
        break;
    case 0:
        printf("\n///////////////////////////////////////\n");
        break;
	default://
		printf("Erreur! Disable Option.\n");//
		fflush(stdin);//
		getchar();//
		goto menuvente;//
		break;//
	}

}

//faillite
void FailliteEn(int player)
{
    int i= player;
    int option = 0;//
	int nombreDepropriete=0;
    printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
	printf("You are bankrupt your account is % d\n",Joueures[i].compte);
	for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    nombreDepropriete++;
                }
        }

        menuFaillite://
			printf("\n What do you want to do ?\n");//

            if (nombreDepropriete>0)
            {
                do{
                printf("1 - Sell construction\n");//
                printf("2 - Mortgage property\n");//
                scanf("%d", &option);//
                }while((option < 1) || (option > 2));
            }
            else if (nombreDepropriete<0)
            {
                printf("You have no property\n");
                printf("\n %s you are a looser Game over !\n",Joueures[i].Nom);
                system("pause");
            }




			switch (option)//
			{

			//6 - Vendre une propriété
			case 1: vendreConstructionEn(i);//
                printf("\n///////////////////////////////////////\n");
				break;//

			//7 - Hypothequer une propriété
			case 2: hypothequerProprieteEn(i);//
                printf("\n///////////////////////////////////////\n");
				break;//

			//0 - Terminer le tour
			case 0://
			    printf("\n///////////////////////////////////////\n");
				break;//

			//option Invalide
			default://
				printf("Erreur! disable option ");//
				fflush(stdin);//
				goto menuFaillite;//
				break;//
			}

}

//Menu initial
int menuInitialEn()
{
	int option;//
    do{
        printf("MENU\n");//
        printf("1 - New Game\n");//
        printf("2 - Continue\n");//
        printf("3 - Credit\n");//
        scanf("%d", &option);//
      }while((option < 1) || (option > 3));
	return(option);//
}

//selection des joueurs
int selectionJoueuresEn()
{
	int nJoueures;//

	printf("What is the number of players (2 a 6): ");//
	scanf("%d", &nJoueures);//
	printf("\n");//

	while ((nJoueures < 2) || (nJoueures > 6))//
	{
		printf("ERROR 444! %d This is not a number of players.\n", nJoueures);//
		printf("What is the number of players (2 a 6): ");//
		scanf("%d", &nJoueures);//
	}
	getchar();//
	for (int i = 0; i < nJoueures; i++)//
	{
		printf("What is the name of the player %d: ", i + 1);//
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
void prisonEn(int player, int nJoueures)
{
    int i = player;//
    int j=0;//
    printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
	printf("Youst must roll a double to get out of jail.\n");//
	int de1, de2;//

	de1 = (rand() % 6) + 1;//
	de2 = (rand() % 6) + 1;//
	//de1=1; de2=2;

	Joueures[i].position = 10;

	printf("Roll: %d + %d = %d\n", de1, de2, de1 + de2);//

	if (de1 == de2)//
	{
		printf("Get out of jail !\n");//
		Joueures[i].prison = false;//
		Joueures[i].position = 10+de1+de2;//
		printf("\n///////////////////////////////////////\n");//

	}
	else if(Joueures[i].carteSortiedePrison > 0)
	{
	    printf("You used get-out-of-jail-free card \n");//
	    printf("Get out of jail !\n");
		Joueures[i].prison = false;//
		Joueures[i].position = 10+de1+de2;//
		Joueures[i].carteSortiedePrison -= 1;
		printf("\n///////////////////////////////////////\n");//

	}

	else {Joueures[i].prison = true;//

	int option = 0;//
        menuJoueur://
            do{
			printf("\n What do you want to do?\n");//
			printf("1 - Buy a prison release card\n");//
            printf("2 - Pay a M50 fine to go out\n");//
			printf("0 - Staying in prison\n");//
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
                            printf(" %s want to sell your get-out-of-jail-free card\n",Joueures[j].Nom);
                            printf(" 1 - Yes\n");//
                            printf(" 0 - No\n");//
                            printf("enter an option: ");//
                            scanf("%d", &option1);//
                            }while((option1 < 0) || (option1 > 1));
                            if (option1==1)
                            {
                                int prix=0;

                                printf("%s What price do you want to sell it for\n",Joueures[j].Nom);
                                printf("enter the price: \n");//
                                scanf("%d", &prix);//
                                int option2=0;
                                do{
                                printf(" %s do you accept the selling price of %d\n",Joueures[i].Nom,prix);
                                printf(" 1 - Yes\n");//
                                printf(" 0 - No\n");//
                                printf("enter an option: ");//
                                scanf("%d", &option2);//
                                }while((option2 < 0) || (option2 > 1));
                                if ((prix<Joueures[i].compte)&&(option2==1))
                                {
                                    Joueures[j].carteSortiedePrison -= 1;
                                    Joueures[j].compte += prix;
                                    Joueures[i].compte -= prix;
                                    printf("You have purchased a get out of jail free card at %s.\n",Joueures[j].Nom);
                                    printf("You have used your prison release card\n");//
                                    printf("Get out of prison !\n");
                                    Joueures[i].prison = false;//
                                    Joueures[i].position = 10;//
                                    printf(" * place : spaces %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
                                }

                            }
                        }
                        else printf("no one has a get-out-of-jail-free card\n");//
                    }//
                    printf("\n///////////////////////////////////////\n");//
				break;//

			//2 - Payer une amende
			case 2:     Joueures[i].prison = false;
                        Joueures[i].position=10;
                        Joueures[i].compte -= 50;
                        printf("You paid a fine of M50 \n");
                        printf(" * place : spaces %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
                        printf("\n///////////////////////////////////////\n");//
				break;//

			//0 - Terminer le tour
			case 0://
			    printf("\n///////////////////////////////////////\n");//
				break;//

			//option Invalide
			default://
				printf("Error! Please enter a valid option  : ");//
				fflush(stdin);//
				goto menuJoueur;//
				break;//
			}
	}
}

//Lancer de dés
int lancerDedesEn(int player)
{
	int de1 = 0, de2 = 0, total = 0, compteur = 0,i = player;//


    printf("\n////////// Rolling the dice  //////////\n");//

	do
	{
		de1 = (rand() % 6) + 1; de2 = (rand() % 6) + 1;//
		//de1=1; de2=0;
        //de1=1;de2=1;
		printf(" * %d Roll: %d + %d = %d\n", compteur + 1, de1, de2, de1 + de2);//
		total += de1 + de2;//
		if (de1 != de2)//
		{
			printf("\nAdvance %d spaces.\n", total);//
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
		printf("Obtaining 3 consecutive DOUBLES. Go to prison!\n");//
		fflush(stdin);//
		getchar();//
		Joueures[i].prison = true;//
        return (0);
	}
	else return (total);//
}

//loyer
void loyerEn(int player, int nJoueures)
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

                    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, Proprietes[l].Couleur) == 0)&&(strcmp(Proprietes[l].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Station") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false))//
                    {
                        Couleurcompteur++;//

                    }

            }
        if ((Couleurcompteur == 2)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Brown") == 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Station") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))//
        {
            printf("%s you must pay %d to %s \n",Joueures[i].Nom ,Proprietes[Joueures[i].position].loyer[0]*2,Joueures[j].Nom);//
            printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            Joueures[i].compte -= (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//

            printf("Current account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            Joueures[j].compte += (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Current account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            printf("transfer completed !\n");
        }

        else if ((Couleurcompteur == 2)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Dark blue") == 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Station") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))//
        {
            printf("%s you must pay %d to %s \n",Joueures[i].Nom ,Proprietes[Joueures[i].position].loyer[0]*2,Joueures[j].Nom);//
            printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            Joueures[i].compte -= (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//

            printf("Current account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            Joueures[j].compte += (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Current account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            printf("transfer completed !\n");
        }

        else if ((Couleurcompteur == 3)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Station") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))//
        {
            printf("%s you must pay %d to %s \n",Joueures[i].Nom ,Proprietes[Joueures[i].position].loyer[0]*2,Joueures[j].Nom);//
            printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            Joueures[i].compte -= (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//

            printf("Current account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            Joueures[j].compte += (Proprietes[Joueures[i].position].loyer[0]*2) ;
            printf("Current account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            printf("transfer completed !\n");
        }

        else if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Station") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))
        {
            printf("%s you must pay %d \n",Joueures[i].Nom,Proprietes[Joueures[i].position].loyer[nbmaison] );//
            Joueures[i].compte -= Proprietes[Joueures[i].position].loyer[nbmaison] ;
            Joueures[j].compte += Proprietes[Joueures[i].position].loyer[nbmaison] ;
            printf("transfer completed !!\n");
            printf("\nCurrent account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
            printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
        }
        else if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(Proprietes[Joueures[i].position].hypotheque==false)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Station" ) == 0)&&(strcmp(Joueures[i].Nom, Joueures[j].Nom)!= 0))
        {
          for (int l = 0; l < 40; l++)//
            {
                //Stocke les codes des propriété ayant la même Couleur

                    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, Proprietes[l].Couleur) == 0)&&(strcmp(Proprietes[l].proprietaire, Joueures[j].Nom) == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur,"Station") == 0)&&(Proprietes[Joueures[i].position].hypotheque==false))//
                    {
                        Couleurcompteur1++;//

                    }
            }
            if (Couleurcompteur1 == 1)//
            {
                    Joueures[i].compte -= 25 ;
                    Joueures[j].compte += 25 ;
                    printf("transfer completed !!!\n");
                    printf("\nCurrent account of %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if ((Couleurcompteur1 == 2)&&((Joueures[i].compte -= 50)>0))//
            {
                    Joueures[i].compte -= 50 ;
                    Joueures[j].compte += 50 ;
                    printf("transfer completed !!!\n");
                    printf("\nCurrent account of %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Couleurcompteur1 == 3)//
            {
                    Joueures[i].compte -= 100 ;
                    Joueures[j].compte += 100 ;
                    printf("transfer completed !!!\n");
                    printf("\nCurrent account of %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Couleurcompteur1 == 4)//
            {
                    Joueures[i].compte -= 200 ;
                    Joueures[j].compte += 200 ;
                    printf("transfer completed !!!\n");
                    printf("\nCurrent account of %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Joueures[i].compte<0)
            {
                FailliteEn(i);
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
                    printf("\n////////// Rolling the dice  //////////\n");//
                    de1 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Roll: %d + %d = %d\n",de1, de2, de1 + de2);//
                    printf("you must pay 4 times the amount indicated by the dice %d\n",4*(de1 + de2));//
                    Joueures[i].compte -= 4*(de1+de2);
                    Joueures[j].compte += 4*(de1+de2);
                    printf("transfer completed !!!!\n");
                    printf("\nCurrent account of %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Couleurcompteur2 == 2)//
            {
                    printf("\n////////// Rolling the dice  //////////\n");//
                    de1 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Roll: %d + %d = %d\n",de1, de2, de1 + de2);//
                    printf("you must pay 10 times the amount indicated by the dice %d\n",10*(de1 + de2));//
                    Joueures[i].compte -= 10*(de1+de2);
                    Joueures[j].compte += 10*(de1+de2);
                    printf("transfer completed !!!!\n");
                    printf("\nCurrent account of %s : %d",Joueures[i].Nom ,Joueures[i].compte);//
                    printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
            }
            else if (Joueures[i].compte<0)
            {
                FailliteEn(i);
            }

        }
        else if (Joueures[i].compte<0)
        {
            FailliteEn(i);
        }
    }

}

//Calculer la nouvelle position du Joueur apres le Lancer de des
int nouvellepositionEn(int posActuel, int lancerDedesEn)
{
	int nouvellePos = posActuel + lancerDedesEn;//

	if (nouvellePos == 40)//
	{
		nouvellePos = 0;//
		return (nouvellePos);//
	}
	else if (nouvellePos > 40) return(nouvellePos - 40);//
	else return nouvellePos;//
}

//État du jeu
void etatduJeuEn(int nplayer)
{
	int nJoueures = nplayer, option;//
	bool erreur;//

	printf("1 - General status of each player\n");//
	printf("2 - General status of the game board\n");//
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
			    printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
				printf(" * Account        : %d euros\n", Joueures[i].compte);//
				printf(" * Prison release card        : %d\n", Joueures[i].carteSortiedePrison);//
				if(Joueures[i].prison== true){printf(" * In jail        : Yes\n");}
                else {printf(" * In jail        : NON\n");}
				printf(" * Place      : spaces %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
				printf(" * acquired properties :\n");//
				for (int j = 0; j < 40; j++)//
				{
					if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
					{
						printf("    * %s\n", Proprietes[j].Nom);//
					}
				}
				printf("\n///////////////////////////////////////\n");
			}
			break;//

			//État général du jeu organisé par plateau.
		case 2:
			printf("\n _________________________________________ \n");//
			printf("|                                         |\n");//
			printf("|               Game board                |\n");//
			printf("|_________________________________________|\n");//
			for (int i = 0; i < 40; i++)//
			{
				if (i == 10 || i == 20 || i == 30)//
					printf("\n\n");//
				printf("\n * %2d - %s\n", i, Proprietes[i].Nom);//
				if (strcmp(Proprietes[i].proprietaire, "Forbidden") == 0)//
					printf("\n");//
				else
				{
					printf("        OWNER : %s\n", Proprietes[i].proprietaire);//
					if (strcmp(Proprietes[i].proprietaire, "no owner") == 0)//
						printf("\n");//
					else
					{
						if (Proprietes[i].nombreDeMaisons == 5)//
						{
							printf("        House        : 4\n");//
							printf("        HOTEL        : 1\n");//
						}
						else
						{
							printf("        Maison        : %d\n", Proprietes[i].nombreDeMaisons);//
							printf("        HOTEL        : 0\n");//
						}
						if (Proprietes[i].hypotheque == true)
						{
							printf("        Mortgage   : Yes\n");//
						}
						else
							printf("        Mortgage   : Non\n");//
					}
				}
			}
			printf("\n/////////////////////////////////////////\n");
			break;//

			//option Invalidé
		default://
			printf("Error! Enter a valid option: ");//
			erreur = true;//
			break;//
		}
	} while (erreur == true);//
}

//acheter des proprietes
void acheterProprieteEn(int player)//
{
	int i = player;//

	printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//

	if ((Joueures[i].compte >= Proprietes[Joueures[i].position].prix)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, "no owner") == 0))//
    {
		Joueures[i].compte -= Proprietes[Joueures[i].position].prix;//
		strcpy(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom);//

		printf("\nAcquisition completed!\n");//
		printf("%s was acquired by %s.\n", Proprietes[Joueures[i].position].Nom, Joueures[i].Nom);//

	}
	else if ((Joueures[i].compte >= Proprietes[Joueures[i].position].prix)&&(Proprietes[Joueures[i].position].hypotheque == true))//
    {
		Joueures[i].compte -= ((Proprietes[Joueures[i].position].prix/2)+((Proprietes[Joueures[i].position].prix)*(10/100)));//
		strcpy(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom);//
		Proprietes[Joueures[i].position].hypotheque = false;

		printf("\nAcquisition completed!\n");//
		printf("%s was acquired by %s.\n", Proprietes[Joueures[i].position].Nom, Joueures[i].Nom);//

	}
	else
	{
		printf("Does not have enough money for the purchase !");//
		printf("You need %d euros to complete the purchase.", Proprietes[Joueures[i].position].prix - Joueures[i].compte);//

	}
	printf("\n///////////////////////////////////////\n");//
}

//Vente Aux Encheres des Proprietes
void offreEn(int player, int numplayer)
{
	int nJoueures = numplayer;//
	int option = 0;
    int j;
    int i=player;
    printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
			menuventeAuxEncheres:
			    do{
				printf("What do you want to do ?\n");
				printf(" 1 - Offer\n");
				printf(" 2 - Discontinue\n");
				printf("\n enter an option: ");
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
                            printf(" %s do you want to sell your property\n",Joueures[j].Nom);
                            printf(" 1 - Yes\n");//
                            printf(" 0 - No\n");//
                            printf("enter an option: ");//
                            scanf("%d", &option1);//
                            }while((option1 < 0) || (option1 > 2));
                            if (option1==1)
                            {
                                int prix;
                                printf("%s what price do you want to sell it for\n",Joueures[j].Nom);
                                printf("enter the price: \n");//
                                scanf("%d", &prix);//
                                int option2=0;
                                do{
                                printf(" %s do you accept the selling price of %d\n",Joueures[i].Nom,prix);
                                printf(" 1 - Yes\n");//
                                printf(" 0 - No\n");//
                                printf("enter an option: ");//
                                scanf("%d", &option2);//
                                }while((option2 < 0) || (option2 > 1));
                                if ((prix<Joueures[i].compte)&&(option2==1))
                                    {
                                        Joueures[j].compte += prix;
                                        Joueures[i].compte -= prix;
                                        strcpy(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom );//
                                        printf("You bought this property from %s.\n",Joueures[j].Nom);
                                        printf("\nCurrent account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);//
                                        printf("\nCurrent account of %s : %d\n",Joueures[j].Nom ,Joueures[j].compte);//
                                    }
                                else
                                {
                                    goto menuventeAuxEncheres;
                                }
                            }
                        }

                    }//
                    printf("\n///////////////////////////////////////\n");//
					break;

				//Abandonner
				case 2:
					printf("you have declined to make an offer.");
					printf("\n///////////////////////////////////////\n");//
					break;

				//option Invalidé
				default:
					printf("invalid input");
					goto menuventeAuxEncheres;
					break;
				}

}

// construire un hotel
void construireHotelEn(int player)
{
	int i = player;//numero du joueur
	int numerodelapropriete=0;//
	int nombreDepropriete=0;
	printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
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
                printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);
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
        printf("You have no property");
    }
    printf("\n///////////////////////////////////////\n");//
}

//Construire une maison
void construireMaisonEn(int player)
{
	int i = player;//numero du joueur
	int Couleurcompteur = 0;//compteur couleur
	//int proprietairecompteur = 0;//
	//int CouleurCodes[3];//
    int numerodelapropriete=0;//
	int nombreDepropriete=0;
	printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
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
        printf("enter the number of the property where a house is to be built \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//

        for (int l = 0; l < 40; l++)//
            {
                //Stocke les codes des propriété ayant la même Couleur

                    if ((strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) == 0)&&(strcmp(Proprietes[numerodelapropriete].Couleur, Proprietes[l].Couleur) == 0)&&(strcmp(Proprietes[l].proprietaire, Joueures[i].Nom) == 0)&&(strcmp(Proprietes[numerodelapropriete].Couleur,"Station") != 0)&&(strcmp(Proprietes[numerodelapropriete].Couleur, "Services") != 0)&&(Proprietes[numerodelapropriete].hypotheque==false))//
                    {
                        Couleurcompteur++;//
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
                                printf("successfully built house!\n");//
                                printf("This property now has %d house(s).\n", Proprietes[numerodelapropriete].nombreDeMaisons);//
                                printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);
                            }
                            else construireHotelEn(i);

                        }
                        else
                        {
                            printf("He doesn't have a house anymore, wait for players to sell them.\n");//
                        }


            }
            if ((Couleurcompteur == 2)&&(strcmp(Proprietes[numerodelapropriete].Couleur,"Brown") == 0)&&((Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison)>0))//
            {
                    if (Batiments.nMaison>0)
                        {
                            if (Proprietes[numerodelapropriete].nombreDeMaisons<=4)
                            {
                               Proprietes[numerodelapropriete].nombreDeMaisons++;//
                                Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison ;//
                                Batiments.nMaison -= 1;
                                printf("successfully built house!\n");//
                                printf("This property now has %d house(s).\n", Proprietes[numerodelapropriete].nombreDeMaisons);//
                                printf("Current account of %s : %d\n",Joueures[i].Nom ,Joueures[i].compte);
                            }
                            else construireHotelEn(i);

                        }
                        else
                        {
                            printf("He doesn't have a house anymore, wait for players to sell them.\n");//
                        }


            }
             else
                        {
                            printf("you don't have all the colours.\n");//
                        }
    }


    else
    {
        printf("You have no property\n");
    }
    printf("\n///////////////////////////////////////\n");//
}

//carte chance
void carteChanceEn(int player, int nJoueures)
{
    int i=player;
    int j=0;
    int de1=0;
    int de2=0;
    int de3=0;

    de1 = (rand() % 16) + 1;//
    de2 = (rand() % 6) + 1;//
    de3 = (rand() % 6) + 1;//

    printf("\n///////////////////////////////////////\n");//

    if(de1==1)
    {
        for (j=0;j<nJoueures;j++)
        {
            if ((Joueures[j].carteSortiedePrison==0)&&(Joueures[i].carteSortiedePrison==0))
            {
                Joueures[i].carteSortiedePrison=1;
                printf("You have drawn a get out of jail free card.\n");
            }
        }
    }
    else if (de1==2)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Fine for excess beauty: Pay up 15M.");//
        fflush(stdin);//
        getchar();//
        Joueures[i].compte -= 15;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==3)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("You have been elected chairman of the board of directors pay M50 to each player.");//
        for (j=0;j<nJoueures;j++)
        {
            Joueures[i].compte -= 50;//
            Joueures[j].compte += 50;//
            printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
        }
    }
    else if (de1==4)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Surrender to %s if you pass through the starting box receive M200.",Proprietes[24].Nom);//
        Joueures[i].position = 24;//

    }
    else if (de1==5)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Advance to the start box (receive M200).");//
        Joueures[i].position = 0;//
    }
    else if (de1==6)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Surrender to %s if you go through the starting box receive M200.",Proprietes[11].Nom);//
        Joueures[i].position = 11;//
    }
    else if (de1==7)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Surrender to %s if you go through the starting box receive M200.",Proprietes[39].Nom);//
        Joueures[i].position = 39;//
    }
    else if (de1==8)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Go to the %s if you go through the starting box get M200.",Proprietes[5].Nom);//
        Joueures[i].position = 5;//
    }
    else if (de1==9)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Move back three spaces.");//
        Joueures[i].position -= 3;//
    }
    else if (de1==10)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("The bank pays you a dividend of M50.");//
        Joueures[i].compte += 50;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==11)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Your building and your loan pay off. Get M150.");//
        Joueures[i].compte += 150;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }

    else if (de1==12)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Go to jail");//
        Joueures[i].prison = true;//
    }
    else if (de1==13)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("You make repairs to all your properties: pay 25M for each house and 100M for each hotel you own.");//
        for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    Joueures[i].compte -= 100*Proprietes[j].nombreHotel;//
                    Joueures[i].compte -= 25*Proprietes[j].nombreDeMaisons;//
                }
        }

        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==14)
    {
        printf("Proceed to the nearest utility company.\n");//
        printf("If it does not belong to anyone, you can buy it from the bank.\n");
        printf("If it belongs to another player, roll the dice and pay the amount of your total dice multiplied by 10.\n");
        if ((12<Joueures[i].position)||(Joueures[i].position < 28))
        {
            Joueures[i].position=28;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("\n////////// Rolling the dice //////////\n");//
                    de3 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Roll: %d + %d = %d\n",de3, de2, de3 + de2);//
                    printf("you must pay 10 times the amount indicated by the dice %d\n",de3 + de2);//
                    Joueures[i].compte -= 10*(de3+de2);
                    Joueures[j].compte += 10*(de3+de2);
                }
            }
        }
        if ((28<Joueures[i].position)||(Joueures[i].position < 12))
        {
            Joueures[i].position=12;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("\n////////// Rolling the dice //////////\n");//
                    de3 = (rand() % 6) + 1;
                    de2 = (rand() % 6) + 1;//
                    printf("Roll: %d + %d = %d\n",de3, de2, de3 + de2);//
                    printf("you must pay 10 times the amount indicated by the dice %d\n",de1 + de2);//
                    Joueures[i].compte -= 10*(de3+de2);
                    Joueures[j].compte += 10*(de3+de2);
                }
            }
        }
    }
    else if (de1==15)
    {
        printf("Move on to the nearest station.\n");//
        printf("If it does not belong to anyone, you can buy it from the bank.\n");
        printf("If it belongs to another player, you must pay him twice the rent.\n");
        if ((35<Joueures[i].position)||(Joueures[i].position < 5))
        {
            Joueures[i].position=5;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);
                }
            }
        }
        if ((5<Joueures[i].position)||(Joueures[i].position <15 ))
        {
            Joueures[i].position=15;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);

                }
            }
        }
        if ((15<Joueures[i].position)||(Joueures[i].position < 25))
        {
            Joueures[i].position=25;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);
                }
            }
        }
        if ((25<Joueures[i].position)||(Joueures[i].position < 35))
        {
            Joueures[i].position=35;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);

                }
            }
        }
    }
    else if (de1==16)
    {
        printf("Move on to the nearest station.\n");//
        printf("If it does not belong to anyone, you can buy it from the bank.\n");
        printf("If it belongs to another player, you must pay him twice the rent.\n");
        if ((35<Joueures[i].position)||(Joueures[i].position < 5))
        {
            Joueures[i].position=5;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);
                }
            }
        }
        if ((5<Joueures[i].position)||(Joueures[i].position <15 ))
        {
            Joueures[i].position=15;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);

                }
            }
        }
        if ((15<Joueures[i].position)||(Joueures[i].position < 25))
        {
            Joueures[i].position=25;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);
                }
            }
        }
        if ((25<Joueures[i].position)||(Joueures[i].position < 35))
        {
            Joueures[i].position=35;
            for (j=0;j<nJoueures;j++)
            {
                if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[j].Nom) == 0))
                {
                    printf("you must pay 2 times the rent ask\n");//
                    loyerEn(i,nJoueures);
                    loyerEn(i,nJoueures);

                }
            }
        }
    }
    printf("\n///////////////////////////////////////\n");//
}

//carte de communauté
void carteCaissedeCommunauteEn(int player, int nJoueures)
{
    int i=player;
    int j=0;
    int de1=0;

    de1 = (rand() % 16) + 1;//

    printf("\n///////////////////////////////////////\n");//

    if(de1==1)
    {
        for (j=0;j<nJoueures;j++)
        {
            if ((Joueures[j].carteSortiedePrison==0)&&(Joueures[i].carteSortiedePrison==0))
            {
                Joueures[i].carteSortiedePrison=1;
                printf("You have drawn a get out of jail free card.\n");
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
        printf("You have won the second beauty prize. Receive M10.");//
        fflush(stdin);//
        getchar();//
        Joueures[i].compte += 10;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==3)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("It's your birthday: each player must give you M10.");//
        for (j=0;j<nJoueures;j++)
        {
            Joueures[i].compte += 10;//
            Joueures[j].compte -= 10;//
            printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
            printf("\nCurrent account of %s : %d", Joueures[j].Nom,Joueures[j].compte);//
        }
    }
    else if (de1==4)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("You inherit M100.");//
        Joueures[i].compte += 100;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//

    }
    else if (de1==5)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Advance to the start square (receive M200).");//
        Joueures[i].position = 0;//
    }
    else if (de1==6)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("The tax authorities will reimburse you M20.");//
        Joueures[i].compte += 20;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==7)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Your life insurance pays off. Get M100.");//
        Joueures[i].compte += 100;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==8)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Your investment pays off. Receive M100.");//
        Joueures[i].compte += 100;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==9)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Bank error in your favour. Receive M200.");//
        Joueures[i].compte += 200;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==10)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("The sale of your stock earns you M50.");//
        Joueures[i].compte += 50;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==11)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Real estate expert's commission. Receive M25");//
        Joueures[i].compte += 25;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }

    else if (de1==12)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Go to jail");//
        Joueures[i].prison = true;//
    }
    else if (de1==13)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("You have to do work on your properties: pay M40 for each house and M115 for each hotel you own.");//
        for (int j = 0; j < 40; j++)//
        {
            if (strcmp(Proprietes[j].proprietaire, Joueures[i].Nom) == 0)//
                {
                    Joueures[i].compte -= 115*Proprietes[j].nombreHotel;//
                    Joueures[i].compte -= 40*Proprietes[j].nombreDeMaisons;//
                }
        }

        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==14)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Hospitalization costs. Pay M100");//
        Joueures[i].compte -= 100;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==15)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Visit to the doctor: Pay M50.");//
        Joueures[i].compte -= 50;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    else if (de1==16)
    {
        printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
        printf("Tuition fees. Pay M50");//
        Joueures[i].compte -= 50;//
        printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
    }
    printf("\n///////////////////////////////////////\n");//
}

int monopolyEn()
{

	//initialiseTableEn();//
	//affichePlateauEn();
    system("cls");//

	srand (time(NULL));

	//Début du jeu
	printf(" ____________________________________________________________________________\n");
	printf("|                                                                            |\n");
	printf("|                                  MONOPOLY                                  |\n");
	printf("|____________________________________________________________________________|\n");
	printf("\nWelcome to Monopoly for Windows.\n");

//Menu de démarrage du jeu
menuInitial://
	switch (menuInitialEn())//
	{
	case 1: goto nouveauJeu;//
		break;
	case 2: printf("Not yet implemented!"); //A faire
		break;
	case 3:
		printf("This game has been coded in C language as part of the\n");
		printf("Algorithms and Structural Programming in C, taught by Professor Rendler,\n");
		printf("at the ECE Paris engineering school.\n");
		printf("\nAutors : Valentin Denis, Amaury Forestier et Antoine Layani \n");
		fflush(stdin);//
		getchar();//
		goto menuInitial;//
		break;//
	}

//Commencer un nouveau jeu
nouveauJeu ://

	//Sélection des Joueurs

	printf("\n ________________________________________________________________\n");
	printf("|                                                                |\n");
	printf("|                       Players selection                        |\n");
	printf("|________________________________________________________________|\n");
	int nJoueures = selectionJoueuresEn();//

	Batiments.nMaison =32;
	Batiments.nHotel =12;
	printf("\n////////////////////////////////////////////////////////////////////\n");
	fflush(stdin);//

	int plateau;//
    do{
	printf("Which game board do you want to use? \n");//
	printf("1 - Paris\n");//
	printf("2 - Custom\n");//
	printf("3 - London\n");//
	printf("4 - The Smurfs\n");//
	printf("5 - Back to the Future\n");//
	printf("6 - ECE Paris campus Eiffel\n");//
	scanf("%d", &plateau);//
	}while((plateau < 1) || (plateau > 6)||(plateau==7)||(plateau==101917));
	if (plateau==1)
    {
       initialiseTableEn();//
    }
    if (plateau==2)
    {
       initialiseTable1En();//
    }
    if (plateau==3)
    {
       initialiseTable2En();//
    }
    if (plateau==4)
    {
       initialiseTable4En();//
    }
    if (plateau==5)
    {
       initialiseTable3En();//
    }
    if (plateau==6)
    {
       initialiseTable5En();//
    }
    if (plateau==7)
    {
       initialiseTable7En();//
    }
    if (plateau==101917)
    {
       initialiseTable6En();//
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
		    affichePlateauEn();
		    printf("\n///////////////////////////////// Round %3d /////////////////////////////////\n", tour);//
		    printf("\n////////// Player %d - %s //////////\n", i + 1, Joueures[i].Nom);//
			printf(" * Account   : %d euros\n", Joueures[i].compte);//
			printf(" * place : spaces %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//
			printf("\n///////////////////////////////////////\n");//

			//Lancer des dés et calcul la nouvelle position du Joueurs
			printf("\n I will now roll the dice...");//
			getchar();//

			int ancienneposition = Joueures[i].position;//


			if(Joueures[i].prison != true)//
            {
                int lancerDidier=lancerDedesEn(i);
                if(Joueures[i].prison != true)//
                {
                    Joueures[i].position = nouvellepositionEn(Joueures[i].position, lancerDidier);//
                }
                else goto menuJoueur;
            }
            else
                {
                  compteur++;
                if (compteur<4)
                    {
                        prisonEn(i,nJoueures);//
                        Joueures[i].position=30;
                        goto menuJoueur;
                    }
                else
                    {
                        compteur=0;
                        Joueures[i].prison = false;
                        Joueures[i].position=10;
                        Joueures[i].compte -= 50;
                        printf("You have completed your sentence pay a fine M50\n");
                        Joueures[i].position = nouvellepositionEn(Joueures[i].position, lancerDedesEn(i));
                        goto menuJoueur;
                    }
                }

            //affichePlateauEn();

			//Vérifier si le Joueur est dans ou a passé la Case Départ
			if ((Joueures[i].position == 0) || (Joueures[i].position < ancienneposition))//
			{
				printf("\n Passed by departure. Receive 200 euros.\n");//
				Joueures[i].compte += 200;//
				printf("\n Current account : %d euros\n", Joueures[i].compte);//
			}
			printf("\nCurrent position = spaces %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//



			//Détails de la maison où se trouve le Joueur
			if ((Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Station") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0))//
			{

				printf("\n             Property            \n");
				printf(" ___________________________________\n");
				printf(" |                                 |\n");
				printf(" | %-30.30s  |   * Owner : %s", Proprietes[Joueures[i].position].Nom, Proprietes[Joueures[i].position].proprietaire);//
				if(Proprietes[Joueures[i].position].hypotheque== true){printf("\n|                                 |   * Mortgage        : Yes\n");}
				else {printf("\n |                                 |   * Mortgage        : NON\n");}
				printf(" |                                 |   * House        : %d\n", Proprietes[Joueures[i].position].nombreDeMaisons);//
				printf(" |color %-11.11sThe price $%4d|   * HOTEL        : %d\n", Proprietes[Joueures[i].position].Couleur, Proprietes[Joueures[i].position].prix, Proprietes[Joueures[i].position].nombreHotel);//
				printf(" | ------------------------------- |\n");
				printf(" |              Rent               |\n");
				printf(" |   Land                 $%4d    |\n", Proprietes[Joueures[i].position].loyer[0]);//
				printf(" |                                 |\n");
				printf(" |   Colour group         $%4d    |\n", Proprietes[Joueures[i].position].loyer[0] * 2);//
				printf(" |                                 |\n");
				printf(" |   With 1 house         $%4d    |\n", Proprietes[Joueures[i].position].loyer[1]);//
				printf(" |                                 |\n");
				printf(" |   With 2 houses        $%4d    |\n", Proprietes[Joueures[i].position].loyer[2]);//
				printf(" |                                 |\n");
				printf(" |   With 3 houses        $%4d    |\n", Proprietes[Joueures[i].position].loyer[3]);//
				printf(" |                                 |\n");
				printf(" |   With 4 houses        $%4d    |\n", Proprietes[Joueures[i].position].loyer[4]);//
				printf(" |                                 |\n");
				printf(" |   With a HOTEL         $%4d    |\n", Proprietes[Joueures[i].position].loyer[5]);//
				printf(" | ------------------------------- |\n");
				printf(" |  Price of each House   $%4d    |\n", Proprietes[Joueures[i].position].prixMaison);//
				printf(" |                                 |\n");
				printf(" |  Prices for each hotel $%4d    |\n", Proprietes[Joueures[i].position].prixMaison);//
				printf(" |                                 |\n");
				printf(" |  Amount of the mortgage  $%4d  |\n", Proprietes[Joueures[i].position].prix/2+Proprietes[Joueures[i].position].prix*10/100);//
				printf(" | ------------------------------- |\n");
				printf(" |_________________________________|\n");

                    loyerEn(i,nJoueures);
                    goto menuJoueur;

			}

			else if ((Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Station") == 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") != 0))//
			{

				printf("\n             Property            \n");
				printf(" ___________________________________\n");
				printf(" |                                 |\n");
				printf(" | %-30.30s  |   * Owner : %s", Proprietes[Joueures[i].position].Nom, Proprietes[Joueures[i].position].proprietaire);//
			if(Proprietes[Joueures[i].position].hypotheque== true){printf("\n |                                |   * Mortgage        : Yes\n");}
         else {printf("\n |                                 |   * Mortgage        : NON\n");}
				printf(" |color %-11.11sThe prices $%4d|\n", Proprietes[Joueures[i].position].Couleur, Proprietes[Joueures[i].position].prix);//
				printf(" | ------------------------------- |\n");
				printf(" |                                 |\n");
				printf(" |   Rent                 $25      |\n");
				printf(" |                                 |\n");
				printf(" |   With 2 stations      $50      |\n");//
				printf(" |                                 |\n");
				printf(" |   With 3 stations      $100     |\n");//
				printf(" |                                 |\n");
				printf(" |   With 4 stations      $200     |\n");//
				printf(" |                                 |\n");
				printf(" | ------------------------------- |\n");
				printf(" |                                 |\n");
				printf(" |  Amount of the mortgage  $%4d  |\n", Proprietes[Joueures[i].position].prix/2+Proprietes[Joueures[i].position].prix*10/100);//
				printf(" |                                 |\n");
				printf(" | ------------------------------- |\n");
				printf(" |_________________________________|\n");

                    loyerEn(i,nJoueures);
                    goto menuJoueur;

			}

			else if ((Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Station") != 0)&&(strcmp(Proprietes[Joueures[i].position].Couleur, "Services") == 0))//
			{

				printf("\n             Property            \n");
				printf(" ___________________________________\n");
				printf(" |                                  |\n");
				printf(" |%-35.35s|   * Owner : %s", Proprietes[Joueures[i].position].Nom, Proprietes[Joueures[i].position].proprietaire);//
			if(Proprietes[Joueures[i].position].hypotheque== true){printf("\n |                                |   * Mortgage        : Yes\n");}
          else {printf("\n |                                  |   * Mortgage        : NON\n");}
				printf(" |color %-11.11sThe price  $%4d |\n", Proprietes[Joueures[i].position].Couleur, Proprietes[Joueures[i].position].prix);//
				printf(" | -------------------------------- |\n");
				printf(" |                                  |\n");
				printf(" |  If a public service belongs to  |\n");
				printf(" |  a player, the rent is equal to  |\n");//
				printf(" |   to 4x the result of the dice.  |\n");
				printf(" |                                  |\n");//
				printf(" |                                  |\n");
				printf(" |     If two public services       |\n");
				printf(" |   belongs to a player, the rent  |\n");//
				printf(" |  is equal to 10x the dice result |\n");
				printf(" |                                  |\n");
				printf(" | -------------------------------- |\n");
				printf(" |                                  |\n");
				printf(" |  Amount of the mortgage  $%4d   |\n", Proprietes[Joueures[i].position].prix/2+Proprietes[Joueures[i].position].prix*10/100);//
				printf(" |                                  |\n");
				printf(" | -------------------------------- |\n");
				printf(" |__________________________________|\n");

                    loyerEn(i,nJoueures);
                    goto menuJoueur;

			}

            if (strcmp(Proprietes[Joueures[i].position].Nom, "CHANCE") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Draw a CHANCE card\n");//
				carteChanceEn(i,nJoueures);
				fflush(stdin);//
				getchar();//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "Community Chest") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Draw a Community Chest card\n");//
				carteCaissedeCommunauteEn(i,nJoueures);//
				fflush(stdin);//
				getchar();//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "SUPER TAX") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Pay the SUPER TAX M100.");//
				fflush(stdin);//
				getchar();//
				Joueures[i].compte -= 100;//
				printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "INCOME TAX") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Pay the INCOME TAX M200.");//
				fflush(stdin);//
				getchar();//
				Joueures[i].compte -= 200;//
				printf("\nCurrent account of %s : %d", Joueures[i].Nom,Joueures[i].compte);//
			}
			else if ((strcmp(Proprietes[Joueures[i].position].Nom, "JAIL - VISITOR") == 0) && (strcmp(Proprietes[i].Nom, "FREE PARKING") == 0))//
            {
                printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
            }
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "GO TO JAIL") == 0)//
			{
				Joueures[i].prison = true;
			}

            printf("\nCurrent position = spaces %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//

			//Menu des Joueurs
			int option = 0;//
        menuJoueur://
			printf("\n What do you want to do?\n");//
			printf("1 - State of play\n");//
			if (((strcmp(Proprietes[Joueures[i].position].proprietaire, "no owner") == 0)&&(Proprietes[Joueures[i].position].prix != 0))||(Proprietes[Joueures[i].position].hypotheque == true))// en fonction des cases
			{
				printf("2 - Buying a property\n");//
			}
			if (((strcmp(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom) != 0)&&(Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, "no owner") != 0))||(Proprietes[Joueures[i].position].hypotheque== true))// en fonction des cases
			{
				printf("3 - Making an offer\n");//
			}

			if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].prixMaison>0))
			{
				printf("4 - Building a House\n");//
				printf("5 - Building a Hotel\n");//


			}

			if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].nombreDeMaisons>0)&&(Proprietes[Joueures[i].position].nombreHotel>0))
			 {
			     printf("6 - Selling buildings\n");//
			 }
			if (strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)
            {
                printf("7 - Mortgaging Properties\n");//
            }

			printf("0 - Completing the round\n");//


			scanf("%d", &option);//
			switch (option)//
			{
			//1 - État du jeu
			case 1: etatduJeuEn(nJoueures);//
                    goto menuJoueur;//
				break;//

			//2 - Acheter une propriété
			case 2:
				if (((strcmp(Proprietes[Joueures[i].position].proprietaire, "no owner") == 0)&&(Proprietes[Joueures[i].position].prix != 0))||(Proprietes[Joueures[i].position].hypotheque== true))// en fonction des cases
					{acheterProprieteEn(i);goto menuJoueur;}//
				else goto menuJoueur;//
				break;//

			//3 - Vente aux encheres une propriété
			case 3:
			    if (((strcmp(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom) != 0)&&(Proprietes[Joueures[i].position].prix != 0)&&(strcmp(Proprietes[Joueures[i].position].proprietaire, "no owner") != 0))||(Proprietes[Joueures[i].position].hypotheque== true))// en fonction des cases
                    {offreEn(i,nJoueures);goto menuJoueur;}//
                    goto menuJoueur;//
				break;//

			//4 - Construire une maison
			case 4:
			    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].prixMaison>0))
                    {construireMaisonEn(i);goto menuJoueur;}//
                else goto menuJoueur;//
				break;//

			//5 - Construire un Hotel
			case 5:
			    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].prixMaison>0))
                    {construireHotelEn(i);goto menuJoueur;}//
                    goto menuJoueur;//
				break;//

			//6 - Vendre des constructions
			case 6:
			    if ((strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)&&(Proprietes[Joueures[i].position].nombreDeMaisons>0)&&(Proprietes[Joueures[i].position].nombreHotel>0))
                    {vendreConstructionEn(i);goto menuJoueur;}//
                 else goto menuJoueur;//
				break;//

			//7 - Hypothequer une propriété
			case 7:
			    if (strcmp(Proprietes[Joueures[i].position].proprietaire,Joueures[i].Nom ) == 0)
                    {hypothequerProprieteEn(i);goto menuJoueur;}//
                else goto menuJoueur;//
				break;//

			//0 - Terminer le tour
			case 0://
				break;//

			//option Invalide
			default://
				printf("Error! Please enter a valid option : ");//
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
