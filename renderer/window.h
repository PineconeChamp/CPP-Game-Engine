#ifndef WINDOW_H
#define WINDOW_H

class Window
{
    public:
        int OpenWindow(int WIDTH, int HEIGHT, const char *WINDOWNAME);
        int RenderLoop();
};

#endif // WINDOW_H