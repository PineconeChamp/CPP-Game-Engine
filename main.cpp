#include <iostream>
#include <stdio.h>
#include <raylib.h>
#include "engine.h"
#include "renderer/window.h"
//#include "renderer/game.h"

int main(){

    Engine engine("pine_engine");

    Window window;
    window.OpenWindow(800, 600, "Pine Engine");

    while (engine.isRunning == true)
    {
        
        window.RenderLoop();

        if (WindowShouldClose()){
            //Eventually bind a proper set of shutdown events but just kill for now
            printf("Killing Engine\n");
            engine.isRunning = false;
        }

    }

    engine.isRunning = false;

    return 0;
}

