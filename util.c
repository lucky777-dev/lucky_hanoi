#include "util.h"
#include <stdlib.h>
#include <stdio.h>

void clearscr()
{
#ifdef _WIN32
    system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
    puts("\x1b[2J\x1b[1;1H");
//add some other OSes here if needed
#else
    #error "OS not supported."
    //you can also throw an exception indicating the function can't be used
#endif
}