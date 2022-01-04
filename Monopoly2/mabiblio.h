#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED

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

//Structure des données pour l'enregistrement des joueurs
typedef struct enregistrementDesJoueurs
{
	char Nom[10];//
	int compte;//
	int position;//
	int carteSortiedePrison;//
	bool venteAuxEncheres;//
	bool prison;
} Joueur;//

Joueur Joueures[8];//

void initialiseTable();
void affichePlateau();
void initialiseTable1();
void hypothequerPropriete(int player);
void vendreConstruction(int player);
void Faillite(int player);
int menuInitial();
int selectionJoueures();
void prison(int player, int nJoueures);
int lancerDedes(int player);
void loyer(int player, int nJoueures);
int nouvelleposition(int posActuel, int lancerDedes);
void etatduJeu(int nplayer);
void acheterPropriete(int player);
void offre(int player, int numplayer);
void construireHotel(int player);
void construireMaison(int player);
void carteChance(int player, int nJoueures);
void carteCaissedeCommunaute(int player, int nJoueures);
int monopolyfr();

void initialiseTableEn();
void affichePlateauEn();
void hypothequerProprieteEn(int player);
void vendreConstructionEn(int player);
void FailliteEn(int player);
int menuInitialEn();
int selectionJoueuresEn();
void prisonEn(int player, int nJoueures);
int lancerDedesEn(int player);
void loyerEn(int player, int nJoueures);
int nouvellepositionEn(int posActuel, int lancerDedes);
void etatduJeuEn(int nplayer);
void acheterProprieteEn(int player);
void offreEn(int player, int numplayer);
void construireHotelEn(int player);
void construireMaisonEn(int player);
void carteChanceEn(int player, int nJoueures);
void carteCaissedeCommunauteEn(int player, int nJoueures);
int monopolyEn();

#endif // MABIBLIO_H_INCLUDED
