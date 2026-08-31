
/* Auteur: Raphael Riendeau-Labelle
Date:20260827
description : entrées sorties à la console*/
#include <iostream>
#include <string>
#include <format>
using namespace std;

int main()
{
	// Configuration de la console en Français Unicode pour les accents
	setlocale(LC_ALL, "fr_CA.UTF-8");

	// Affichage de l'en-tête
	cout << "--- Cours 04 - devoir ---\n";
	
#pragma endregion
	//Exercice.01
// Description de l’exercice 
	                                  
	double a = 10.0 + 12.0 / 8;					// 11.5
	double b = 27.0 + 3.0 / 14;				    // 27.21 
	double c = (10.0 + 20 + 30 + 40 + 50) / 11;	// 13.6363... 
	double d = (double)c;						// 13 
	double e = (180.0 / 7.0) + c / 2;			// 32.2142... 
	double f = 13.0 / 15;					    // 0.8666... 



	cout << format("A = {:.2f}\n",a);
	cout << format("B = {:.5f}\n",b);
	cout << format("C = {:.5f}\n",c);
	cout << format("D = {:.0f}\n",d);
	cout << format("E = {:.8f}\n",e);
	cout << format("F = {:.4f}\n",f);
	system("pause");
	system("cls");

    //Exercice.02
	cout << "Entrez la valeur de A: ";
	double a1;
	cin >> a1;
	cout << "Entrez la valeur de B: ";
	double b1;
	cin >> b1;
	cout << "Entrez la valeur de C: ";
	double c1;
	cin >> c1;
	
	double resultatFormule = (a1 * a1 * a1) + (b1 * b1) + c1; 
	
	cout << format("Résultat de la formule :\n{:.1f}^3 + {:.1f}^2 + {:.1f} = {:.3f}\n", a1, b1, c1, resultatFormule);

    system("pause");
    system("cls");
    //Exercice.03

    cout << "Numéro de facture : ";
    int numeroFacture;
    cin >> numeroFacture;

    cout << "Nom du client : ";
    string nomClient;
    cin >> nomClient;

    //Article_1
    cout << "\nNom de l'article 1 : ";
    string article1;
    cin >> article1;

    cout << "Coût de l'article 1 : ";
    double coutArticle1;
    cin >> coutArticle1;

    cout << "Quantité : ";
    int quantite1;
    cin >> quantite1;

    //Article_2
    cout << "\nNom de l'article 2 : ";
    string article2;
    cin >> article2;

    cout << "Coût unitaire : ";
    double coutUnitaire2;
    cin >> coutUnitaire2;

    cout << "Quantité : ";
    int quantite2;
    cin >> quantite2;

    //Article_3
    cout << "\nNom de l'article 3 : ";
    string article3;
    cin >> article3;

    cout << "Coût unitaire : ";
    double coutUnitaire3;
    cin >> coutUnitaire3;

    cout << "Quantité : ";
    int quantite3;
    cin >> quantite3;

    //Calcul
    double sousTotal1 = coutArticle1 * quantite1;
    double sousTotal2 = coutUnitaire2 * quantite2;
    double sousTotal3 = coutUnitaire3 * quantite3;

    double sousTotal = sousTotal1 + sousTotal2 + sousTotal3;

    double TPS = sousTotal * 0.05;
    double TVQ = sousTotal * 0.09975;
    cout << "--------------------------------------\n";
    double total = sousTotal + TPS + TVQ;

    //autre que je ne sais pas comment nommmé...
    cout << "Nom de l'article\tCoût\t\tQuantité\tSous-total\n";
    cout << format("Facture : c}\n", numeroFacture);
    cout << format("Client : {}\n\n", nomClient);
    cout << format("{:<16}\t{:.2f}$\t\t{}\t\t{:.2f}$\n", article1, coutArticle1, quantite1, sousTotal1);
    cout << format("{:<16}\t{:.2f}$\t\t{}\t\t{:.2f}$\n", article2, coutUnitaire2, quantite2, sousTotal2);
    cout << format("{:<16}\t{:.2f}$\t\t{}\t\t{:.2f}$\n", article3, coutUnitaire3, quantite3, sousTotal1);
    cout << "\n";
    cout << format("Sous-total\t\t\t\t\t{:.2f}$\n", sousTotal);
    cout << format("TPS 5.000 %\t\t\t\t\t{:.2f}$\n", TPS);
    cout << format("TVQ 9.975 %\t\t\t\t\t{:.2f}$\n", TVQ);
    cout << format("Total\t\t\t\t\t\t{:.2f}$\n", total);
    system("pause");
    system("cls");
    
} 