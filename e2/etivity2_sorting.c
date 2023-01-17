#include <stdio.h>
#include <stdlib.h>
#define DIM 20

/*
Il metodo CMPFUNC serve per comparare i valori interi dati, all'interno
della funzione qsort()
*/ 
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}


// Creo un metodo che ordina e stampa l'array ordinato
int sortAndPrint(int elementsNumber)
{   
    //Creo la variabile arr che comprende i valori inseriti dall'utente
    int arr[elementsNumber];
        printf("Inserisci gli elementi dell'array: \n");
        for (int i = 0; i < elementsNumber; i++)
        {
            //Inserisco i valori dell'array
            scanf("%d", &arr[i]);
        }
        /*
        il qsort() è un metodo disponibile includendo <stdlib.h>.
        prende in input un array, il numero di elementi dell'array, il sizeOf (la lunghezza)
        e la funzione cmpfunc che mette a confronto i valori dell'array stesso
        */
        qsort(arr, elementsNumber, sizeof(int), cmpfunc);

        //Stampo l'array ordinato con un ciclo for, con i valori dati dall'utente in input
        printf("Array ordinato: ");
        for (int i = 0; i < elementsNumber; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
}

int main(void)
{   
    //Creo la variabile n
    int n;
    printf("Inserisci il numero di elementi dell'array: ");

    //Con il metodo scanf() inserisco la lunghezza dell'array
    scanf("%d", &n);

    //Se il valore inserito è maggiore di 20 il programma si interrompe
    if (n > DIM)
    {
        printf("La lunghezza massima è 20!");
    }
    else
    {
        //Quando il valore inserito è minore di 20, richiamo la funzione che ordina e stampa
        sortAndPrint(n);
    }
    
}