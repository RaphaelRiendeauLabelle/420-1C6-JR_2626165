/* Auteur: Raphael Riendeau-Labelle
Date:20260827
description : entrées sorties à la console*/

// Inclusion des librairies
#include <format>
#include <iostream>
#include <string>

// Utilisation du namespace Standard (std::) pour les librairies
using namespace std;


int main()
{
    // Configurer la console en Unicode pour les accents
    setlocale(LC_ALL, "fr_CA.UTF-8");

    // Afficher l'en-tête

    cout << "***********************************************************\n";
    cout << "*                   Imprimerie CSTJ                       *\n";
    cout << "*       Par Raphael Riendeau - Labelle(2626165)           *\n";
    cout << "***********************************************************\n";

    //Afficher type de clients
    cout << "--- Numéro client ---\n";
    int numeroClient;
    cin >> numeroClient;

   //Type de client Administrateur
      if (numeroClient <= 5000 && numeroClient >= 3000)
        {
            cout << format("Commande pour l'administateur {}", numeroClient);
        }

        //Type de client Enseignant
      else if (numeroClient <= 10000 && numeroClient >= 20000)
        {
            cout << format("Commande pour l'enseignant {}", numeroClient);
        }

        //Type de client Étudiant
      else if (numeroClient <= 100000 && numeroClient >= 9999999)
        {
            cout << format("Commande pour l'étudiant {}", numeroClient);
        }
      else
      {
          cout << format("Erreur : {} est un matricule ou numéro d’employé invalide, impression annulée.", numeroClient);
      }
}