 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 1)
 */
struct VampireCastle
{
    int numUndead = 350;
    int numberOfRooms = 100;
    float bloodInLiters = 1000.4f;
    bool draculaDefeated;
    int yearsTilResurrection = 100;

    struct VampireHunter
    {
        bool hasMorningStar = true;
        unsigned int numUndeadSlain = 348;
        void swingWhip(int directionOfSwing);
    };
    
    void curseVampireHunter( VampireHunter vampireHunter );
    VampireHunter simon;
};



     

/*  
 2)
 */
struct ScaryMansion
{
    int selectHero = 0;
    int numZombies = 20;
    int numZombieDogs = 7;
    bool savedBarry;
    bool savedRebecca;
    bool activatedSelfDestruct;

    struct Tyrant
    {
        void swingClaw(int selectHero);
    };
    
    int eatThis(Tyrant tyrant, int numMissiles);
    Tyrant t002;
};
/*
 3)
 */
struct GreatFox
{
    struct ArWing
    {
        bool twinBlasters;
        int numBombs = 3;
        void doABarrelRoll(bool left);
    };

    int plotCourse = 2;
    void supportArwing(ArWing arWing, bool dropSupplies);
    
    ArWing fox;
    ArWing peppy;
    ArWing falco;
    ArWing slippy;
};
/*
 4)
 */
struct SpaceshipFactory
{
    struct SpaceFighter
    {
        int selectForceModule = 2;
        void ejectModule();
        void attachModule(bool onFrontOfShip);
    };

    void launchFighters(SpaceFighter spaceFighter, int amountOfShips);
    
    SpaceFighter arrowHead;
};

/*
 5)
 */
struct AlienEmpire
{
    unsigned int numWorldsConquered = 8;
    int bydoWarships = 5000;
    float amountOfFeetSidescrolled= 43284.3f;  

    struct Boss
    {
        unsigned int numHumansBlownUp = 300;
        float storedEnergy = 90.f;
        void specialAttack(int storedEnergy);
    };

    void createBulletHell(Boss boss, int numMinions);

    Boss bydoCommander;
};


    

/*
 6)
 */
struct Sewers
{ 
    struct Ooze 
    {
        bool toxicWaste = true;
        bool mutagen = true;
        void contaminate(int selectWaterSupply);
    };

    struct Rat
    {
        bool karateMaster = true;
        int longWindedLecture(int topic, int length);
    };

    struct Turtle
    {
        float numPizzaSlicesEaten = 3.5;
        void eatPizza(int numSlices);
    };

    void createNinjaTurtle(Turtle turtle, Ooze ooze, double amountOoze);
    
    Turtle leonardo;
    Turtle donatello;
    Turtle Michelangelo;
    Turtle Raphael;
    
    Rat masterSplinter;
};
/*
 7)
 */
struct TechnoDrome
{ 
    struct NinjaGang
    {
        int numTonfaNinja = 1000;
        int numSwordNinja = 300;
        int numStaffNinja = 500;
        void beDefeated(bool thrownOffScreen);
    };

    NinjaGang footClan;
};
/*
 8)
 */
struct ManaTree
{
    bool allFormsOfLifeCreated = true;
    unsigned int numYearsOld = 70000;

    
    struct ManaArtifact
    {
        float enchantmentEnergy = 700.3f;
        void advanceThePlot(bool inHeroPossession);
    };

    struct MainCharacter
    {
        int magicPoints = 60;
        float experiencePoints = 1000.f;
        int attack = 15;
        int defence = 12;
        int magic = 13;

        void castSpell(int magicPointsUsed, int spellChoice);
    };

    int chooseSuccessor(MainCharacter mainCharacter, bool heroOrHeroine);
    

    MainCharacter heroine;
    
    ManaArtifact swordOfMana;
};
/*
 9)
 */
struct SkyNet 
{

    unsigned int enslaveHumanity(int numMajorCities);

    struct TimeTravelingTerminator
    {
        int numBullets;
        bool yourBoots;
        bool yourClothes;
        bool yourMotorcycle;
        void haveYouSeenThisBoy(bool recognizePolaroidPhoto);
    };  
    TimeTravelingTerminator t1000;
};

    
/*
 10)
 */
struct AnotherCastle
{

    void demolishCastle(bool italianPlumberPresent, int numSticksOfDynamite);

    struct Princess
    {
        bool isInAnotherCastle = true;
        unsigned int numTimesAbducted = 25;
        void useStarPower();
    };
    Princess peach;
};

    

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
