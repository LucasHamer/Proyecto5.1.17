#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,prec,cod,x,precm,codm,precb,codb;

    printf("Ingrece la cantidad de productos que desea revisar: ");
    scanf("%d",&n);
    fflush(stdin);

    for(x=1;x<=n;x++)
    {
        printf("Ingrece el codigo: ");
        scanf("%d",&cod);
        fflush(stdin);
        printf("Ingrece el precio: ");
        scanf("%d",&prec);
        fflush(stdin);
        printf("\n");
        if(x==1||prec>precm)
        {
            precm=prec;
            codm=cod;
        }
        if(x==0||prec<precb)
        {
            precb=prec;
            codb=cod;
        }
    }
    printf("El codigo con el articulo mas caro es: %d\n",codm);
    printf("El codigo con el articulo mas barato es: %d",codb);

    return 0;
}
