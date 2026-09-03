/* Auteur: Raphael Riendeau-Labelle
Date:20260827
description : entrées sorties à la console*/
#include <format>
#include <iostream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "fr_CA.UTF-8");

    cout << "--- Devoir 5 - Raph - 2626165 ---\n\n";

    cout << "Entrer la largeur du rectangle : ";
    int largeurRectangle;
    cin >> largeurRectangle;

    cout << "Entrer la hauteur du rectangle : ";
    int hauteurRectangle;
    cin >> hauteurRectangle;

    if (largeurRectangle <= 0)
    {
        cout << "Erreur : largeur ne peut être 0 ou négative.\n";
    }
    else if (hauteurRectangle <= 0)
    {
        cout << "Erreur : hauteur ne peut être 0 ou négative.\n";
    }
    else if (largeurRectangle == hauteurRectangle)
    {
        cout << format("Carré {} par {}\n",largeurRectangle);
    }
    else if (largeurRectangle > hauteurRectangle)
    {
        cout << format("Rectangle {} par {}\n",largeurRectangle, hauteurRectangle);

        double ratioHauteur = double (largeurRectangle) / hauteurRectangle;

        cout << format("{:.3f} fois plus large que haut\n",ratioHauteur);
    }
    else
    {
        cout << format("Rectangle {} par {}\n",largeurRectangle, hauteurRectangle );

        cout << "Plus haut que large\n";

        double ratioHauteur =double (hauteurRectangle) / largeurRectangle;

        cout << format("{:.3f} fois plus haut que large\n", ratioHauteur);
    }

    double aire = double(largeurRectangle) * hauteurRectangle;

    double perimetre =
        2.0 * (largeurRectangle + hauteurRectangle);

    cout << format("Aire : {:.2f}\n", aire);
    cout << format("Périmètre : {:.2f}\n", perimetre);

    system("pause");
    system("cls");

    return 0;
}