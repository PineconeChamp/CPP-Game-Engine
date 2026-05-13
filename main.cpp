#include <iostream>
#include <stdio.h>
#include "engine.h"

int main(){

    Engine engine("pine_engine");

    printf("Starting Engine\n");
    
    engine.Run();

    return 0;
}
