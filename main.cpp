#include <iostream>
#include <string>
#include <ctime>
#include"uiDraw.h"
#include "uiInteract.h"
class Card {
    public:
        std::string title;
        std::string info;
        std::string option1;
        std::string option2;
        int choice;
        std::string result1;
        std::string result2;
};

class Character {
    public:
        int hp = 100;
        int progress = 0;
        std::string name;
        std::string quest;
        std::string favoriteColor;
};


class Game
{
public:

   /*********************************************
    * Function: handleInput
    * Description: Takes actions according to whatever
    *  keys the user has pressed.
    *********************************************/
   void handleInput(const Interface & ui);
   
   /*********************************************
    * Function: advance
    * Description: Move everything forward one
    *  step in time.
    *********************************************/
   void advance();
   
   /*********************************************
    * Function: draw
    * Description: draws everything for the game.
    *********************************************/
   void draw(const Interface & ui);

   
};

void Game :: draw(const Interface & ui)
{
   //lander.draw();


      drawText(Point(),"");

      drawText(Point(), "You have crashed!");
   
}

//ENCOUNTER CARDS
/***********************************************************************************************************/
Card goblinCard()
{
    Card goblin;
    goblin.title = "Encounter";
    goblin.info = "A goblin has taken a villager hostage!";
    goblin.option1 = "Attack the goblin and save the villager!";
    goblin.option2 = "Run away! He's super scary!";
    goblin.result1 = "You save the villager from the dumb goblin!";
    goblin.result2 = "You run away safely leaving the villager to probably be eaten.";
    return goblin;
}

Card thiefCard()
{
    Card thief;
    thief.title = "Encounter";
    thief.info = "A thief has stolen your wallet!";
    thief.option1 = "Let him go, he may need the gold more than yourself.";
    thief.option2 = "Chase the thief and reclaim your lost gold!";
    thief.result1 = "You sleep on the street tonight, seeing as you have no gold for the inn.";
    thief.result2 = "You beat up the poor veteran, teaching him that stealing is never okay. You yell at him to \"Get a job\"";
    return thief;
}

Card wolfCard()
{
    Card wolf;
    wolf.title = "Encounter";
    wolf.info = "A hungry wolf blocks your path, blood seems to be dripping from his fangs.";
    wolf.option1 = "Draw your sword and hopefully scare the wolf.";
    wolf.option2 = "Pull some meat out from your bag, maybe he'll enjoy it.";
    wolf.result1 = "Your sword shines brightly in the moonlight, successfully scaring away the wolf.";
    wolf.result2 = "You pull the meat out a little too slow, and the wolf bites your hand, you yelp and bolt away.";
    return wolf;
}

Card merchantCard()
{
    Card merchant;
    merchant.title = "Encounter";
    merchant.info = "A travelling salesman approaches you, offering you magic dust.";
    merchant.option1 = "Accept the magic dust for 10 gold.";
    merchant.option2 = "Tell him you think magic is for freaks.";
    merchant.result1 = "You accept the magic dust, snort it, and have a night of hallucinations and \"fun,\" you wake up with a headache the next morning.";
    merchant.result2 = "He tries to tell you that the hip young kids use it, but you walk away shaking your head.";
    return merchant;
}

Card necroCard()
{
    Card necro;
    necro.title = "Encounter";
    necro.info = "As you're walking through the woods, you look off to the side and in a small clearing you see a Necromancer chanting by some pentagram painted on the ground.";
    necro.option1 = "Threaten to kill him for his blasphemy!";
    necro.option2 = "Join in the latin chant.";
    necro.result1 = "You approach the Necromancer, call him a kinky freak, and the stab him with your sword, leaving the world that much closer to purity.";
    necro.result2 = "You approach the Necromancer and join in his ritual, skeletons raise from the ground, you get scared easily and run away screaming like a small tiny girl.";
    return necro;
}

Card dragonCard()
{
    Card dragon;
    dragon.title = "Encounter";
    dragon.info = "A dragon wearing a cape and rainboots offers you mythical powers.";
    dragon.option1 = "You bend to the dragons will out of fear and take the mythical powers.";
    dragon.option2 = "You grow courage and backhand the dragon.";
    dragon.result1 = "You know are stuck with a cape and rainboots that you can never remove.";
    dragon.result2 = "Your hand hurts and is imprinted with scales, but turns out that you have super strength.";
    return dragon;
}

Card ITCard()
{
    Card IT;
    IT.title = "Encounter";
    IT.info = "Hiya, Georgie do you want a balloon.";
    IT.option1 = "Prefer not to say";
    IT.option2 = "My dad told me not to talk to strangers.";
    IT.result1 = "Pennywise got sad and bought you a burger";
    IT.result2 = "Pennywise got sad and started attacking you";
    return IT;
}

