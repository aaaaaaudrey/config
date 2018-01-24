static const char norm_fg[] = "#dee3e9";
static const char norm_bg[] = "#31272b";
static const char norm_border[] = "#9b9ea3";

static const char sel_fg[] = "#dee3e9";
static const char sel_bg[] = "#95A8B4";
static const char sel_border[] = "#dee3e9";

static const char urg_fg[] = "#dee3e9";
static const char urg_bg[] = "#959CA0";
static const char urg_border[] = "#959CA0";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
