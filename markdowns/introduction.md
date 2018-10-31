# Introduction
Pour réaliser les exercices suivants il est utile d'avoir compris la théorie sur les pointeurs. Les pointeurs constituent une notion essentielle du langage C, mais néanmoins un peu complexe au début. Il faut prendre le temps de bien comprendre comment ils fonctionnent car beaucoup d'autres notions sont basées dessus.

## Rappels : 
1. Chaque variable est stockée à une adresse précise en mémoire.
1. Les pointeurs sont semblables aux variables, à ceci près qu'au lieu de stocker un nombre ils stockent l'adresse à laquelle se trouve une variable en mémoire.
1. Si on place un symbole `&` devant un nom de variable, on obtient son adresse au lieu de sa valeur (ex. : `&age`).
1. Si on place un symbole `*` devant un nom de pointeur, on obtient la valeur de la variable stockée à l'adresse indiquée par le pointeur.

## Exemple exécutable

```C runnable
#include <stdio.h>

int main() {
    int a;
    int *pta;
    
    a=8;
    pta = &a;
    
    //Affichage de la valeur de a grâce à a
    printf("Valeur de a : %d\n",a);    
    //Affichage de la valeur de a grâce à pta
    printf("Valeur de a : %d\n",*pta);
    
    //Affichage de l'adresse de a grâce à a
    printf("Adresse de a : %p\n",&a);
    //Affichage de l'adresse de a grâce à pta
    printf("Adresse de a : %p\n",pta);
    
    return 0;
}

```

Avant de compléter le code, exécuter le une fois pour constater les valeurs de `pta` et `ptb`. Une fois compléter exécuter le code plusieurs fois.

```C runnable
#include <stdio.h>

int main() {
    int a;
    int b;
    int *pta;
    int *ptb;    
    
    //Partie à compléter pour que :
    // - pta pointe vers a
    // - ptb pointe vers b
    
    printf("Adresse de a (direct) %p\n",&a);
    printf("Adresse de a %p\n\n",pta);
    printf("Adresse de b (direct) %p\n",&b);
    printf("Adresse de b %p\n",ptb);
    
    return 0;
}

```

?[Que constatez-vous lors des différentes exécutions]
- [ ] Rien
- [x] Les adresses changent lors de chaque exécution
- [ ] Les adresses sont toujours les mêmes
- [x] Si pta et/ou ptb n'ont pas été affecté leur valeur n'ont pas de sens

# Quizz

Afin de tester votre compréhension de la matière, complèter [ce questionnaire](https://goo.gl/forms/C3WkjJmB18vOww2C3)