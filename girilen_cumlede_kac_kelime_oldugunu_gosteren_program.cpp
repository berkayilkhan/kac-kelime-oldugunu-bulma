#include<stdio.h>
#include<string.h>
int main()
{
   int i,top=0;
   char x, kelime[50];
   printf("Bir cumle girin : ");
   //scanf("%s" ,kelime); // %slerde & iþareti yoktur.
   gets(kelime);
   
   for(i=0;i<strlen(kelime);i++)
   if(kelime[i]==' ')
   top++;
   printf("Girilen cumlede %d tane kelime var.\n",top+1);
   return 0;
   

}
