/**
 * @file plantNursery.h
 * @author lainie daniel 
 * @brief plant nursery header file 
 * @version 0.1
 * @date 2023-02-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PLANT_NURSERY_H
#define PLANT_NURSERY_H

#include "plant.h"

class plantNursery{
    public:
        //constructor 

        //accessors
        Plant show_all(ostream);

        //mutators
        Plant add_plant(istream);
        Plant remove(p_name, p_color);
        

    private:
        //array of 200 plants 
        //keep track of used 
        const int SIZE = 200;
        Plant myplants[SIZE];
        int used = 0;


};


#endif