//EVENT CARDS
/***********************************************************************************************************/
Card treeCard()
{
    Card tree;
    tree.title = "Event";
    tree.info = "A large downed tree blocks your path. An opening under it allows you to crawl under it but there could be a monster down there. The branches are sharp and possibly poisonous.";
    tree.option1 = "Climb over the tree.";
    tree.option2 = "Crawl under the tree.";
    tree.result1 = "You climb over the downed tree and avoid the spiky branches.";
    tree.result2 = "As you squeeze under the tree you make it out but with substantial scratches.";
    return tree;
}

Card foodCard()
{
    Card food;
    food.title = "Event";
    food.info = "As you pass through a small town a hooded man offers you some food embued with magic.";
    food.option1 = "I love taking food from strangers!";
    food.option2 = "Magic bad.";
    food.result1 = "You eat the food and feel a sudden surge of power.";
    food.result2 = "You refuse the food and the angry villagers run you out of town for you rudenss.";
    return food;
}

Card bedCard()
{
    Card bed;
    bed.title = "Event";
    bed.info = "You find a bed in the forest.";
    bed.option1 = "Probably not time for a nap.";
    bed.option2 = "Nap time!";
    bed.result1 = "You move along and avoid one awkward conversation.";
    bed.result2 = "You wake up to a group of imps biting your fingers.";
    return bed;
}

Card acornCard()
{
    Card acorn;
    acorn.title = "Event";
    acorn.info = "A rather muscular squirrel offers you a large acorn and wants you to eat it.";
    acorn.option1 = "I'm nutty for fuzzy animals!";
    acorn.option2 = "I don't wanna be a buff squirrel.";
    acorn.result1 = "The squirrel walks away looking content.";
    acorn.result2 = "The buff squirrel bites your toe.";
    return acorn;
}

Card stormCard()
{
    Card storm;
    storm.title = "Event";
    storm.info = "Lightning crashes around you in a heavy downpour as you come across a cabin in the woods.";
    storm.option1 = "Take shelter in the cabin.";
    storm.option2 = "Tough out the storm.";
    storm.result1 = "A bearded man lets you inside and tells stories while the storm passes.";
    storm.result2 = "You rest under a tree and get struck by lightning. You taste... Lightningy";
    return storm;
}

Card unluckyCard()
{
    Card unlucky;
    unlucky.title = "Event";
    unlucky.info = "As you walked down the street you tripped and ripped your pants.";
    unlucky.option1 = "You run to the nearest clothing store.";
    unlucky.option2 = "Embrace the unfortunate event";
    unlucky.result1 = "Seems like your wallet fell out of your pockets when you tripped.";
    unlucky.result2 = "Your confidence proves how manly you really are and no one is brave enough to call you out";
    return unlucky;
}

Card fishyCard()
{
    Card fishy;
    fishy.title = "Event";
    fishy.info = "The lonely fish asks you to be his friend";
    fishy.option1 = "You say my mom told me not to talk to stranger";
    fishy.option2 = "You say sure";
    fishy.result1 = "You are saved from fish attack.";
    fishy.result2 = "The fish happened to be a robber fish and he stole all your money.";
    return fishy;
}

Card posterCard()
{
    Card poster;
    poster.title = "Event";
    poster.info = "You humanoid racoon hands you a flyer advertising the newest thing, bread.";
    poster.option1 = "You tell the racoon that you believe plants are alive and he's evil.";
    poster.option2 = "You think the racoon would make a better meal and attack.";
    poster.result1 = "The racoon calls you a weirdo and leaves.";
    poster.result2 = "The racoon blocks your blows with precision and gags you with a loaf of bread before yelling at you and leaving you an embarrased adventurer in the woods.";
    return poster;
}

Card bearCard()
{
    Card bear;
    bear.title = "Event";
    bear.info = "A bear jumps out from behind a tree and begins to chase you.";
    bear.option1 = "Climb up a tree and pretnd to be a branch.";
    bear.option2 = "Run into a cave and pretend to be a rock.";
    bear.result1 = "The bear follows you up the tree but loses sight of you when you\"become a tree.\"";
    bear.result2 = "The bear runs into the cave and loses sight of you, but this is a bear with a rock diet so it still manages to bite you.";
    return bear;
}

Card tacoBellCard()
{
    Card tb;
    tb.title = "Event";
    tb.info = "The Taco Bell Wizard appears in a cloud of smoke and offers you both Subway and Taco Bell";
    tb.option1 = "Take the Subway.";
    tb.option2 = "Take the Taco Bell.";
    tb.result1 = "The wizard says, \"Good, I really didn't want that crap.\"";
    tb.result2 = "The wizard punches you in the femur and says, \"Only the scum of the earth dare to eat my bell, BEGONE THOT!\"";
    return tb;
}

Card angelFishCard()
{
    Card fish;
    fish.title = "Event";
    fish.info = "A fish with a beautiful face and wings decends from from the skies in a floating fish bowl.";
    fish.option1 = "Break the fish bowl.";
    fish.option2 = "Kiss the god-like creature";
    fish.result1 = "The bowl shatters and the beautiful fish morphs into a demon with razor sharp teeth that flops on the ground helpless. You were lucky this time.";
    fish.result2 = "You pucker up and close your eyes before being greeted with razor sharp teeth from the deceptively good looking creature. That's what you get you freak.";
    return fish;
}

