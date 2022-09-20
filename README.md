# InitiationProgrammationC
Algorithmique & Programmation: Programmation Procédurale I

## Chapitre (1): Initiation à la programmation en C

### Exercice 1: Affichage avec différents types de formats
a) Compiler ce programme
```
int main()
{
char var ='b';
printf("%c",var);
return 0;
}
```
b) Changer le format d'affichage de %c en %d et expliquer le résultat.

c) Compiler ce programme et expliquer le résultat
```
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
char var =353; 
printf("%c",var); 
return 0; 
} 
```
### Exercice 2 : Structure d’un programme en C
Corriger le programme suivant (8 erreurs à trouver).
```
#include < stdio.c > 
int main() 
{
    int m, n; 
    printf("m ? ); 
    scanf("%d", m); 
    printf("m = %d\n", &m); 
    printf("n ? "); 
    scanf("%n", &n); 
    printf("n = %d\n", n); 
    printf("%d + %d = %d\n", m+n); 
    printf("%d - %d = %d\n", m, n, difference); 
    return (0). 
}
```

### Exercice 3 : Les variables
Écrire un programme en C qui permet d’échanger les valeurs de 3 entiers saisis au clavier (valeur de B en A, valeur de C en B, valeur de A en C).

### Exercice 4 : Les opérateurs
Faire une exécution à la main du code suivant : 
```
#include <stdio.h> 
int main() 
{ 
    int x , y , resultat,c; 
    x = 17; 
    y = 3; 
    resultat = x + y; 
    resultat = x - y; 
    resultat = x * y; 
    resultat = x / y; 
    c=++resultat ; 
    printf(" resultat = %d ", c); 
    c=resultat -- ; 
    printf(" resultat = %d ", c); 
    c=resultat++ ; 
    printf(" resultat = %d ", c); 
}
```
### Exercice 5 : Cast: Forçage de type
Écrire un programme en C qui permet de :
- Saisir au clavier un réel Q et deux entiers a et b.
- Calculer l’expression suivante : Q = a / b .
- Afficher le résultat de cette expression avec une précision de 3 chiffres après la virgule flottante.

### Exercice 6 : Lecture et écriture
Écrire un programme permettant à l'utilisateur d'entrer un nombre de candidats inscrits et un
nombre de candidats présents et afficher le pourcentage des candidats présents.

La sortie du programme doit correspondre à l'exécution ci-dessous.

- On affichera le pourcentage avec un chiffre après la virgule.
- nombre de candidats inscrits ? 400
- nombre de candidats inscrits = 400
- nombre de candidats présents ? 250
- nombre de candidats présents = 250
- pourcentage de présence = 62.5 %
