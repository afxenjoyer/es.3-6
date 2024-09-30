#include <stdio.h>

int main(void)
{
    int numeroProdotti;
    float prezzoUnitario;
    float prezzoScontato;
    const int sconto10 = 10;
    const int sconto20 = 20;

    printf("Inserisci numero di prodotti acquistati\n");
    scanf("%d", &numeroProdotti);
    printf("Inserisci il prezzo unitario (in Euro)\n");
    scanf("%f", &prezzoUnitario);

    if (prezzoUnitario < 10)
    {
        prezzoScontato = prezzoUnitario;
        printf("Lo sconto applicato è del 0%%");
    }
    else if(prezzoUnitario >= 10 && prezzoUnitario <= 49)
    {
        prezzoScontato = prezzoUnitario - (prezzoUnitario/100)*10;
        printf("Lo sconto applicato è del %d%%", sconto10);
    }
    else if(prezzoUnitario >= 50)
    {
        prezzoScontato = prezzoUnitario - (prezzoUnitario/100)*20;
        printf("Lo sconto applicato è del %d%%", sconto20);
    }

    printf("L'importo totale è %.02f\n", prezzoScontato);
    printf("L'importo non scontato è %.02f\n", prezzoUnitario);

    return 0;
}
