//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",      "sb-memory",    1,  0},
    {"",      "sb-cpu",       1,  0},
    {"",      "sb-disk",      60, 0},
    {"",      "sb-internet",  10, 0},
    {"",      "sb-nettraf",   1,  0},
    {"",      "sb-light",     1,  0},
    {"",      "sb-volume",    1,  0},
    {"",      "sb-temp",      10, 0},
    {"",      "sb-battery",   60, 0},
    {"",      "sb-clock",     10, 0}, 
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
