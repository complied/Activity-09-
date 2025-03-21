Program Written in C++

This program creates and displays a Movie object using a nested struct for movie details. 
User input validation and uses an overloaded stream insertion (<<) operator for formatted output.

#How It Works?
    + Takes input for title, release year, genre, duration, and popularity.
    + Validates inputs to ensure correct data types and value ranges.
    + Uses a nested MovieDetails struct inside Movie.
    + Displays movie details using an overloaded << operator.
    
#How I Did It?
    + Created a structure (MovieDetails) that holds genre, duration, and popularity.
    + Nested MovieDetails inside Movie to store additional details.

# File Format?
main.cpp: Handles user interaction.
Utils/Movie.cpp: Function definitions.
Utils/Movie.hpp: Function declarations.

