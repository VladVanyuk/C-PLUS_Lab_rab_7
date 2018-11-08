//
// Created by Владислав Ванюк on 11/8/18.
//

#ifndef UNTITLED27_FLYING_H
#define UNTITLED27_FLYING_H

#include <iostream>
#include <string>
using namespace std;


class machines
{
public:
    void describe();

    void whatis(){
        cout << "What is it? --> ";
    }

protected:
    int a;    //just added for fun, not necessary

private:
    int b;    //just added for fun, not necessary

};


class peaceful_plains: public machines
{

};



class war_plains: public machines
{

};


class passanger_plain: public peaceful_plains
{
public:
    void describe()
    {
        cout << "Its a plain for passangers" << endl;
    }
};


class sport_plain: public peaceful_plains
{
public:
    void describe()
    {
        cout << "Its a sport plain" << endl;
    }
};


class planner_plain: public peaceful_plains
{
public:
    void describe()
    {
        cout << "Its just a planner" << endl;
    }
};


class destroyer: public war_plains
{
public:
    void describe()
    {
        cout << "Wow, its a destroyer!" << endl;
    }
};


class bomb_plain: public war_plains
{
public:
    void describe()
    {
        cout << "ITS A BOMBER! RUN!" << endl;
    }
};


#endif //UNTITLED27_FLYING_H
