#include <stdio.h>
#define EXERCICE_1

int main()
{

#ifdef EXERCICE_1

    // Exercice 1: Affichage avec différents types de formats
    // 
    // a) Compiler ce programme
    char var = 'b';
    printf("%c\n", var);

    //b) Changer le format d'affichage de %c en %d et expliquer le résultat.

    printf("%d\n", var); // donne le code ASCII du caratctere 'b' 'a'=97, 'b'=98 .....
    // 'A'= 65, 'B'=66 .....
    // Format d'affichage
    // %c affiche un caractère isolé
    // %d, ou %i :  affihc eun nombre décimal
    // %u : affiche nombre décimal non signé


    // c) Compiler ce programme et expliquer le résultat :

    //    char var = 353;
    var = 353;
    printf("%c\n", var);

    // 128 caractères ASCII de 0 ---> 127
    // Dont NUL = 0, A =65, a=97
    // 353 = 2*128 + 97 ==> donc il va afficher 'a'

#endif // EXERCICE_1




#ifdef EXERCICE_2
    // Exercice 2 : Structure d’un programme en C 
    //Corriger le programme suivant (8 erreurs à trouver). 

    // #include < stdio.c >  ==> #include <stdio.h>
    int m, n;
    printf("m ? "); // printf("m ? ); ==> printf("m ? ");
    if (scanf_s("%d", &m) == NULL) return -1; //         scanf("%d", m); ==>         scanf("%d", &m);
    printf("m = %d\n", m); // printf("m = %d\n", &m); ==> printf("m = %d\n", m);
    printf("n ? ");
    if (scanf_s("%d", &n) == NULL) return -1; // scanf("%n", &n); ==> scanf("%d", &n); %d parce que n est un entier int
    printf("n = %d\n", n);
    printf("%d + %d = %d\n", m, n, m + n); //printf("%d + %d = %d\n", m+n); ==>         printf("%d + %d = %d\n", m, n, m+n);
    int difference = m - n;
    printf("%d - %d = %d\n", m, n, difference); // printf("%d - %d = %d\n", m, n, difference); ==> // difference n'est pas déclaré
    // ou
    printf("%d - %d = %d\n", m, n, m-n); // printf("%d - %d = %d\n", m, n, difference); ==> // difference n'est pas déclaré

    // return (0). ==> return (0);

#endif // EXERCICE_2

#ifdef EXERCICE_3
    // Exercice 3 : Les variables 
    int A, B, C;
    printf("A ? ");
    if (scanf_s("%d", &A) == NULL) return -1;

    printf("B ? ");
    if (scanf_s("%d", &B) == NULL) return -1;

    printf("C ? ");
    if (scanf_s("%d", &C) == NULL) return -1;

    //  (valeur de B en A, valeur de C en B, valeur de A en C). 
    // 
    // premiere methode avec variable auxiliaire

    int VarAux;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    VarAux = A;
    A = B;
    B = C;
    C = VarAux;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    // premiere methode avec variable auxiliaire

    A = A + B + C;
    C = A - (B + C);
    B = A - (B + C);
    A = A - (B + C);

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

#endif // EXERCICE_3


#ifdef EXERCICE_4
    // Exercice 4 : Les opérateurs
    int x, y, resultat, c;
    x = 17;
    y = 3;
    resultat = x + y;  // 20
    resultat = x - y;  // 14
    resultat = x * y;  // 51
    resultat = x / y;  // 5
    c = ++resultat; // c contient 6, resultat contient 6
    printf(" resultat = %d \n", c); // affiche resultat = 6
    c = resultat--; // c reçoit resultat qui contient 6 , après resultat se décrémente de 1
    printf(" resultat = %d \n", c); // affiche resultat = 6 ; ici c contien 6, et resultat contient 5
    c = resultat++; // c reçoit resultat qui contient 5 , après resultat s'incrémente de 1
    printf(" resultat = %d \n", c); // affiche resultat = 5 ; ici c contien 5, et resultat contient 6


    // https://www.geeksforgeeks.org/pre-increment-and-post-increment-in-c/
    //int a = 4;
    //int b;
    //b= ++a;
    //printf(" %d\n", b);
    //a = 4;
    //b = ++a + ++a;
    //printf(" %d\n", b);
    //a = 4;
    //b = ++a + ++a + ++a;
    //printf(" %d\n", b);

#endif // EXERCICE_4


#ifdef EXERCICE_5
    // Exercice 5 : Cast: Forçage de type

    float Q;
    int a, b;
    printf("Q ? ");
    if (scanf_s("%f", &Q) == NULL) return -1;

    printf("a ? ");
    if (scanf_s("%d", &a) == NULL) return -1;

    printf("b ? ");
    if (scanf_s("%d", &b) == NULL) return -1;

    Q = a / b;

    printf("%d / %d = %f  sans cast\n", a, b, Q);     // %f par defaut précision de 6 chiffres après la virgule flottante.

    Q = (float) a / b;

    printf("%d / %d = %.3f  avec cast\n", a, b, Q);  // %.3f précision de 3 chiffres après la virgule flottante.
    printf("%d / %d = %.9f  avec cast\n", a, b, Q);  // %.9f précision de 9 chiffres après la virgule flottante.

#endif // EXERCICE_5

 






#ifdef EXERCICE_6
    //Exercice 6 : Lecture et écriture
    int candidats_inscrits, candidats_presents;
    float pourcentage_presence;
    printf("Nombre de candidats inscrits ? ");
    if (scanf_s("%d", &candidats_inscrits) == NULL) return -1;
    printf("Nombre de candidats inscrits = %d \n", candidats_inscrits);

    printf("Nombre de candidats présents ? ");
    if (scanf_s("%d", &candidats_presents) == NULL) return -1;
    printf("Nombre de candidats présents = %d \n", candidats_presents);
    pourcentage_presence = ( (float)candidats_presents / candidats_inscrits )* 100;

    printf("pourcentage de présence = %.1f\n", pourcentage_presence);


#endif // EXERCICE_6


    return 0;
}