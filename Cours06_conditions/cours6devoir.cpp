/* Auteur: Raphael Riendeau-Labelle
Date:20260827
description : entrées sorties à la console*/
// Inclusion des librairies
#include <format>
#include <iostream>
#include <string>
using namespace std;
//Exercice 1
int main()
{

	// Réponse A
	bool reponseA = 10 > 5 || (45 <= 40 && "a" != "b");

	// 10 > 5 || (45 <= 40 && "a" != "b");
	// 1) true || (45 <= 40 && "a" != "b")
	// 2) true || (false && "a" != "b")
	// 3) true || (false && true)
	// 4) true || false
	// 5) true



	// Réponse B
	int a = 20;
	int b = 30;
	int c = 50;

	bool reponseB = c == a + b && (b - 30 > 0 || b - a > 0);

	// c == a + b && (b - 30 > 0 || b - a > 0);
	// 1) 50 == 20 + 30 && (b - 30 > 0 || b - a > 0)
	// 2) true && (30 - 30 > 0 || b - a > 0)
	// 3) true && (0 > 0 || b - a > 0)
	// 4) true && (false || 30 - 20 > 0)
	// 5) true && (false || 10 > 0)
	// 6) true && (false || true)
	// 7) true && true
	// 8) true



	// Réponse C
	int d = -10;
	int e = 100;
	int f = -55;

	bool reponseC = (d > 0 || e > 0) &&
		(d > e || (e > 0 || f > 0));

	// (d > 0 || e > 0) && (d > e || (e > 0 || f > 0));
	// 1) (false || e > 0) && (d > e || (e > 0 || f > 0))
	// 2) (false || true) && (d > e || (e > 0 || f > 0))
	// 3) true && (d > e || (e > 0 || f > 0))
	// 4) true && (false || (e > 0 || f > 0))
	// 5) true && (false || (true || f > 0))
	// 6) true && (false || (true || false))
	// 7) true && (false || true)
	// 8) true && true
	// 9) true



	// Réponse D
	double g = -10.0;
	int h = 100;
	string i = "i";

	bool reponseD = ((g == -10.0 && h == g) ||
		i == "I" ||
		(h > g && i == "i"));

	// ((g == -10.0 && h == g) || i == "I" || (h > g && i == "i"));
	// 1) (true && h == g) || i == "I" || (h > g && i == "i")
	// 2) (true && false) || i == "I" || (h > g && i == "i")
	// 3) false || i == "I" || (h > g && i == "i")
	// 4) false || false || (h > g && i == "i")
	// 5) false || false || (true && i == "i")
	// 6) false || false || (true && true)
	// 7) false || false || true
	// 8) false || true
	// 9) true



	// Affichage des réponses finales
	cout << format("Réponse finale A : {}\n", reponseA);
	cout << format("Réponse finale B : {}\n", reponseB);
	cout << format("Réponse finale C : {}\n", reponseC);
	cout << format("Réponse finale D : {}\n", reponseD);

	//Exercice 2 
// Calculer un rabais selon le montant des achats,
// le type de membre et le nombre de produits achetés.
		double montant;
		int nombreProduits;
		string membre;

		cout << "Entrer le total de la facture : ";
		cin >> montant;

		cout << "Entrer le nombre de produits achetes : ";
		cin >> nombreProduits;

		cout << "Entrer le type de membre (or, argent, bronze) : ";
		cin >> membre;

		bool rabais = false;

		// Vérification du rabais selon le type de membre

		if (membre == "or")
		{
			rabais = montant >= 30;
		}
		else if (membre == "argent")
		{
			rabais = montant >= 50 || nombreProduits >= 5;
		}
		else if (membre == "bronze")
		{
			rabais = montant >= 100 && nombreProduits >= 10;
		}

		if (rabais)
		{
			double montantRabais = montant * 0.25;
			double total = montant - montantRabais;

			cout << "\n*** Rabais ***\n\n";

			cout << format("Membre                 : {}\n", membre);
			cout << format("Nombre de produits    : {}\n", nombreProduits);
			cout << format("Sous-total             : {:.2f} $\n\n", montant);

			cout << format("Rabais (25%)           : {:.2f} $\n", montantRabais);
			cout << format("Total                  : {:.2f} $\n", total);
		}
		else
		{
			cout << format("\nTotal                  : {:.2f} $\n", montant);
		}

		return 0;

	}
