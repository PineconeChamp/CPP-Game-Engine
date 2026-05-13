#include <iostream>
#include <raylib.h>
#include <string>
#include "window.h"


int Window::OpenGameWindow(int WIDTH = 800, int HEIGHT = 600, const char *WINDOWNAME = "Raylib Window")
{
    InitWindow(WIDTH, HEIGHT, WINDOWNAME);

    SetTargetFPS(60);

    return 0;
}

int Window::CloseGameWindow()
{
    CloseWindow();
    return 0;
}

int Window::RenderLoop()
{
    BeginDrawing();

    ClearBackground(BLACK);

    EndDrawing();

    return 0;
}

bool Window::ShouldClose()
{
    return WindowShouldClose();
}
