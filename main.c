#include <stdio.h>
#include <windows.h>

int main(void)
{
    int min, seg;

    printf("Digite os Minutos e Segundos nessa ordem: min:seg \n");
    scanf("%d %d",&min,&seg);

    if (min<0 || seg<0 || min>59 || seg>59 || (min==0 && seg==0)){
        printf("Valores Inválidos paezão!!");
    }
    else{
        do{
            system("cls");
            //Imprimir o resultado no formato
            if (min < 10){
                if (seg < 10){
                    printf("0%d:0%d\n", min,seg);
                }
                else
                {
                    printf("0%d:%d\n", min,seg);
                }
            }
            else if (seg < 10)
            {
                printf("%d:0%d\n", min,seg);
            }
            else
            {
                printf("%d:%d\n", min,seg);
            }

            Sleep(1000);
            if (seg == 0)
            {
                min--;
                seg = 59;
            }
            else
            {
                seg--;
            }

        }while (min!=0 || seg!=0);
        system("cls");
        printf("0%d:0%d\n", min,seg);
        printf("TEMPO ESGOTADO");
    }
}
