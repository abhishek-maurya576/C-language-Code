#include <stdio.h>
#include <graphics.h>
#include <time.h>

int main() {

  // Initialize graphics mode
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);

  // Set the background color
  setbkcolor(BLACK);

  // Create a random number generator
  srand(time(NULL));

  // Draw the fireworks
  for (int i = 0; i < 100; i++) {

    // Get a random position on the screen
    int x = rand() % 640;
    int y = rand() % 480;

    // Set the color of the firework
    setcolor(rand() % 15 + 1);

    // Draw a circle at the random position
    circle(x, y, 10);
  }

  // Wait for the user to press a key
  getch();

  // Close graphics mode
  closegraph();

  return 0;
}
