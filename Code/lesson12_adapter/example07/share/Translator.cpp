#include "../include/Translator.h"

Translator::Translator(std::unique_ptr<ForeignPlayer> foreignPlayer)
{
    this->foreignPlayer = std::move(foreignPlayer);
}

Translator::~Translator()
{
    if(this->foreignPlayer != nullptr)
    {
        this->foreignPlayer = nullptr;
    }
}

void Translator::attack()
{
    cout << "Translator::attack():: 通过适配器翻译 ..." << endl;
    this->foreignPlayer->gong();
}

void Translator::defence()
{
    cout << "Translator::defence():: 通过适配器翻译 ..." << endl;
    this->foreignPlayer->shou();
}