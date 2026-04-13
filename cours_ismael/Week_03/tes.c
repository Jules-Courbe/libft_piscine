#include <stdio.h>
Exercice : Gestion d’un tableau avec pointeurs

Écris un programme en C qui doit :

demander à l’utilisateur combien de nombres il veut saisir ;
réserver dynamiquement la mémoire nécessaire pour stocker ces nombres ;
remplir le tableau uniquement en utilisant des pointeurs ;
afficher tous les éléments uniquement avec l’arithmétique des pointeurs ;
calculer :
la somme des éléments,
la moyenne,
la plus grande valeur,
la plus petite valeur ;
créer une fonction qui reçoit un pointeur vers le tableau et sa taille pour faire ces calculs ;
libérer correctement la mémoire à la fin.
Contraintes

N’utilise pas la notation tableau[i] dans le traitement principal.
Passe les données aux fonctions avec des pointeurs.
Vérifie que l’allocation mémoire a réussi.
Gère le cas où l’utilisateur entre une taille invalide.
Ce que ça t’entraîne à faire

comprendre la différence entre une variable, son adresse, et sa valeur ;
manipuler un pointeur pour parcourir un tableau ;
utiliser malloc et free ;
passer un tableau à une fonction ;
modifier ou lire des données via des adresses mémoire.
Questions pour te guider

Quel type de pointeur faut-il pour stocker des entiers ?
Que retourne malloc ?
Comment accéder à la valeur pointée par une adresse ?
Comment avancer d’un élément dans un tableau avec un pointeur ?
Comment une fonction peut-elle “renvoyer” plusieurs résultats via des pointeurs ?
Petit défi bonus
Ajoute une fonction qui échange la plus petite et la plus grande valeur du tableau, uniquement via des pointeurs.

Si tu veux, je peux aussi te préparer :

une progression en 3 exercices sur les pointeurs,
ou te faire un énoncé type examen sur ce thème.


int main(void)
{

}