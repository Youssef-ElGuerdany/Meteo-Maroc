+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ 13dna.exe@gmail.com ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Ce programme commence par inclure les bibliothèques stdio.h et stdlib.h qui fournissent des fonctions d'entrée/sortie standard et des fonctions d'allocation/désallocation de mémoire en langage C.

Ensuite, une structure de données appelée "meteo" est définie, qui contient les informations météorologiques pour une ville donnée. Cette structure contient le nom de la ville ainsi que les températures et l'humidité pour chaque jour de la semaine.

Une typedef est utilisée pour renommer la structure "meteo" en "Meteo" afin de faciliter la manipulation de la structure dans le programme.

Deux fonctions sont définies : "saisir_meteo" qui permet à l'utilisateur de saisir les informations météorologiques pour une ville donnée, et "afficher_meteo" qui affiche les informations météorologiques pour une ville donnée.

Dans la fonction "main", un tableau de pointeurs "villes" est alloué pour stocker les informations météorologiques pour toutes les villes du Maroc. La mémoire est allouée en utilisant la fonction "malloc" de la bibliothèque stdlib.h.

Une boucle est utilisée pour demander à l'utilisateur de saisir les informations mét
