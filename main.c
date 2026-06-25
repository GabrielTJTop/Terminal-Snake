#include <stdio.h>
#include <stdlib.h>
int main() {
   // Create a 10x10 map with walls represented by '#' and empty spaces by and sets player position
   char mapa[10][10] = {
      {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
      {'#', '@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
   };
   int PlayerX = 1;
   int PlayerY = 1;
   int GameOver = 1;
   
   
   // Game Loop
   while (GameOver) {
      // Clear the console screen
      system("cls");
      // Print the map
      for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
            // Check if the current position is the player's position
            if (i == PlayerY && j == PlayerX) {
               printf("@ ");
            } else {
               // Print the map character at the current position
               printf("%c ", mapa[i][j]);
            }
         }
         printf("\n");
      }
   }
}