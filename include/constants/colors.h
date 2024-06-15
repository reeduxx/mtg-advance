#ifndef CONSTANTS_COLORS_H
#define CONSTANTS_COLORS_H

#define COLOR_NONE 	0x00
#define COLOR_GREEN 0x01
#define COLOR_RED 	0x02
#define COLOR_BLACK	0x04
#define COLOR_BLUE	0x08
#define COLOR_WHITE 0x10

#define ENCODE_COLORS_2(a, b) (a | b)
#define ENCODE_COLORS_3(a, b, c) (a | b | c)
#define ENCODE_COLORS_4(a, b, c, d) (a | b | c | d)
#define ENCODE_COLORS_5(a, b, c, d, e) (a | b | c | d | e)
#define ENCODE_COLORS(...)  GET_COLOR_MACRO(__VA_ARGS__, ENCODE_COLORS_5, ENCODE_COLORS_4, ENCODE_COLORS_3, ENCODE_COLORS_2)(__VA_ARGS__)

#endif // CONSTANTS_COLORS_H