#include <iostream>
#include <raylib.h>
#include "engine.h"
#include "renderer/window.h"


int main(){

    Engine engine("pine_engine");

    Window window;
    window.OpenWindow(800, 600, "Pine Engine");

    while (engine.isRunning == true)
    {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawText("Welcome to Pine Engine!", 25, 25, 20, LIGHTGRAY);

        EndDrawing();

    }

    engine.isRunning = false;

    return 0;
}