Card pineConeCard()
{
    Card pine;
    pine.title = "Event";
    pine.info = "An army of adorable chibi pine cones march up to you and place huge gold bars on the forest floor.";
    pine.option1 = "Offer the pine cones some of your riches.";
    pine.option2 = "Snatch the gold and run, they're pine cones they probably can't catch you.";
    pine.result1 = "The pine cones shake happily and say one day they'll take you to see the pine cone princess.";
    pine.result2 = "The gold is impossibly heavy and you can't lift it. The pine cones screech like banshees and try to rip your legs off.";
    return pine;
}

Card princessCard()
{
    Card prin;
    prin.title = "Event";
    prin.info = "With your previously aquired pine cone allies you are taken to meet the pine cone princess.";
    prin.option1 = "Invite her to a romantic dinner for two.";
    prin.option2 = "Offer your appologies because you believe man should not be with pine cone.";
    prin.result1 = "You and the princess eat lamb chops roasted over pine logs and giggle at the prospect of pine cone marriage.";
    prin.result2 = "The pine cone princess cries when you reject her and king pine cone stretches out a very long arm to slap your face.";
    return prin;
}

//CHARACTER IMPLEMENTATION
/***********************************************************************************************************/
// Character changeHP(Character character)
// {
//     character.hp -= 10;
//     return character;
// }

// Character changeProgress(Character character)
// {
//     character.progress += 10;
//     return character;
// }

//DISPLAY
/***********************************************************************************************************/
int getIndex()
{
    srand(time(NULL));
    int x = rand() % 20;
    return x;
}

void displayCard(Card card, Character character)
{
    std::cout << card.title << std::endl << std::endl;
    std::cout << card.info << std::endl << std::endl;
    std::cout << "What would you like to do?\n";
    std::cout << "1." << card.option1 << " or 2." << card.option2 << std::endl;
    std::cout << ">> ";
    std::cin >> card.choice;

    if (card.choice == 1)
    {
        
        std::cout << card.result1 << std::endl;
        character.progress = character.progress - 10;
        std::cout << "Progress: " << character.progress << " HP: " << character.hp << std::endl << std::endl;
    }
    else if (card.choice == 2)
    {
        std::cout << card.result2 << std::endl;
        character.hp -= 10;
        std::cout << "Progress: " << character.progress << " HP: " << character.hp << std::endl << std::endl;
    }
    else if (card.choice == 6)
    {
        return;
    }

    while (card.choice < 1 || card.choice > 2)
    {
        std::cout << "Choose a valid option: 1 or 2.\n";
        std::cout << ">> ";
        std::cin >> card.choice;
        if (card.choice == 1)
        {
            std::cout << card.result1 << std::endl;
            character.progress += 10;
            std::cout << "Progress: " << character.progress << " HP: " << character.hp << std::endl;
        }
        else if (card.choice == 2)
        {
            std::cout << card.result2 << std::endl;
            character.hp -= 10;
            std::cout << "Progress: " << character.progress << " HP: " << character.hp << std::endl;
        }
    }
}
void callBack(const Interface *pUI, void *p)
{
   Game *pGame = (Game *)p;
   
   pGame->advance();
   pGame->handleInput(*pUI) ;
   pGame->draw(*pUI);
}

int main()
{
    Character character;
    std::cout << "What is your name?\n";
    std::cin >> character.name;
    // std::cout << "What is your quest?\n";
    // std::getline (std::cin, character.quest);
    // std::cout << "What is your favorite color?\n";
    // std::getline (std::cin, character.favoriteColor);

    // std::cout << "quest: " << character.quest << std::endl;
    // std::cout << "color: " << character.favoriteColor << std::endl;

    Card goblin = goblinCard();
    Card thief = thiefCard();
    Card wolf = wolfCard();
    Card merchant = merchantCard();
    Card necro = necroCard();
    Card dragon = dragonCard();
    Card tree = treeCard();
    Card food = foodCard();
    Card bed = bedCard();
    Card acorn = acornCard();
    Card storm = stormCard();
    Card unlucky = unluckyCard();
    Card fishy = fishyCard();
    Card poster = posterCard();
    Card bear = bearCard();
    Card tb = tacoBellCard();
    Card fish = angelFishCard();
    Card pine = pineConeCard();
    Card prin = princessCard();
    Card IT = ITCard();

    Card deck[20] = { goblin, thief, wolf, merchant, necro, dragon, tree, food, bed, acorn, storm, unlucky, fishy, poster, bear, tb, fish, pine, prin, IT };
    
    while (character.hp > 0 || character.progress < 100)
    {
        int x = getIndex();
        displayCard(deck[x], character);
    }

    return 0;
    
    
}


