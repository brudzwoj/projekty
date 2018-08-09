#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
       srand(time(NULL));
       int t[5], i;

           for (int l = 0; l < 5; l++)
   {

       t[l] = random() % 49;

       printf("liczba  %d\n ", t[l]);

       l=i;
       while (l == i)
       {
           if (t[l] == t[l-1]) // jesli nowa wartosc tablicy
                               // rowna sie poprzedniej
           {
               printf("w lotku liczby sie nie powtarzaja!! :)");

               return 0;

               main();
           }
           i++;
       }

       // inkrementacja licznika sprawdzajacego losowane liczby.

   }
           return 0;

}
