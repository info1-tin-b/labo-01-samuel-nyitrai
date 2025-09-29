/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h>                            //insertion des librairies                            
#include <stdio.h>    


int gcd(int a, int b) {                       //insertion de a et b 
  int r;                                      //insertion de r
  while (b != 0) {                            //Création boucle ou la condition b ne peut pas=0 
    r = a % b;                                //Calcule du modulo de a et b
    a = b;                                    //Transmet la valeur de b à a 
    b = r;                                    //Transmet la valeur de r à b
  }
  return a;                                   //Si b=0 alors pgdc=a donc on renvoi a, sinon on recommence  
}

int main(int argc, char* argv[]) {            // fonction principale, argc = nb d’arguments, argv = liste des arguments
    if (argc <= 2) {                          // si on donne pas au moins 2 nombres en argument -> erreur
        return -1;                            // on arrête le programme et on renvoie -1 (erreur)
    }

    int a = atoi(argv[1]);                    // on récupère le 1er argument et on le transforme en entier
    int b = atoi(argv[2]);                    // pareil avec le deuxième argument
    int result = gcd(a, b);                   // on appelle la fonction gcd                            

    printf("%d\n",result);                    //%d pour retour du resultat en nombre entier 

    return 0;                                 //Si pas de problème  
}
