// FAMWOW bigupd 2026-10-28: our core (mod-playerbots/azerothcore-wotlk Playerbot branch) has no WorldSession::IsBot().
// Same meaning: a playerbot-driven session (has PlayerbotAI, not a real client, not a selfbot).
#pragma once
#include "Player.h"
#include "PlayerbotAI.h"
inline bool PvPLifeSessionIsBot(Player const* p)
{
    Player* q = const_cast<Player*>(p);
    return q && !::IsRealPlayer(q) && !::IsSelfBot(q);
}
