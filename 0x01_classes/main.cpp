#include <iostream>
#include "mainFunctions.hpp"

int main()
{
    Player user1, user2;
    Board board;
    char winner;
    //pide los nombres de usuario
    ask_for_names(&user1, &user2);
    //inicia el juego
    winner = startGame(&user1, &user2, &board);
    //ashow the winner
    if (winner == '-')
        std::cout<<"No Winner";
    else if (winner == user1.getId())
        std::cout<<"Winner "<<user1.getName();
    else
        std::cout<<"Winner "<<user2.getName();
    board.print();
}
