#include "Movie.hpp"

// Overloaded stream insertion for MovieDetails
ostream& operator<<(ostream& out, const MovieDetails& details) {
    out << "Genre: " << details.genre << endl;
    out << "Duration: " << details.durationMinutes << " minutes" << endl;
    out << "Popular: " << (details.isPopular ? "Yes" : "No") << endl;
    return out;
}

// Overloaded stream insertion for Movie
ostream& operator<<(ostream& out, const Movie& movie) {
    out << "Title: " << movie.title << endl;
    out << "Release Year: " << movie.releaseYear << endl;
    out << movie.details;
    return out;
}

// Get validated integer input
int getValidatedInt(const string& prompt, int min, int max) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (!cin.fail() && value >= min && value <= max) {
            cin.ignore(); // flush newline
            return value;
        }
        cout << "Invalid input. Try again." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}

// Get a yes/no response and convert to bool
bool getYesNo(const string& prompt) {
    char choice;
    while (true) {
        cout << prompt << " (y/n): ";
        cin >> choice;
        choice = tolower(choice);
        if (choice == 'y') return true;
        if (choice == 'n') return false;
        cout << "Please enter 'y' or 'n'." << endl;
    }
}

// Function to create and return a Movie object
Movie createMovie() {
    Movie movie;

    cout << "Enter movie title: ";
    cin.ignore();
    getline(cin, movie.title);

    movie.releaseYear = getValidatedInt("Enter release year (1900 - 2100): ", 1900, 2100);

    cout << "Enter genre: ";
    getline(cin, movie.details.genre);

    movie.details.durationMinutes = getValidatedInt("Enter duration in minutes (30 - 300): ", 30, 300);

    movie.details.isPopular = getYesNo("Is the movie popular");

    return movie;
}

