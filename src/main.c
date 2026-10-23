#include "include/raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "include/raygui.h"

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
  //DrawText("Test Sample", 320, 240, 24, LIGHTGRAY);
    GuiLabel((Rectangle){10.0, 10.0, 100.0, 100.0}, "Test App");
    GuiButton((Rectangle){200.0, 100.0, 100.0, 100.0}, "Click Me!");
  }
  CloseWindow();

  return 0;
}

