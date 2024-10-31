#ifndef BN_SOUND_ITEMS_INFO_H
#define BN_SOUND_ITEMS_INFO_H

#include "bn_span.h"
#include "bn_sound_item.h"
#include "bn_string_view.h"

namespace bn::sound_items_info
{
    constexpr inline pair<sound_item, string_view> array[] = {
        make_pair(sound_item(14), string_view("churchbell")),
        make_pair(sound_item(15), string_view("death")),
        make_pair(sound_item(16), string_view("dialog")),
        make_pair(sound_item(17), string_view("hit")),
        make_pair(sound_item(18), string_view("hurt")),
        make_pair(sound_item(19), string_view("menu1")),
        make_pair(sound_item(20), string_view("menu2")),
        make_pair(sound_item(21), string_view("menu3")),
        make_pair(sound_item(22), string_view("pig")),
        make_pair(sound_item(23), string_view("shield")),
    };

    constexpr inline span<const pair<sound_item, string_view>> span(array);
}

#endif

