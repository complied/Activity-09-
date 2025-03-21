//
//  main.cpp
//  Activity 09
//
//  Created by Subigya Parajuli on 3/21/25.
//


#include "Movie.hpp"
#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "=== Movie Input ===" << endl;

    Movie myMovie = createMovie();

    cout << "\n=== Movie Info ===" << endl;
    cout << myMovie;

    return 0;
}


/*
 
Out Put
 
 
 === Movie Input ===
 Enter movie title: Terminator
 Enter release year (1900 - 2100): yhn
 Invalid input. Try again.
 Enter release year (1900 - 2100): 1984
 Enter genre: Action
 Enter duration in minutes (30 - 300): 120
 Is the movie popular (y/n): y

 === Movie Info ===
 Title: erminator
 Release Year: 1984
 Genre: Action
 Duration: 120 minutes
 Popular: Yes
 Program ended with exit code: 0
 
 
 */
