#ifndef CONSTANTS_TYPES_H
#define CONSTANTS_TYPES_H

#define TYPE_NONE			0x00
#define TYPE_CREATURE		0x01
#define TYPE_LAND			0x02
#define TYPE_ARTIFACT		0x04
#define TYPE_ENCHANTMENT	0x08
#define TYPE_INSTANT		0x10
#define TYPE_SORCERY		0x20

#define ENCODE_TYPES(a, b) (a | b)

#endif // CONSTANTS_TYPES_H