//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"/home/kirottu/.config/scripts/dwmblocks/gputemp",	2,	1 },
	{"",	"/home/kirottu/.config/scripts/dwmblocks/memory",	5,	14 },
	{"",	"/home/kirottu/.config/scripts/dwmblocks/cpu",		1,	1 },
	{"",	"/home/kirottu/.config/scripts/dwmblocks/volume",	0,	10 },
	{"",	"/home/kirottu/.config/scripts/dwmblocks/disk",		600,	1 },
	{"",	"/home/kirottu/.config/scripts/dwmblocks/date",		60,	1 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
