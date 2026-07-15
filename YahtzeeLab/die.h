#ifndef DIE_H
#define DIE_H

class Die
{
    private: 
        int sides;
        int faceValue;
    public: 
        Die();
        Die(int numberOfSides);
        void roll();
        int getFaceValue();
};
#endif