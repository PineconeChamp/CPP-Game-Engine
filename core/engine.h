#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine
{
    public:
        Engine(std::string name);
        int Run();
        bool isRunning;

    private:
};

#endif