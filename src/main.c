#include "include/raylib.h"

int main(int argc, char* argv[])
{
  const int screenWidth = 640;
  const int screenHeight = 480;
  InitWindow(screenWidth, screenHeight, "Hello, World!");
  SetTargetFPS(60);
  while (!WindowShouldClose())
  {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawText("Test Sample", 320, 240, 24, LIGHTGRAY);
    EndDrawing();
  }
  CloseWindow();

  return 0;
}

