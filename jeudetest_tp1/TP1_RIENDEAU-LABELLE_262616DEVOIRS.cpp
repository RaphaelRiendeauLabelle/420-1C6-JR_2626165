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

    if (numeroClient <= 5000 && numeroClient >= 3000)
    {
        //Type de client Administrateur
        cout << format("Commande pour l'administateur {}", numeroClient);
    }

       
      else if (numeroClient <= 10000 && numeroClient >= 20000)
        {
        //Type de client Enseignant
            cout << format("Commande pour l'enseignant {}", numeroClient);
        }

        
      else if (numeroClient <= 100000 && numeroClient >= 9999999)
        {
        //Type de client Étudiant
            cout << format("Commande pour l'étudiant {}", numeroClient);
        }
      else
      {
          cout << format("Erreur : {} est un matricule ou numéro d’employé invalide, impression annulée.", numeroClient);
      }
    system("pause");
    system("cls");
      //NOMBRE DE PAGES 
      cout << "---Pages---\n";
      int nombrePages;
      cin >> nombrePages;

      cout << format("Entrer le nombre de pages :",nombrePages);

    if (nombrePages >=0 && nombrePages <=10000)
      {
          cout << format("Erreur : ### n’est pas un nombre de pages valide, impression annulée.");
      }

      else if (nombrePages <= 0 && nombrePages  >= 10000)
      {
        cout << format("Le nombre de page sélectionné est {}", nombrePages)
      }
    system("pause");
    system("cls");
#pragma endregion
}