/*
Copyright 2014-2015, Gil Ferraz e Teresa Loureiro
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>  //mets le plateau ici 
void gotoligcol( int lig, int col ) {
// ressources
 COORD mycoord;
mycoord.X = col;
mycoord.Y = lig;
SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

void affichePlateau(int pos){
    int i,j;

    for(i=0;i<4;i++)
    {

        for(j=0;j<8;j++)
        {
            Color(15,2);
            gotoligcol(i*5,j*15);
            if (pos==i*8+j){
                Color(4,2);
                printf("***case(%d)***",i*8+j);
            }
            else{

            printf("  case(%d)   ",i*8+j);
            }


        }
    }
    printf("\n");
    Color(15,0);

}
//mets le plateau ici 




typedef struct nombreDeBatiment
{
	int nHotel;//
	int nMaison;//

} Batiment;

Batiment Batiments;

//Structure de données pour l'enregistrement des Proprietes
typedef struct enregistrerProprietes
{
	char Nom[50]; //nom de la propriete
        char localisation[50]; //localisation de la propriete
	char Couleur[10];// couleur du quartier de la propriete
	int prix;// bah prix de la propriete
	int loyer[6];//loyer de la propriete c'est un tableau de 6 car loyer en fonction de l'acquistion: du terrain,1maison,2maison,3maison,4maison,hotel
	int nombreDeMaisons;//nombre de maison c'est ecrit !
	int nombreHotel;//
	int prixMaison;//
	bool hypotheque;// porpiete hypotequée oui ou non
	int prixHypotheque;//
	char proprietaire[20];// nom du proprietaire
} Propriete;

Propriete Proprietes[40];//la structure deviens un tableau de structure de 40 car il y a 40 case

//initialise le plateau
void initialiseTable()
{

	//Case 0 - DEBUT
	strcpy(Proprietes[0].Nom, "debut");
	Proprietes[0].prix = 0;

	//Case 1
	strcpy(Proprietes[1].Nom, "Boulevard de Belleville");//
	strcpy(Proprietes[1].localisation, "Paris");//
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

	//Case 3
	strcpy(Proprietes[3].Nom, "Rue Lecourbe");//
	strcpy(Proprietes[3].localisation, "Paris");//
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

	//Case 5 - GARE
	strcpy(Proprietes[5].Nom, "Gare Montparnasse");//
	strcpy(Proprietes[5].localisation, "Paris");//
	strcpy(Proprietes[5].Couleur, "Gare");//
	Proprietes[5].prix = 200;//
	Proprietes[5].hypotheque = false;//
	strcpy(Proprietes[5].proprietaire, "aucun proprietaire");//

	//Case 6
	strcpy(Proprietes[6].Nom, "Rue de Vaugirard");//
	strcpy(Proprietes[6].localisation, "Paris");//
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

	//Case 8
	strcpy(Proprietes[8].Nom, "Rue de Courcelles");//
	strcpy(Proprietes[8].localisation, "Paris");//
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
	strcpy(Proprietes[9].localisation, "Paris");//
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

	//Case 11
	strcpy(Proprietes[11].Nom, "Boulevard de la Villette");//
	strcpy(Proprietes[11].localisation, "Paris");//
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
	strcpy(Proprietes[13].localisation, "Paris");//
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
	strcpy(Proprietes[14].localisation, "Paris");//
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
	strcpy(Proprietes[15].localisation, "Paris");//
	strcpy(Proprietes[15].Couleur, "Gare");//
	Proprietes[15].prix = 200;//
	Proprietes[15].hypotheque = false;//
	strcpy(Proprietes[15].proprietaire, "aucun proprietaire");//

	//Case 16
	strcpy(Proprietes[16].Nom, "Avenue Mozart");//
	strcpy(Proprietes[16].localisation, "Paris");//
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

	//Case 18
	strcpy(Proprietes[18].Nom, "Boulevard Saint-Michel");//
	strcpy(Proprietes[18].localisation, "Paris");//
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
	strcpy(Proprietes[19].localisation, "Paris");//
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

	//Case 21
	strcpy(Proprietes[21].Nom, "Avenue de Matignon");//
	strcpy(Proprietes[21].localisation, "Paris");//
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

	//Case 23
	strcpy(Proprietes[23].Nom, "Boulevard Malesherbes");//
	strcpy(Proprietes[23].localisation, "Paris");//
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
	strcpy(Proprietes[24].localisation, "Paris");//
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
	strcpy(Proprietes[25].localisation, "Paris");//
	strcpy(Proprietes[25].Couleur, "Gare");//
	Proprietes[25].prix = 200;//
	Proprietes[25].hypotheque = false;//
	strcpy(Proprietes[25].proprietaire, "aucun proprietaire");//

	//Case 26
	strcpy(Proprietes[26].Nom, "Faubourg Saint-Honore");//
	strcpy(Proprietes[26].localisation, "Paris");//
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
	strcpy(Proprietes[27].localisation, "Paris");//
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
	strcpy(Proprietes[29].localisation, "Paris");//
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

	//Case 31
	strcpy(Proprietes[31].Nom, "Avenue de Breteuil");//
	strcpy(Proprietes[31].localisation, "Paris");//
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
	strcpy(Proprietes[32].localisation, "Paris");//
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

	//Case 34
	strcpy(Proprietes[34].Nom, "Boulevard des Capucines");//
	strcpy(Proprietes[34].localisation, "Paris");//
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
	strcpy(Proprietes[35].localisation, "Paris");//
	strcpy(Proprietes[35].Couleur, "Gare");//
	Proprietes[35].prix = 200;//
	Proprietes[35].hypotheque = false;//
	strcpy(Proprietes[35].proprietaire, "aucun proprietaire");//

	//Case 36 - CHANCE
	strcpy(Proprietes[36].Nom, "CHANCE");//
	Proprietes[36].prix = 0;//

	//Case 37
	strcpy(Proprietes[37].Nom, "Avenue des Champs-Elysees");//
	strcpy(Proprietes[37].localisation, "Paris");//
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

	//Case 39
	strcpy(Proprietes[39].Nom, "Rue de la Paix");//
	strcpy(Proprietes[39].localisation, "Paris");//
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

//Structure des données pour l'enregistrement des joueurs
typedef struct enregistrementDesJoueurs
{
	char Nom[50];//
	int compte;//
	int position;//
	int carteSortiedePrison;//
	bool venteAuxEncheres;//
	bool prison;
} Joueur;//

Joueur Joueures[8];//

//Menu initial
int menuInitial()
{
	int option;//

	printf("MENU\n");//
	printf("1 - Nouvelle partie\n");//
	printf("2 - continuer\n");//
	printf("3 - Credit\n");//
	scanf("%d", &option);//

	return(option);//
}

//selection des joueurs
int selectionJoueures()
{
	int nJoueures;//

	printf("Quel est le nombre de joueur (2 a 8): ");//
	scanf("%d", &nJoueures);//
	printf("\n");//

	while ((nJoueures < 2) || (nJoueures > 8))//
	{
		printf("ERREUR! %d Ce n'est pas un nombre valide de joueurs.\n", nJoueures);//
		printf("Quel est le nombre de joueur (2 a 8): ");//
		scanf("%d", &nJoueures);//
	}
	getchar();//
	for (int i = 0; i < nJoueures; i++)//
	{
		printf("Quel est le nom du joueur %d: ", i + 1);//
        fgets(Joueures[i].Nom, 50, stdin);//
		Joueures[i].compte = 200;//
        Joueures[i].position=0;
		Joueures[i].prison = false;//
		Joueures[i].carteSortiedePrison=0;
	}
	return (nJoueures);//
}

//prison
void prison(int player)
{
    int i = player;//
	printf("Vous devez faire un double pour sortir de prison.\n");//
	int de1, de2;//

	de1 = (rand() % 6) + 1;//
	de2 = (rand() % 6) + 1;//
	printf("Lancer: %d + %d = %d\n", de1, de2, de1 + de2);//

	if (de1 == de2)//
	{
		printf("Sortez de prison !\n");//
		Joueures[i].prison = false;//
		Joueures[i].position = 10+de1+de2;//
	}
	else if(Joueures[i].carteSortiedePrison > 0)
	{
	    printf("Sortez de prison !\n");//
		Joueures[i].prison = false;//
		Joueures[i].position = 10;//
		Joueures[i].carteSortiedePrison -= 1;
	}

	else Joueures[i].prison = true;//
}

//Lancer de dés
int lancerDedes(int player)
{
	int de1 = 0, de2 = 0, total = 0, compteur = 0,i = player;//

	printf("\n========== Lancer de des ==========\n");//
	do
	{
		de1 = (rand() % 6) + 1; de2 = (rand() % 6) + 1;//
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
					printf("        PROPRIETE : %s\n", Proprietes[i].proprietaire);//
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

		printf("\nAcquisition complete!\n");//
		printf("%s a ete acquis par %s.\n", Proprietes[Joueures[i].position].Nom, Joueures[i].Nom);//

	}
	else if ((Joueures[i].compte >= Proprietes[Joueures[i].position].prix)&&(Proprietes[Joueures[i].position].hypotheque == true))//
    {
		Joueures[i].compte -= ((Proprietes[Joueures[i].position].prix/2)+((Proprietes[Joueures[i].position].prix)*(10/100)));//
		strcpy(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom);//
		Proprietes[Joueures[i].position].hypotheque = false;

		printf("\nAcquisition complete!\n");//
		printf("%s a ete acquis par %s.\n", Proprietes[Joueures[i].position].Nom, Joueures[i].Nom);//

	}
	else
	{
		printf("N'a pas assez de thunes pour l'achat !");//
		printf("Vous avez besoin de %d euros pour finaliser l'achat.", Proprietes[Joueures[i].position].prix - Joueures[i].compte);//

	}
}

//acheter des proprietes
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
        printf("entrez le numero de la propriete a vendre \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//
        printf("Voulez-vous vendre - %s - pour M%d ?\n", Proprietes[numerodelapropriete].Nom, (Proprietes[numerodelapropriete].prix / 2));//
        printf(" 1 - Oui\n");//
        printf(" 0 - Non\n");//
        printf("saisir une option: ");//
        scanf("%d", &option);//
    }
    else
    {
        printf("Vous navez pas de propriete");
        option=2;
    }




menuvente://

	switch (option)//
	{
	case 1://
		Joueures[i].compte += Proprietes[numerodelapropriete].prix;//
		strcpy(Proprietes[numerodelapropriete].proprietaire, "aucun proprietaire");//

		printf("\nVente complete!\n");//
		printf("%s a ete vendu par %s.\n", Proprietes[numerodelapropriete].Nom, Joueures[i].Nom);//
		fflush(stdin);//
		getchar();//
		break;//
	case 2://
		break;//
	default://
		printf("Erreur! Option invalide.\n");//
		fflush(stdin);//
		getchar();//
		goto menuvente;//
		break;//
	}



}
/*
//Vente Aux Encheres des Proprietes
void venteAuxEncheresPropriete(int numplayer)
{
	int nJoueures = numplayer;//
	int offre = 10, nouvelleoffre = 0;
	int compteur = 0;
	bool venteAuxEncheres = true;
	int option = 0;

	for (int i = 0; i < nJoueures; i++)
	{
		Joueures[i].venteAuxEncheres = true;
	}

	do
	{
		for (int i = 0; i < nJoueures; i++)
		{
			if (Joueures[i].venteAuxEncheres == true)
			{
				printf("\n== Joueur %d ==\n", i);
			menuventeAuxEncheres:
				printf("Qu'est-ce que tu veux faire?\n");
				printf(" 1 - Offre\n");
				printf(" 2 - Abandonner\n");
				printf("\nsaisir une option: ");
				fflush(stdin);
				scanf("%d", &option);

				switch (option)
				{
				//enchere
				enchere:
				case 1:
					printf("Saisissez votre offre : ");
					scanf("%d", &nouvelleoffre);
					if (nouvelleoffre <= offre)
					{
						printf("Veuillez saisir une valeur supérieure à %d.\n", offre);
						goto enchere;
					}
					else if (nouvelleoffre > Joueures[i].compte)
					{
						printf("Vous n'avez pas assez de solde pour cette offre.\n");
						Joueures[i].venteAuxEncheres = false;
						printf("Le joueur %s n'est pas dans l'enchere",Joueures[i].Nom);
						break;
					}
					else if ((nouvelleoffre - offre) >= 10)
					{
						printf("Enchere %d pour le joueur %d");
						break;
					}
					else
					{
						printf("Besoin d'encherir sur des valeurs superieures à M10");
					}
					break;

				//Abandonner
				case 2:
					printf("a renoncé à l'enchere.");
					printf("Le joueur %d n'est pas dans l'enchere");
					Joueures[i].venteAuxEncheres = false;
					compteur++;
					break;

				//option Invalidé
				default:
					printf("entree invalide");
					goto menuventeAuxEncheres;
					break;
				}
			}
		}
		if (compteur == nJoueures - 1) venteAuxEncheres = false;
	} while (venteAuxEncheres == true);
}*/

