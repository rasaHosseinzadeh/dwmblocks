//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",      "sb-memory",    1,  11},
    {"",      "sb-cpu",       1,  12},
    {"",      "sb-disk",      60, 13},
    {"",      "sb-internet",  10, 14},
    {"",      "sb-nettraf",   1,  15},
    {"",      "sb-light",     60, 16},
    {"",      "sb-volume",    60, 17},
    {"",      "sb-temp",      10, 18},
    {"",      "sb-battery",   1 , 19},
    {"",      "sb-clock",     10, 20}, 
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
