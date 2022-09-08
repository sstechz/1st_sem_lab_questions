#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("bill", "w");

    char name[20];
    int item_id, qty, rate, i, n;
    float price, sum = 0;

    printf("how many entries\n");
    scanf("%d", &n);

    printf("enter all datas\n");
    for (i = 1; i <= n; i++)
    {
        fscanf(stdin, "%d %s %d %d", &item_id, name, &qty, &rate);
        fprintf(fp, "%d %s %d %d\n", item_id, name, qty, rate);
    }

    fclose(fp);

    printf("\n\n");

    fp = fopen("bill", "r");

    printf("item_id\tname\tqty\trate\tprice\n");
    // fseek(fp,0L,0);
    for (i = 1; i <= n; i++)
    {
        fscanf(fp, "%d %s %d %d", &item_id, name, &qty, &rate);
        price = qty * rate;
        sum += price;
        fprintf(stdout, "%d\t%s\t%d\t%d\t%f\n", item_id, name, qty, rate, price);
    }

    fclose(fp);

    fp = fopen("bill", "a");

    fprintf(fp, "\ntotal amt=%.2f", sum);

    fclose(fp);

    printf("\ntotal amt=%.2f", sum);

    return 3;
}
