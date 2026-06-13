#include <iostream>

#include "core/content.hpp"

int Content::next_id = 1;

Content::Content (std::string title, Type type, Genre genre, int year, long vies, float rating):

    id(next_id++),
    title(title),
    type(type),
    genre(genre),
    year(year),
    views(views),
    rating(rating)

{}