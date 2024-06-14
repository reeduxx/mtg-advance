#include "bn_core.h"
#include "bn_sprite_items_common_fixed_8x8_font.h"
#include "bn_sprite_items_lands.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_text_generator.h"
#include "bn_vector.h"
#include "card.h"

int main() {
    bn::core::init();
	bn::vector<bn::sprite_ptr, 60> hand;
	bn::vector<bn::sprite_ptr, 16> text_sprites;
	bn::sprite_text_generator text_generator(bn::sprite_font(bn::sprite_items::common_fixed_8x8_font));
	
	for(int i = 0; i < 7; i++) {
		bn::sprite_ptr land = bn::sprite_items::lands.create_sprite(32 * i, 70, i);
		hand.push_back(land);
	}
	
    while(true) {
        bn::core::update();
    }
}