#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <iostream>
#include <string>
using namespace std;

// Nested struct for additional movie details
struct MovieDetails {
    int durationMinutes;
    bool isPopular;
    string genre;
};

// Main Movie struct
struct Movie {
    string title;
    int releaseYear;
    MovieDetails details;
};

// Function declarations
ostream& operator<<(ostream& out, const MovieDetails& details);
ostream& operator<<(ostream& out, const Movie& movie);
int getValidatedInt(const string& prompt, int min, int max);
bool getYesNo(const string& prompt);
Movie createMovie();

#endif 

