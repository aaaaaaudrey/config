const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#31272b", /* black   */
  [1] = "#959CA0", /* red     */
  [2] = "#95A8B4", /* green   */
  [3] = "#C0A9BD", /* yellow  */
  [4] = "#A8B9C6", /* blue    */
  [5] = "#B8C7D4", /* magenta */
  [6] = "#BED0E1", /* cyan    */
  [7] = "#dee3e9", /* white   */

  /* 8 bright colors */
  [8]  = "#9b9ea3",  /* black   */
  [9]  = "#959CA0",  /* red     */
  [10] = "#95A8B4", /* green   */
  [11] = "#C0A9BD", /* yellow  */
  [12] = "#A8B9C6", /* blue    */
  [13] = "#B8C7D4", /* magenta */
  [14] = "#BED0E1", /* cyan    */
  [15] = "#dee3e9", /* white   */

  /* special colors */
  [256] = "#31272b", /* background */
  [257] = "#dee3e9", /* foreground */
  [258] = "#dee3e9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
