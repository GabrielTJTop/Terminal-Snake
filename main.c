#include <stdio.h>
#include <stdlib.h>
int main() {
   
   // Game Loop
   do {
      // Clear the console screen
      system("cls");
      // Create a 10x10 map with walls represented by '#' and empty spaces by
      char mapa[10][10];
      for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
            if (i == 0 || i == 9 || j == 0 || j == 9) {
               mapa[i][j] = '#';
            } else {
               mapa[i][j] = ' ';
            }
            printf("%c ", mapa[i][j]);
         }
         printf("\n");
      }

   } 
   while (0);
}