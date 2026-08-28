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
	// *** Exercice.01
// Description de l’exercice 
	                                  
	double a = 10.0 + 12.0 / 8;					// 11.5
	double b = 27.0 + 3.0 / 14;				    // 27.21 
	double c = (10 + 20 + 30 + 40 + 50) / 11;	// 13.6363... 
	double d = (double)c;								// 13 
	double e = (180.0 / 7.0) + c / 2;					// 32.2142... 
	double f = d / 15;							// 0.8666... 



	cout << format("A = {:.2f}\n",a);
	cout << format("B = {:.5f}\n",b);
	cout << format("C = {:.3f}\n",c);
	cout << format("D = {:.0f}\n",d);
	cout << format("E = {:.8f}\n",e);
	cout << format("F = {:.4f}\n",f);
	system("pause");
	system("cls");

	cout << "Entrez la valeur de A: ";
	double a1;
	cin >> a1;
	cout << "Entrez la valeur de B: ";
	double b1;
	cin >> b1;
	cout << "Entrez la valeur de C: ";
	double c1;
	cin >> c1;

	cout << "Resultat de la formule :";
	
	
	
	


} // Fin de la fonction main(), ne pas supprimer