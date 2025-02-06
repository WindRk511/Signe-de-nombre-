/* Algorithme le signe d'un  nombre
variable n:entier
debut 
        ecrire("Entrer un nombre");
        lire(n)
        si n<0 alors
                afficher(n," est négatif");
                sinon
                        afficher(n," est positif");
                        
        finsi
fin  */

//programme C

#include<stdio.h>
int main ()
{
   int n;     
   printf("Entrer un nombre:");
        scanf("%d",&n);
        if (n<0){
                printf("%d est négatif",n);}
                else { 
                        printf("%d est positif",n);}
  return (0); 
}
