#ifndef WINDOW_H
#define WINDOW_H

class Window
{
    public:
        int OpenGameWindow(int WIDTH, int HEIGHT, const char *WINDOWNAME);
        int CloseGameWindow();
        int RenderLoop();
        bool ShouldClose();
};

#endif // WINDOW_H