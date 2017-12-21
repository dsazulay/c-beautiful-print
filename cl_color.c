#include <stdio.h>
#include <stdarg.h>
#include "cl_color.h"

void printf_color(const cl_color_t color, const char * format, ...)
{
    va_list argptr;
    
    printf("%s", color);
    
    va_start(argptr, format);
    vprintf(format, argptr);
    va_end(argptr);
    
    printf("%s", COLOR_NONE);    
}

void change_color(const cl_color_t color)
{
    printf("%s", color);
}

void clear_color()
{
    printf("%s", COLOR_NONE);
}