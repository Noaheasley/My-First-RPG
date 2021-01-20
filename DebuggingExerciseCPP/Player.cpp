#include "Player.h"

float Player::takeDamage(float damage)
{
    if (hasShield = true)
    {
        float totalDamage = damage - m_shield.getStatusBoost();
        return Character::takeDamage(totalDamage);
    }
    else if (hasShield = false)
    {
        float totalDamage = damage - Character::getDefense();
        return Character::takeDamage(totalDamage);
    }
}

float Player::attack(Character* other)
{
    return other->takeDamage(getDamage());
}

float Player::getDamage()
{
    return Character::getDamage() + m_weapon.getStatusBoost();
}

float Player::getDefense()
{
    return Character::getDefense() + m_shield.getStatusBoost();
}


