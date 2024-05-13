/*
Écrire :
    • une fonction, nommée f1, se contentant d’afficher « bonjour » (elle ne possédera aucun argument, ni valeur de retour) ;
    • une fonction, nommée f2, qui affiche « bonjour » un nombre de fois égal à la valeur reçue en argument (int) et qui ne renvoie aucune valeur ;
    • une fonction, nommée f3, qui fait la même chose que f2, mais qui, de plus, renvoie la valeur (int) 0.
Écrire un petit programme appelant successivement chacune de ces 3 fonctions, après les avoir convenablement déclarées (on ne fera aucune hypothèse sur les emplacements relatifs des différentes fonctions composant le fichier source).
*/

#include <iostream>
using namespace std ;
void f1 (void)
{   cout << "bonjour1\n" ;
}
void f2 (int n)
{   int i ;
    for (i=0 ; i<n ; i++)
        cout << "bonjour2\n" ;
}
int f3 (int n)
{   int i ;
    for (i=0 ; i<n ; i++)
        cout << "bonjour3\n" ;
    return 0 ;
}
int main()
{   void f1 (void) ;
    void f2 (int) ;
    int f3 (int) ;
    f1 () ;
    f2 (2) ;
    f3 (5) ;
}

/*Résultat :
bonjour1
bonjour2
bonjour2
bonjour3
bonjour3
bonjour3
bonjour3
bonjour3


=== Code Execution Successful ===
*/
