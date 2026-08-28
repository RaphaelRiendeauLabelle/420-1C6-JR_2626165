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