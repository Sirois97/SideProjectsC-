//Project #1 - Ecrit par Alexandre Sirois, le 15 Octobre 2017. / Written by Alexandre Sirois, October 15th 2017.
//Machine a liqueur / Cola Machine

#include "stdafx.h"
#include <iostream>

using namespace std;

//Fonction de la machine qui presente les choix + demande le choix

int machine(int b)
{
machine:
	int prix;
	cout << "Choix 1 : Coca-Cola (1$) \n";
	cout << "Choix 2 : Sprite (2$) \n";
	cout << "Choix 3 : Mountain Dew (3$) \n";
	cout << "Choix 4 : Pepsi Max (4$) \n";
	cout << "Choix 5 : Gatorade (5$) \n\n";
	cout << "Appuyer sur 1 , 2 , 3 , 4 ou 5 pour faire votre choix: ";
	cin >> b;
	cout << endl;

	if (b == 1)
	{
		cout << "Vous avez choisi le Coca- Cola. \n";
		cout << "Votre total sera de 1$ \n";
		prix = 1;
	}
	else if (b == 2)
	{
		cout << "Vous avez choisi le Sprite. \n";
		cout << "Votre total sera de 2$ \n";
		prix = 2;
	}
	else if (b == 3)
	{
		cout << "Vous avez choisi la Mountain Dew. \n";
		cout << "Votre total sera de 3$ \n";
		prix = 3;
	}
	else if (b == 4)
	{
		cout << "Vous avez choisi le Pepsi Max. \n";
		cout << "Votre total sera de 4$ \n";
		prix = 4;
	}
	else if (b == 5)
	{
		cout << "Vous avez choisi la Gatorade. \n";
		cout << "Votre total sera de 5$ \n";
		prix = 5;
	}
	else
	{
		cout << "Choix invalide \n\n";
		goto machine;
	}

	return prix;
}

//Fonction main qui affiche, demande l'argent et retourne le change de l'utilisateur.

int main()
{
	float argent = 0, prix = 0;
	int b = 0;

	cout << "*****LA MACHINE A ALEX*****" << endl << endl;
	prix = machine(b);

	float reste = 0;

	cout << endl;
	cout << "Veuiller entrer le montant d'argent que vous avez : ";
	cin >> argent;
	cout << "Votre argent: " << argent << "$" << endl;

	if (argent >= prix)
	{
		reste = argent - prix;
		cout << endl;
		cout << "Il vous reste: " << reste << "$ \n";
		cout << "Merci d'avoir eu choisi ma machine! A plus tard! \n\n";
	}
	else
	{
		cout << "Vous n'avez pas assez d'argent, desoler. \n";
	}

	system("pause");
}

