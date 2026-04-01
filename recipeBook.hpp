#ifndef __RECIPEBOOK__
#define __RECIPEBOOK__
#include "product.hpp"
#include "recipe.hpp"
#include <cstring>

struct RecipeBook{
    Recipe recipes[101];
    int recipeCount;

    RecipeBook(){
       recipeCount = 0;
    };

    void addRecipe(const Recipe& r){
      recipes[recipeCount] = r;
      ++recipeCount;
    }

    void findByTitle(const char* searchTitle) const{
        for(int i=0; i<recipeCount; ++i)
        {
            if(strcmp(recipes[i].title, searchTitle) == 0)
            {
                recipes[i].output();
                return;
            }
        }
    }
    
    void printAll() const{
        for(int i=0; i<recipeCount; ++i)
        {
            recipes[i].output();
        }
    }
};

#endif