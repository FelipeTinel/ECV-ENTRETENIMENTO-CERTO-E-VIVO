#include <iostream>
#include <fstream>

#include "services/data_manager.hpp"
#include "core/content.hpp"
#include "core/genre.hpp"
#include "core/type.hpp"

int main () {

    Content content{"Interstellar", Type::MOVIE, Genre::SCIENCE_FICTION, 2014, 950000, 4.9};
    DataManager data_manager{"../tests/data/content_test.txt"};

    data_manager.write_content(content);

}