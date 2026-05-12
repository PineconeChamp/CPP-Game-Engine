#include <iostream>
#include <raylib.h>
#include <string>

int OpenWindow(int WIDTH = 800, int HEIGHT = 600, const char *WINDOWNAME = "Raylib Window")
{
    InitWindow(WIDTH, HEIGHT, WINDOWNAME);

    SetTargetFPS(60);


    return 0;
}