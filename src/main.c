#define RAYGUI_IMPLEMENTATION
#include "include/raygui.h"
#include "include/raylib.h"
#include <stdbool.h>

int main(int argc, char* argv[])
{
 // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
            GuiCheckBox((Rectangle){10, 10, 10, 10}, "CheckBox", false);
            GuiButton((Rectangle){10, 30, 100, 10}, "Button");
            Vector2 testvector = {100.0, 100.0};
            GuiGrid((Rectangle){400, 225, 100, 10}, "Grid", 10.0, 10, &testvector);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
  return 0;
}

