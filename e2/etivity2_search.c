#include <stdio.h>

/*
Funzione che prende in input 4 parametri: l'array, l'indice iniziale dell'array,
l'indice finale dell'array e il numero da cercare.
Innanzitutto la funzione cerca di trovare il numero, nell'indice iniziale e nell'indice finale.

Se la funzione non trova il numero in questi due casi, richiama se stessa, incrementando gli indici.
*/
int search(int arr[], int initialIndex, int finalIndex, int x)
{
    /*
    con un if case, controllo innanzitutto se il finalIndex è minore
    dell' initialIndex, se è cosi, torna -1 e non trova nulla.

    se il numero da cercare (x), è uguale al numero dell'array che si trova all'initialIndex, torna il numero iniziale.
    oppure facendo il controllo con il finalIndex nell'array, trova che il numero è uguale all'indice finale
    */
    if (finalIndex < initialIndex)
        return -1;
    if (arr[initialIndex] == x)
        return initialIndex;
    if (arr[finalIndex] == x)
        return finalIndex;
    return search(arr, initialIndex + 1, finalIndex - 1, x);
}

int main()
{
    // array dato
    int arr[] = {1, 2, 3, 4, 5};

    // prendo la lunghezza dell'array dato in rapporto alla prima posizione dell'array
    int n = sizeof(arr) / sizeof(arr[0]);

    // numero da cercare
    int x = 4;
    int result = search(arr, 0, n - 1, x);

    // se torna -1 vuol dire che il numero non si trova nell'array. 
    // sennò dice la posizione del numero all'interno dell'array
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at initialIndex %d\n", result);
    return 0;
}