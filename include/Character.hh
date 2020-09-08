#include<iostream>

class Character
{
    private:
        short int health;
        uint32_t strength;
        uint32_t exp;
        short int luck;
        std::string lore;//No necesario
        uint32_t speed;
    public:
        Character(short int, uint32_t, uint32_t, short int, uint32_t);//constructor
        ~Character();//destructor
        short int GetHealth() const;//no se puede modificar el contenido, es inmutable
        uint32_t GetStrenght() const;
        uint32_t GetExp() const;
        short int GetLuck() const;
        std::string GetLore() const;
        uint32_t GetSpeed() const;

        void SetLore(std::string);
        void GetDamage(short int damage);
};
