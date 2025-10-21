#include "global.h"
#include "item_icon.h"
#include "item_menu_icons.h"
#include "item_menu_temporal_icons.h"
#include "item_menu.h"
#include "sprite.h"

enum {
    TAG_BAG_GFX = 100,
    TAG_ROTATING_BALL_GFX,
    TAG_ITEM_ICON,
    TAG_ITEM_ICON_ALT,
};

void AddBagItemIconSpriteXY(u16 itemId, u8 id, s16 x, s16 y)
{
    u8 *spriteId = &gBagMenu->spriteIds[id + ITEMMENUSPRITE_ITEM];
    if (*spriteId == SPRITE_NONE)
    {
        u8 iconSpriteId;

        // Either TAG_ITEM_ICON or TAG_ITEM_ICON_ALT
        FreeSpriteTilesByTag(id + TAG_ITEM_ICON);
        FreeSpritePaletteByTag(id + TAG_ITEM_ICON);
        iconSpriteId = AddItemIconSprite(id + TAG_ITEM_ICON, id + TAG_ITEM_ICON, itemId);
        if (iconSpriteId != MAX_SPRITES)
        {
            *spriteId = iconSpriteId;
            gSprites[iconSpriteId].x2 = x;
            gSprites[iconSpriteId].y2 = y;
        }
    }
}

void AddSwitchPocketRotatingBallSprite_temporal(s16 rotationDirection)
{

}

void CreateItemMenuSwapOutline(void)
{

}

void SetItemMenuSwapOutlineInvisibility(bool8 invisible)
{

}

void UpdateItemMenuSwapOutlinePos(u8 y)
{

}
