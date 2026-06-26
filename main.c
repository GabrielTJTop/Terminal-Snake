#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <windows.h>
int main() {
   // Create a 10x10 map with walls represented by '#' and empty spaces by ' ' and sets player position
   char mapa[10][10] = {
      {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
      {'#', '@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
      {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
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
   int input;
   
   
   // Game Loop
   while (GameOver) {
      // Clear the console screen
      system("cls");
      // Print the map
      for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
               // Print the map character at the current position
               printf("%c ", mapa[i][j]);
            }
            printf("\n");
         }
      // Check for user input to move the player
      if (_kbhit()) {
         // Get the user input without waiting for Enter key
         input = _getch();
         // Move the player based on the input
         if (input == 'w') {
            if (mapa[PlayerY - 1][PlayerX] != '#') {
               mapa[PlayerY][PlayerX] = ' ';
               PlayerY--;
               mapa[PlayerY][PlayerX] = '@';
            } 
         }
         if (input == 's') {
            if (mapa[PlayerY + 1][PlayerX] != '#') {
               mapa[PlayerY][PlayerX] = ' ';
               PlayerY++;
               mapa[PlayerY][PlayerX] = '@';
            } 
         }
         if (input == 'a') {
            if (mapa[PlayerY][PlayerX - 1] != '#') {
               mapa[PlayerY][PlayerX] = ' ';
               PlayerX--;
               mapa[PlayerY][PlayerX] = '@';
            } 
         }
         if (input == 'd') {
            if (mapa[PlayerY][PlayerX + 1] != '#') {
               mapa[PlayerY][PlayerX] = ' ';
               PlayerX++;
               mapa[PlayerY][PlayerX] = '@';
            }
         }
         if (input == 27) { // ESC key to exit the game
            GameOver = 0;
         }
      }
      Sleep(50); // Sleep for 100 milliseconds to control the game speed
   }
}