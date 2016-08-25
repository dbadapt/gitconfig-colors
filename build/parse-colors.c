#include "color.h"
#include <stdio.h>
#include <string.h>

/*
 * The list of available column colors.
 */
const char *column_colors_ansi[] = {
  GIT_COLOR_RED,
  GIT_COLOR_GREEN,
  GIT_COLOR_YELLOW,
  GIT_COLOR_BLUE,
  GIT_COLOR_MAGENTA,
  GIT_COLOR_CYAN,
  GIT_COLOR_BOLD_RED,
  GIT_COLOR_BOLD_GREEN,
  GIT_COLOR_BOLD_YELLOW,
  GIT_COLOR_BOLD_BLUE,
  GIT_COLOR_BOLD_MAGENTA,
  GIT_COLOR_BOLD_CYAN,
  GIT_COLOR_RESET,
};

const signed char hexval_table[256] = {
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 00-07 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 08-0f */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 10-17 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 18-1f */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 20-27 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 28-2f */
  0,  1,  2,  3,  4,  5,  6,  7,		/* 30-37 */
  8,  9, -1, -1, -1, -1, -1, -1,		/* 38-3f */
  -1, 10, 11, 12, 13, 14, 15, -1,		/* 40-47 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 48-4f */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 50-57 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 58-5f */
  -1, 10, 11, 12, 13, 14, 15, -1,		/* 60-67 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 68-67 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 70-77 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 78-7f */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 80-87 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 88-8f */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 90-97 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* 98-9f */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* a0-a7 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* a8-af */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* b0-b7 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* b8-bf */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* c0-c7 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* c8-cf */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* d0-d7 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* d8-df */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* e0-e7 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* e8-ef */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* f0-f7 */
  -1, -1, -1, -1, -1, -1, -1, -1,		/* f8-ff */
};

unsigned int hexval(unsigned char c);
int get_hex_color(const char *in, unsigned char *out);
int parse_color(struct color *out, const char *name, int len);

int main(int argc, char *argv[]) {
  return 0;
}

unsigned int hexval(unsigned char c)
{
  return hexval_table[c];
}

int get_hex_color(const char *in, unsigned char *out)
{
  unsigned int val;
  val = hexval(in[0] << 4) | hexval(in[1]);
  if (val & ~0xff)
    return -1;
  *out = val;
  return 0;
}

int parse_color(struct color *out, const char *name, int len)
{
  /* Positions in array must match ANSI color codes */
  static const char * const color_names[] = {
    "black", "red", "green", "yellow",
    "blue", "magenta", "cyan", "white"
  };
  char *end;
  int i;
  long val;

  /* First try the special word "normal"... */
  if (match_word(name, len, "normal")) {
    out->type = COLOR_NORMAL;
    return 0;
  }
  
}

char *color_output(char *out, int len, const struct color*c, char type)
{
  switch (c->type) {
    case 
  }
}
