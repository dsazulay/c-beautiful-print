#define COLOR_DEFAULT "\033[39m"
#define COLOR_BLACK "\033[30m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_CYAN "\033[36m"
#define COLOR_GREY "\033[90m"
#define COLOR_LIGHT_RED "\033[91m"
#define COLOR_LIGHT_GREEN "\033[92m"
#define COLOR_LIGHT_YELLOW "\033[93m"
#define COLOR_LIGHT_BLUE "\033[94m"
#define COLOR_LIGHT_MAGENTA "\033[95m"
#define COLOR_LIGHT_CYAN "\033[96m"
#define COLOR_WHITE "\033[97m"
#define COLOR_NONE "\033[0m"

typedef char * cl_color_t;

void printf_color(const cl_color_t color, const char * format, ...);
void change_color(const cl_color_t color);
void clear_color();