/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static const char col_gbblack[]     = "#1d2021";
static const char col_gbred[]       = "#cc241d";
static const char col_gbgreen[]     = "#98971a";
static const char col_gbyellow []   = "#d79921";
static const char col_gbblue[]      = "#458588";
static const char col_gbmagenta[]   = "#b16286";
static const char col_gbcyan[]      = "#689d6a";
static const char col_gbwhite[]     = "#a89984";

static const char col_gbbblack[]    = "#928374";
static const char col_gbbred[]      = "#fb4934";
static const char col_gbbgreen[]    = "#b8bb26";
static const char col_gbbyellow []  = "#fabd2f";
static const char col_gbbblue[]     = "#83a598";
static const char col_gbbmagenta[]  = "#d3869b";
static const char col_gbbcyan[]     = "#8ec07c";
static const char col_gbbwhite[]    = "#ebdbb2";

static const char col_gbbg[]        = "#282828";
static const char col_gbfg[]        = "#ebdbb2";

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Monospace:pixelsize=17:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
                /*     fg         bg       */
	[SchemeNorm] = { col_gbfg, col_gbbg },
	[SchemeSel] = { col_gbfg, col_gbblue },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