//Construire une maison
void construireMaison(int player)
{
	int i = player;//numero du joueur
	int Couleurcompteur = 0;//compteur couleur
	int proprietairecompteur = 0;//
	int CouleurCodes[3];//
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
        printf("entrez le numero de la propriete a vendre \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//

        for (int j = 0; j < 40; j++)//
        {
            //Stocke les codes des propriétaires ayant la même Couleur
            for (int k = 0; k < 3; k++)//
            {
                if ((strcmp(Proprietes[numerodelapropriete].Couleur, Proprietes[j].Couleur) == 0)&&(strcmp(Proprietes[numerodelapropriete].proprietaire, "aucun proprietaire") == 0))//
                {
                    Couleurcompteur++;//
                    CouleurCodes[k] = j;//
                }
            }

            //Vérifiez si ces propriétés appartiennent au Joueur qui a l'intention de construire des maisons.
            for (int k = 0; k < Couleurcompteur; k++)//
            {
                if (strcmp(Proprietes[CouleurCodes[k]].proprietaire, Joueures[i].Nom) == 0)//
                {
                    proprietairecompteur++;//
                    if (Couleurcompteur == proprietairecompteur)//
                    {
                        if (Batiments.nMaison>0)
                        {
                            Proprietes[numerodelapropriete].nombreDeMaisons++;//
                            Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison ;//
                            Batiments.nMaison -= 1;
                            printf("maison construite avec succes!\n");//
                            printf("Cette propriete a maintenant %d maison(s).\n", Proprietes[numerodelapropriete].nombreDeMaisons);//
                        }
                        else
                        {
                            printf("Il n'a plus de maison attendez que des joueurs en vendent.");//
                        }
                    }
                    else printf("Il n'a pas les %d proprietes necessaires pour construire des maisons.", Couleurcompteur);//
                }
            }
        }
    }
    else
    {
        printf("Vous navez pas de propriete");
    }
}

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
        printf("entrez le numero de la propriete a vendre \n");//
        scanf("%d", &numerodelapropriete);//
        }while(strcmp(Proprietes[numerodelapropriete].proprietaire, Joueures[i].Nom) != 0);//

        if ((Proprietes[numerodelapropriete].nombreDeMaisons == 4)&&(Proprietes[numerodelapropriete].nombreHotel <1))
        {
            if (Batiments.nHotel>0)
            {
                Proprietes[numerodelapropriete].nombreDeMaisons -= 4;//
                Batiments.nMaison += 4;
                Joueures[i].compte -= Proprietes[numerodelapropriete].prixMaison ;//
                Proprietes[numerodelapropriete].nombreHotel += 1;//
                Batiments.nHotel -= 1;
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
        printf("Vous navez pas de propriete");
    }
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
        printf("entrez le numero de la propriete a vendre \n");//
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
        option=2;
    }

    if (Proprietes[i].nombreDeMaisons == 0)
    {
        menuhypotheque://
            switch (option)//
            {
            case 1://
                Joueures[i].compte += (Proprietes[numerodelapropriete].prix / 2);
                Proprietes[numerodelapropriete].hypotheque = true;//
                printf("La propriete de %s a ete hypothequee.\n", Proprietes[numerodelapropriete].Nom);//
                fflush(stdin);//
                getchar();//
                break;//
            case 2:
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

void carteChance()
{

}

void carteCaissedeCommunaute()
{

}



int main()
{        affichePlateau(0);
	initialiseTable();//

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
		printf("Algorithmes et structure de donnees, enseigne par le professeur Jose Carlos,\n");
		printf("UC du Diplome d'Ingenieur en developpement de Jeux Numériques.\n");
		printf("\nAuteurs : Gil Ferraz (10660) et Teresa Loureiro (10661)\n");
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
	getchar();//
	system("cls");//

	int tour = 1;//
	//Exécution du tour
	do
	{
		for (int i = 0; i < nJoueures; i++)//
		{       affichePlateau(Joueures[i].position);
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
            else prison(i);//


			//Vérifier si le Joueur est dans ou a passé la Case Départ
			if ((Joueures[i].position == 0) || (Joueures[i].position < ancienneposition))//
			{
				printf("\n Passe par depart. Recevez 200 euros..\n");//
				Joueures[i].compte += 200;//
				printf("\n compte Actuel : %d euros\n", Joueures[i].compte);//
			}
			printf("\nplace actuel = Case %d - %s\n", Joueures[i].position, Proprietes[Joueures[i].position].Nom);//

			//Détails de la maison où se trouve le Joueur
			if (Proprietes[Joueures[i].position].prix != 0)//
			{
				printf("\n             Popriete           \n");
				printf(" __________________________________\n");
				printf(" |                                |\n");
				printf(" | %-30.30s |   * Propriete : %s\n", Proprietes[Joueures[i].position].Nom, Proprietes[Joueures[i].position].proprietaire);//
				printf(" | %-30.30s |\n", Proprietes[Joueures[i].position].localisation);//
				printf(" |                                |   * maison        : %d\n", Proprietes[Joueures[i].position].nombreDeMaisons);//
				printf(" |couleur %-11.11sLe prix  $%3d|   * HOTEL        : %d\n", Proprietes[Joueures[i].position].Couleur, Proprietes[Joueures[i].position].prix, Proprietes[Joueures[i].position].nombreDeMaisons);//
				printf(" | ------------------------------ |\n");
				printf(" |             Loyer              |\n");
				printf(" |   Terrain              $%3d    |\n", Proprietes[Joueures[i].position].loyer[0]);//
				printf(" |                                |\n");
				printf(" |   Groupe de couleurs   $%3d    |\n", Proprietes[Joueures[i].position].loyer[0] * 2);//
				printf(" |                                |\n");
				printf(" |   Avec 1 maison        $%3d    |\n", Proprietes[Joueures[i].position].loyer[1]);//
				printf(" |                                |\n");
				printf(" |   Avec 2 maison        $%3d    |\n", Proprietes[Joueures[i].position].loyer[2]);//
				printf(" |                                |\n");
				printf(" |   Avec 3 maison        $%3d    |\n", Proprietes[Joueures[i].position].loyer[3]);//
				printf(" |                                |\n");
				printf(" |   Avec 4 maison        $%3d    |\n", Proprietes[Joueures[i].position].loyer[4]);//
				printf(" |                                |\n");
				printf(" |   Avec un HOTEL        $%3d    |\n", Proprietes[Joueures[i].position].loyer[5]);//
				printf(" | ------------------------------ |\n");
				printf(" |  Prix de chaque Maison $%3d    |\n", Proprietes[Joueures[i].position].prixMaison);//
				printf(" |                                |\n");
				printf(" |  Prix de chaque Hotel  $%3d    |\n", Proprietes[Joueures[i].position].prixMaison);//
				printf(" |                                |\n");
				printf(" |  Montant de l'hypotheque $%3d  |\n", Proprietes[Joueures[i].position].prix/2+Proprietes[Joueures[i].position].prix*10/100);//
				printf(" | ------------------------------ |\n");
				printf(" |                                |\n");
				printf(" __________________________________\n");
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "CHANCE") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Retirer une carte CHANCE\n");//
				fflush(stdin);//
				getchar();//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "Caisse de communaute") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("retirer une carte Caisse de communaute...\n");//
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
				printf("\nCompte actuel : %d", Joueures[i].compte);//
			}
			else if (strcmp(Proprietes[Joueures[i].position].Nom, "IMPOTS SUR LE REVENU") == 0)//
			{
				printf("\n             %s           \n", Proprietes[Joueures[i].position].Nom);//
				printf("Payer l'IMPOTS SUR LE REVENU M200.");//
				fflush(stdin);//
				getchar();//
				Joueures[i].compte -= 200;//
				printf("\nCompte actuel : %d", Joueures[i].compte);//
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
			if (strcmp(Proprietes[Joueures[i].position].proprietaire, "aucun proprietaire") == 0)// en fonction des cases
			{
				printf("2 - Acheter une propriete\n");//
				printf("3 - propriete aux encheres\n");//
			}
			if (strcmp(Proprietes[Joueures[i].position].proprietaire, Joueures[i].Nom) == 0)//
			{
				printf("4 - Construire une Maison\n");//
				printf("5 - Construire un Hotel\n");//
			}
            printf("6 - Vendre des constructions\n");//
			printf("7 - Hypothequer des Propriete\n");//
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
				if (strcmp(Proprietes[Joueures[i].position].proprietaire, "aucun proprietaire") == 0)//
					acheterPropriete(i);//
				else goto menuJoueur;//
				break;//

			//3 - Vente aux encheres une propriété
			case 3: printf(" pas implemente");//
                    goto menuJoueur;//
				break;//

			//4 - Construire une maison
			case 4: construireMaison(i);//
                    goto menuJoueur;//
				break;//

			//5 - Construire un Hotel
			case 5: construireHotel(i);//
				break;//

			//6 - Vendre une propriété
			case 6: vendreConstruction(i);//
                    goto menuJoueur;//
				break;//

			//7 - Hypothequer une propriété
			case 7: hypothequerPropriete(i);//
                    goto menuJoueur;//
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
