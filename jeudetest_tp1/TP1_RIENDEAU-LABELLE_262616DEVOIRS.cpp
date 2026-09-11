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

    // numeroClient = 123456

    if (numeroClient >= 1000000 && numeroClient <= 9999999)
    {
        //Type de client Étudiant
        cout << format("Commande pour l'étudiant {}", numeroClient);
    }
    else if (numeroClient >= 10000 && numeroClient <= 20000)
    {
        //Type de client Enseignant
        cout << format("Commande pour l'enseignant {}", numeroClient);
    }  
    else if (numeroClient <= 3000 && numeroClient >= 5000)
    {
        //Type de client Administrateur
        cout << format("Commande pour l'administateur {}", numeroClient);
    }
    else
    {
        //erreur1
        cout << format("Erreur : {} est un matricule ou numéro d’employé invalide, impression annulée.\n", numeroClient);
        system("pause");
        return 0;
    }
    
    //NOMBRE DE PAGES 
    cout << "---Pages---\n";
    int nombrePages;
    cin >> nombrePages;

    if (nombrePages >= 0)
    {
         cout << format("Le nombre de page sélectionné est {}\n", nombrePages);
    }
    else
    {
        //erreur2
        cout << format("Erreur : {} n’est pas un nombre de pages valide, impression annulée.\n", nombrePages);
    }


    system("pause");


    //Exemplaires
    cout << "---Exemplaires---\n";
    int nombreExemplaires;
    cin >> nombreExemplaires;

    // Valider le nombre d'exmplaires (0, -1, -1000)
    if (nombreExemplaires < 1)
    {
        //erreur3
        cout << format("Erreur : {} n’est pas un nombre d'exemplaire valide, impression annulée.\n", nombreExemplaires);
        system("pause");
        return 0;
    }
   

    cout << format("Le nombre d'exemplaire sélectionné est {}\n", nombreExemplaires);
    
    
    //Papier
    cout << "--- Papier ---\n";
    int nombrePapier;
    cin >> nombrePapier;
   
   // Valider le nombre de papiers
    if (nombrePapier < 1)
    {
        //erreur4
        cout << format("Erreur : {} n’est pas un nombre de papier valide, impression annulée.\n", nombrePapier);
        system("pause");
        return 0;
    }

   //Sélection du choix de papier
   
   //Lettre
    cout << "--- Papier ---\n";

    //1) Lettre(8 1 / 2 x 11) (###.## $ par page)	// Coût de 0.11 $ par page
    //2) Légal(8 1 / 2 x 14)  (###.## $ par page)	// Coût de 0.13 $ par page
    //3) Photo(###.## $ par page)	                // Coût de 1.24 $ par page

    int choixPapier;
    cin >> choixPapier; // 1 2 3 z
   
    // Variable
    // 0.11 0.13 1.24
    // prixPagePage


    // Vérifier le choix, convertir en une valeur par page (prixPagePage)

#pragma endregion
#pragma endregion






    // Calculs
    // prixPagePage
}