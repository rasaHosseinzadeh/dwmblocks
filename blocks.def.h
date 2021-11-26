//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",      "sb-nettraf",   1,  15},
    {"",      "sb-internet",  1, 14},
    {"",      "sb-memory",    1,  11},
    {"",      "sb-cpu",       1,  12},
    {"",      "sb-disk",      60, 13},
    {"",      "sb-light",     1, 16},
    {"",      "sb-volume",    1, 17},
    {"",      "sb-temp",      1, 18},
    {"",      "sb-battery",   1 , 19},
    {"",      "sb-clock",     1, 20}, 
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
