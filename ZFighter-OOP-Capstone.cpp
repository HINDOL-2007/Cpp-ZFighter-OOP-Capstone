#include <iostream>
#include <string>
using namespace std;
class Character
{
    static int activeFighters;

protected:
    string name;
    int basePower;

public:
    Character(const string &n, int bp) : name(n), basePower(bp)
    {
        activeFighters++;
        cout << name << " has entered the battlefield!" << endl;
    }
    virtual ~Character()
    {
        activeFighters--;
        cout << name << " was defeated. Fighters remaining:- " << activeFighters << endl;
    }
    virtual void powerUp() = 0;
};
int Character ::activeFighters = 0;
class Striker : virtual public Character
{
protected:
    int physicalDamage;

public:
    Striker(const string &n, int bp, int pd) : Character(n, bp), physicalDamage(pd) {}
    void powerUp()
    {
        physicalDamage += 500;
        cout << "Physical muscles expanding!" << endl;
    }
};
class KiMaster : virtual public Character
{
protected:
    int kiDamage;

public:
    KiMaster(const string &n, int bp, int kd) : Character(n, bp), kiDamage(kd) {}
    void powerUp()
    {
        kiDamage += 1000;
        cout << "Ki aura flaring!" << endl;
    }
};
class ZFighter : public Striker, public KiMaster
{
    int superSaiyanMultiplier;
    bool isTransformed = false;

public:
    ZFighter(const string &n, int bp, int pd, int kd, int multiplier) : Character(n, bp), Striker(n, bp, pd), KiMaster(n, bp, kd), superSaiyanMultiplier(multiplier) {}
    void powerUp()
    {
        if (isTransformed)
        {
            cout << "Already at full power!" << endl;
            return;
        }
        Striker::powerUp();
        KiMaster::powerUp();
        basePower *= superSaiyanMultiplier;
        isTransformed = true;
        cout << "AHHHHH! Super Saiyan Transformation Complete!" << endl;
    }
    void showStats() const
    {
        cout << "Name :- " << name
             << "\nBase Power :- " << basePower
             << "\nPhysical Damage :- " << physicalDamage
             << "\nKi Damage :- " << kiDamage << endl;
    }
};
int main()
{
    cout << endl;
    cout << "--- TOURNAMENT START ---" << endl;
    {
        ZFighter goku("Goku", 9000, 1500, 2000, 50);
        goku.showStats();
        cout << endl;
        goku.powerUp();
        cout << endl;
        goku.showStats();
        cout << endl;
        goku.powerUp();
        cout << endl;
    }
    cout << endl;
    cout << "--- TOURNAMENT END ---" << endl;
    cout << endl;
    return 0;
}
