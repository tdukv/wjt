/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar   = 1; /* whether bar is at top or bottom of screen */
static int centered = 1; /* centrered by default -t/-b for top/bottom */

static int width = 600;  /*  width when centered */

static int timeformat = 0; /* use hh:mm:ss instead of a number */

/* Size of the window border */
static const unsigned int border_width_e = 1; /* at the edge of the screen */
static const unsigned int border_width_c = 3; /* at the center of the screen */

static int min              = 0;    /* -l:  lower bound */
static int max              = 100;  /* -u:  upper bound */
static int initval          = 0;    /* -x:  initial value */
static int labelval         = 1;    /* -lv: whether to display value label */
static int labelexts        = 1;    /* -le: whether to display extent labels */
static int step             = 1;    /* -s:  minimum adjustment */
static int jump             = 10;   /* -j:  large adjustment */
static const char *prompt   = NULL; /* -p:  prompt to the left of slider */
static const char *special  = NULL; /* -z:  special text */
static const char *fonts[]  = {     /* -f:  font set */
	"monospace:size=10"
};

static const char *colors[SchemeLast][2] = {
	/*                 fg         bg */
	[SchemePrompt] = { "#eeeeee", "#005577" },
	[SchemeSlider] = { "#eeeeee", "#222222" }, /* fg: extent labels, bg: slider beyond value */
	[SchemeValue]  = { "#eeeeee", "#005577" }, /* fg: value label, bg: slider up to value */
};
