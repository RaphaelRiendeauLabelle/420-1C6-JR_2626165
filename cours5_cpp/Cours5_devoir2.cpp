/* Auteur: Raphael Riendeau-Labelle
Date:20260827
description : entrées sorties à la console*/
#include <iostream>
#include <string>
#include <format>
// Utilisation du namespace Standard (std::) pour les librairies
using namespace std:

int main() {
	

	// Configuration de la console en Français Unicode pour les accents
	setlocale(LC_ALL, "fr_CA.UTF-8");

	// Affichage de l'en-tête
	cout << "--- Cours 05 - devoir ---\n";

	cout << "Entrer la largeur du rectangle : ";
	int largeurRectangle;
	cin >> largeurRectangle;

	cout << "Entrer la hauteur du rectangle : ";
	string haut_rectangle;
	cin >> haut_rectangle;


	if (largeurRectangle <= 0)
	{
		cout << "Erreur : largeur ne peut être 0 ou négative.";
	}
	else (haut_rectangle <= 0);
	{
		cout << "Erreur : hauteur ne peut être 0 ou négative.";
	}

else if (largeurRectangle == haut_rectangle);
{
	cout << format("Carré {} par {}\n", largeurRectangle);
}
else if (largeurRectangle > haut_rectangle); {
	cout << format("Rectangle {} par {}\n, largeurRectangle haut_rectangle"); 

		double ratioHauteur = largeurRectangle / haut_rectangle;


	cout << format("{:3.f} % plus large que haut\n", ratioHauteur);

}
else
cout << format("Rectangle {} par {}\n", largeurRectangle, haut_rectangle);
cout << "Plus haut que large\n";


Ratio = haut_rectangle / largeur;


cout << format("{:.3f} % plus haut que large\n", Ratio);
	}

	double a = largeurRectangle * haut_rectangle;
	double PERIMÈTRE = 2 * (largeurRectangle + haut_rectangle)


		cout << format("Aire : {:.2f}\n", a);
	cout << format("Perimètre : {:.2f}\n", PERIMÈTRE);

	


	
	return 0
}