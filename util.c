#include "util.h"
#include <stdio.h>

void clearscr()
{
	puts("\x1b[2J\x1b[1;1H");
}
