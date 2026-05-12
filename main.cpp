#include <raylib.h>
#include "engine.h"


int main(){

    Engine engine("pine_engine");

    InitWindow(800, 600, "WINDOWNAME");

    SetTargetFPS(60);

    while (engine.isRunning == true)
    {

        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();

    }

    engine.isRunning = false;

    return 0;
}

