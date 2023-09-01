#include <stdio.h>
#include <stdlib.h>

void main()
{
    int size;
    printf("Input the number of elements to be stored in the Array:");
    scanf("%d",&size);
    int frequency[size];
    int arr[size];
    int i,j;
    for(i=0;i<size;i++)                   //dizinin elemanlarini kullanicidan alma kismi
    {
    printf("Enter %d. value\n",i+1);
    scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)                 //frekans dizisinin tum elemanlarini 0 yaptik (simdilik)
    {
        frequency[i]=0;
    }


    for(i=0;i<size;i++)    //elemanlarin kac kez tekrar ettigini bulmak icin, her elemanin diger elemanlarla ayni olup olmamasini kontrol ediyoruz
    {

        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                frequency[i]++;   //eger elemanlar eslesiyorsa i.elemanin frekansini arttiriyoruz(basta hepsi 0'dı)
            }
        }
    }


    for (i = 0; i <size; i++) {


                    printf("%d occurs %d times\n", arr[i], frequency[i]);

    }

}
