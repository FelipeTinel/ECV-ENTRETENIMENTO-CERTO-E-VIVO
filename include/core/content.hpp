#pragma once

#include <iostream>
#include <string>

#include "genre.hpp"
#include "type.hpp"
class Content {

    private:

        static int next_id;

        int id, year;
        std::string title;
        Type type;
        Genre genre;
        long views;
        float rating;

    public:

        Content (std::string title, Type type, Genre genre, int year, long views, float rating);

};