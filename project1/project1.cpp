// project1.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double x(0), y(0); 
	cout << "Calcul de l-addition x+y !" << endl;          
 
	
   cout << "Donnez une valeur pour x : "; 
   cin >> x;
 
   cout << "Donnez une valeur pour y : "; 
   cin >> y;
 
   double const resultat(x + y); 
 
   cout << x << " + " << y << " = " << resultat << endl;
   
    return 0;
}

