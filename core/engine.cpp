#include <iostream>
#include <stdio.h>
#include "engine.h"
#include "string"
#include "window.h"
#include <raylib.h>

Engine::Engine(std::string name)
{
    isRunning = true;
}

int Engine::Run()
{
    Window window;
    window.OpenGameWindow(800, 600, "Pine Engine");

    while (isRunning){

        if (window.ShouldClose()){
            //Eventually bind a proper set of shutdown events but just kill for now
            printf("Killing Window\n");
            window.CloseGameWindow();
            break;
        }

        window.RenderLoop();

    }
    printf("Killing Engine\n");
    return 0;
}

        