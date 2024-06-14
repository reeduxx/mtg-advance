#ifndef CARD_H
#define CARD_H

#include <cstdint>

struct CardInfo {
	char name[32];
	uint8_t mana_cost: 5;
	uint16_t mana_pips: 15;
	uint8_t supertypes: 4;
	uint8_t types: 6;
	uint8_t subtypes[3];
	uint8_t power: 4;
	uint8_t toughness: 4;
};

extern const struct CardInfo gCardInfo[];

#endif // CARD_H