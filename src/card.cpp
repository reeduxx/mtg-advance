#include "constants/cards.h"
#include "card.h"

const struct CardInfo gCardInfo[] = {
	[CARD_NONE] = {
		.name = "\0",
		.mana_cost = 0,
		.mana_pips = 0,
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_NONE,
		.subtypes = {SUBTYPE_NONE, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
	[CARD_ABANDONED_OUTPOST] = {
		.name = "Abandoned Outpost\0",
		.mana_cost = 0,
		.mana_pips = 0,
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_LAND,
		.subtypes = {SUBTYPE_NONE, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
	[CARD_ABANDON_HOPE] = {
		.name = "Abandon Hope\0",
		.mana_cost = 2,
		.mana_pips = ENCODE_MANA_PIPS(0, 0, 1, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_SORCERY,
		.subtypes = {SUBTYPE_NONE, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
	[CARD_ABBEY_GARGOYLES] = {
		.name = "Abbey Gargoyles\0",
		.mana_cost = 5,
		.mana_pips = ENCODE_MANA_PIPS(3, 0, 0, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_CREATURE,
		.subtypes = {SUBTYPE_GARGOYLE, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 3,
		.toughness = 4
	},
	[CARD_ABBEY_MATRON] = {
		.name = "Abbey Matron\0",
		.mana_cost = 3,
		.mana_pips = ENCODE_MANA_PIPS(1, 0, 0, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_CREATURE,
		.subtypes = {SUBTYPE_HUMAN, SUBTYPE_CLERIC, SUBTYPE_NONE},
		.power = 1,
		.toughness = 3
	},
	[CARD_ABDUCTION] = {
		.name = "Abduction\0",
		.mana_cost = 4,
		.mana_pips = ENCODE_MANA_PIPS(0, 2, 0, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_ENCHANTMENT,
		.subtypes = {SUBTYPE_AURA, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
	[CARD_ABEYANCE] = {
		.name = "Abeyance\0",
		.mana_cost = 2,
		.mana_pips = ENCODE_MANA_PIPS(1, 0, 0, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_INSTANT,
		.subtypes = {SUBTYPE_NONE, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
	[CARD_ABJURE] = {
		.name = "Abjure\0",
		.mana_cost = 1,
		.mana_pips = ENCODE_MANA_PIPS(0, 1, 0, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_INSTANT,
		.subtypes = {SUBTYPE_NONE, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
	[CARD_ABOLISH] = {
		.name = "Abolish\0",
		.mana_cost = 3,
		.mana_pips = ENCODE_MANA_PIPS(2, 0, 0, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_INSTANT,
		.subtypes = {SUBTYPE_NONE, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
	[CARD_ABOMINATION] = {
		.name = "Abomination\0",
		.mana_cost = 5,
		.mana_pips = ENCODE_MANA_PIPS(0, 0, 2, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_CREATURE,
		.subtypes = {SUBTYPE_HORROR, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 2,
		.toughness = 6
	},
	[CARD_ABOROTH] = {
		.name = "Aboroth\0",
		.mana_cost = 6,
		.mana_pips = ENCODE_MANA_PIPS(0, 0, 0, 0, 2),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_CREATURE,
		.subtypes = {SUBTYPE_ELEMENTAL, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 9,
		.toughness = 9
	},
	[CARD_ABOSHAN_CEPHALID_EMPEROR] = {
		.name = "Aboshan, Cephalid Emperor\0",
		.mana_cost = 6,
		.mana_pips = ENCODE_MANA_PIPS(0, 2, 0, 0, 0),
		.supertypes = SUPERTYPE_LEGENDARY,
		.types = TYPE_CREATURE,
		.subtypes = {SUBTYPE_OCTOPUS, SUBTYPE_NOBLE, SUBTYPE_NONE},
		.power = 3,
		.toughness = 3
	},
	[CARD_ABOSHANS_DESIRE] = {
		.name = "Aboshan's Desire\0",
		.mana_cost = 1,
		.mana_pips = ENCODE_MANA_PIPS(0, 1, 0, 0, 0),
		.supertypes = SUPERTYPE_NONE,
		.types = TYPE_ENCHANTMENT,
		.subtypes = {SUBTYPE_AURA, SUBTYPE_NONE, SUBTYPE_NONE},
		.power = 0,
		.toughness = 0
	},
};