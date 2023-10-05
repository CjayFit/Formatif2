// Afficher tous les nombres premiers jusqu'à une limite donnée

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");
   int nbr;
   int nbrColonnes;
   int nbrFacteur = 0;

  // Tant que l'utilisateur veut continuer
   
   std::cout << "Entrez un nombre entier plus grand que 1: ";
   std::cin >> nbr;

 
   // Redemande tant que le nombree est invalide
   while (!(nbr > 1))
   {


      // Efface l'écran et demande un nombre entier

       system("cls");
       std::cout << "Invalide! Entrez un nombre entier plus grand que 1: ";
       std::cin >> nbr;
   }



   // Demande le nombre de colonnes

   std::cout << "Entrez un nombre de colonnes entre 2 et 10: ";
   std::cin >> nbrColonnes;


   // Redemande tant que le nombre de colonnes est invalide

   while (nbrColonnes > 10 || nbrColonnes < 2)
   {

       std::cout << "Invalide! Entrez un nombre entier plus grand que 1: ";
       std::cin >> nbrColonnes;

   }

   system("cls");


       for (int compteur = 2; compteur <= nbr; compteur++)
       {
           nbrFacteur = 0;

           for (int i = 2; i < compteur; i++)
           {
               if (compteur % i == 0)
               {
                   nbrFacteur++;
               }
           }
           if (nbrFacteur == 0)
           {
              std::cout << compteur << " ";
           }
       }
 
 





      // Efface l'écran et affiche une description

      // Vérifie chaque nombre entier de 2 (le premier nombre premier) jusqu'au nombre donné par l'utilisateur

         // Compte les facteurs du nombre courant, sauf 1 et le nombre lui-même
         // Teste toutes les valeurs plus petites que le nombre, sauf 1

            // Si le nombre est divisible sans reste

               // Un facteur est trouvé

         // Affiche le nombre que s'il est premier, c'est-à-dire qu'il n'a aucun facteur

            // Compte de combien de chiffres le nombre est composé

            // Affiche des espaces pour atteindre la largeur d'affichage voulue, selon le nombre de chiffres

            // Affiche une espace et le nombre

            // Doit compter les valeurs affichées pour savoir quand changer de ligne

            // Change de ligne lorsque le nombre de colonnes voulues est atteint

               // Doit compter le nombre de lignes pour savoir quand faire une pause

               // Fait une pause si le nombre de lignes limite est atteint

      // Demande à l'utilisateur s'il veut recommencer

   // Affiche un message de fin avant de terminer

}
