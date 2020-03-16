/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 *1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 *2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

Wait for my code review.
*/

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;    //2) relevant data types
    };
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    Car myCar; //5) a member variable whose type is a UDT.
};




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
    };

    struct Rat
    {
        bool karateMaster = true;
    };
    struct Turtle
    {
        float numPizzaSlicesEaten = 3.5;
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
    };
    ManaArtifact swordOfMana;
};
/*
 9)
 */
struct SkyNet 
{
    struct TimeTravelingTerminator
    {
        int numBullets;
        bool yourBoots;
        bool yourClothes;
        bool yourMotorcycle;
        void haveYouSeenThisBoy();
    };  
    TimeTravelingTerminator t1000;
};
/*
 10)
 */
struct AnotherCastle
{
    struct Princess
    {
        bool isInAnotherCastle = true;
    };
    Princess peach;
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
