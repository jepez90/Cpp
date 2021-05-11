#ifndef HELLO
#define HELLO

#include <iostream>
#include <cstdlib>





class Player
{
    std::string Name;
    char Id;

public:
    Player();
    void setName(std::string new_name);
    std::string getName();
    char getId();
    void setId(char id);
    void printInfo();
};

Player::Player()
{
    setName("NoName");
}

void Player::setName(std::string new_name)
{
    Name = new_name;
}

std::string Player::getName()
{
    return Name;
}
char Player::getId()
{
    return Id;
}
void Player::setId(char id)
{
    Id = id;
}
void Player::printInfo()
{
    std::cout << "Name: " << Name
              << "\nId: " << Id
              << "\n";
}

//########################################3
class Board
{
    char storage[3][3];
    int turno;
    int jugadas;

public:
    Board();
    int setPosition(int x, int y, Player user);
    int getPosition(int x, int y);
    int getId();
    void print();
};
Board::Board()
{
    for (int i=0;i<3; i++)
    {
        for (int j=0;j<3; j++)
        {
            storage[i][j]='-';
        }
    }
}

int Board::setPosition(int x, int y, Player user)
{
    if (getPosition(x, y) == 1)
    {
        return -1;
    }
    storage[x][y] = user.getId();
}

int Board::getPosition(int x, int y)
{
    return storage[x][y];
}
void Board::print()
{
    std::cout<<"\n";
    for (int i=0; i <3; i++)
    {
        for (int j=0;j<3; j++)
        {
            std::cout<<storage[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}


int ask_for_names(Player *user1, Player *user2)
{
    std::string name;
    std::cout << "\nName of user 'x':";
    std::cin >> name;
    (*user1).setId('x');
    (*user1).setName(name);

    std::cout << "\nName of user 'o':";
    std::cin >> name;
    (*user2).setId('o');
    (*user2).setName(name);
    return (0);
}

char check_for_win(Board board)
{
    for (int i = 0; i < 3; i++)
    {
        if (board.getPosition(i, 0) == board.getPosition(i, 1) &&
            board.getPosition(i, 0) == board.getPosition(i, 2))
            return board.getPosition(i, 0);
        if (board.getPosition(0, i) == board.getPosition(1, i) &&
            board.getPosition(0, i) == board.getPosition(2, i))
            return board.getPosition(0, i);
    }
    return ('-');
}

char startGame(Player *user1, Player *user2, Board *board)
{
    Player *activeUser;
    int x, y, nextUser = rand() % 3;
    char winner = '-';
    for (int i = 0; i < 9; )
    {
        if (nextUser == 1)
            activeUser = user1;
        else
            activeUser = user2;

        std::cout << "\nTurn player '"
                  << activeUser->getId()
                  << "': "
                  << activeUser->getName()
                  << "\nWrite the position x y: ";
        std::cin >> x;
        std::cin >> y;
        if (x > 3 || y > 3)
            continue;

        if (board->getPosition(x, y) != '-')
            continue;
        board->setPosition(x, y, *activeUser);
        winner = check_for_win(*board);
        if (winner != '-')
            return winner;

        if (nextUser == 0)
            nextUser = 1;
        else
            nextUser = 0;
        board->print();
        i++;
    }
    return '-';
}


#endif
