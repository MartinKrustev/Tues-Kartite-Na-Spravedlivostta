#ifndef xMANAPOOL
#define xMANAPOOL
#include "card.h"
#include "deck.h"

struct manapool_t {
	int mana;
	int max_mana;
};

int can_put_card(struct card_t card_to_put, struct manapool_t pool);
int use_card(struct card_t *card, struct manapool_t *pool);
int change_mana(struct manapool_t *manapool,int remove);

#endif
