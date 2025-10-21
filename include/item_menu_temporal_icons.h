#ifndef GUARD_ITEM_MENU_TEMPORAL_ICONS_H
#define GUARD_ITEM_MENU_TEMPORAL_ICONS_H

void AddBagItemIconSpriteXY(u16 itemId, u8 id, s16 x, s16 y);
void AddSwitchPocketRotatingBallSprite_temporal(s16 rotationDirection);
void CreateItemMenuSwapOutline(void);
void SetItemMenuSwapOutlineInvisibility(bool8 invisible);
void UpdateItemMenuSwapOutlinePos(u8 y);

#endif // GUARD_ITEM_MENU_TEMPORAL_ICONS_H
