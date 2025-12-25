#ifndef RESTAURANT_MANAGER_H
#define RESTAURANT_MANAGER_H

#include<bits/stdc++.h>
#include "../models/Restaurant.h"
using namespace std;

class RestaurantManager {
private:
    vector<Restaurant*> restaurants;
    static RestaurantManager* instance;

    RestaurantManager() {

    }
public:
    static RestaurantManager* getInstance() {
        if(!instance) {
            instance = new RestaurantManager();
        }
        return instance;
    }

    void addRestaurant(Restaurant* r) {
        restaurants.push_back(r);
    }
    vector<Restaurant*> searchByLocation(const string& loc) {
        vector<Restaurant*> result;
        for (Restaurant* r : restaurants) {
            if (r->getLocation() == loc) {
                result.push_back(r);
            }
        }
       return result;
    }
};
RestaurantManager* RestaurantManager::instance = nullptr;

#endif


