#include <iostream>
#include "product.hpp"
#include "recipe.hpp"
#include "recipeBook.hpp"

int main()
{
    RecipeBook book;

    unsigned n;
    std::cin>>n;

    for(size_t i=0; i<n; ++i)
    {
        Recipe r;
        r.input();
        book.addRecipe(r);
    }

    char title[51];
    std::cin.getline(title, 51);
    book.findByTitle(title);

    book.printAll();

    return 0;
}