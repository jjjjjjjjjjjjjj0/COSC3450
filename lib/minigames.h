#ifndef MINIGAMES_H
#define MINIGAMES_H

<<<<<<< HEAD
#include "../lib/toolkit.h"
#include "../lib/dependencies.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <iomanip>
#include <chrono>
#include <algorithm>

/* Base Game class */
=======
#include <vector>
#include <string>

>>>>>>> 226432c8e1a4536c009d6514828fa5fed24c1141
class Game
{
public:
    virtual void start() = 0; // Pure virtual function to enforce implementation in derived classes
    virtual ~Game() {}        // Virtual destructor for proper cleanup
};

<<<<<<< HEAD
/* TicTacToe Game */
class TicTacToe : public Game
{
private:
    char squares[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

public:
=======
class TicTacToe : public Game
{
private:
    char squares[3][3];

public:
    TicTacToe(); // Add this constructor declaration
>>>>>>> 226432c8e1a4536c009d6514828fa5fed24c1141
    void printBoard();
    char getSquare(int row, int col) const;
    void playerMove(int row, int col);
    void computerTurn();
    bool checkForWin();
    void start() override;
};

<<<<<<< HEAD
/* CodeGuesser Game */
=======
>>>>>>> 226432c8e1a4536c009d6514828fa5fed24c1141
class CodeGuesser : public Game
{
private:
    std::vector<std::string> words;
    std::vector<std::string> guesses;
    int index;

    static int generateRandomIndex(size_t size);

public:
    CodeGuesser();
    void start() override;
    bool addGuess();
    void printGuesses();
    void printWords();
    int getWordLength() const;
    int getGuessCount() const;
    std::string getLastGuess() const;
};

<<<<<<< HEAD
/* BlackJack Game */
=======
>>>>>>> 226432c8e1a4536c009d6514828fa5fed24c1141
class BlackJack : public Game
{
private:
    std::vector<int> cards;
    int dealer[2];
    std::vector<int> playersCards;
    int bid;

<<<<<<< HEAD
=======
public:
    BlackJack();
    void start() override;
>>>>>>> 226432c8e1a4536c009d6514828fa5fed24c1141
    void waitForEnter();
    int evaluate(bool hit);
    void initDecks();
    void newGame();
    void displayState(bool printAll);
<<<<<<< HEAD

public:
    BlackJack();
    void start() override;
};

#endif // MINIGAMES_H
=======
};

#endif // MINIGAMES_H
>>>>>>> 226432c8e1a4536c009d6514828fa5fed24c1141
