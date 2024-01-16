#include<iostream>
#include<string>
using namespace std;
class Cards;
class DecofCards;
class Cards
{
private:
    int face;
    int suit;
    static string faces[13];
    static string suits[4];
public:
    Cards(int face= 0  , int suit = 0);
    string to_string();
    // ~Cards();
};
string Cards::faces[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine","Ten", "Jack", "Queen", "King"};
string Cards::suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
Cards::Cards(int face, int suit)
{
    this->face=face;
    this->suit=suit;
}

string Cards::to_string()
{
    string x;
    x=faces[face]+"  of  "+suits[suit];
    return x;
}
// Cards::~Cards()
// {
//     cout<<"Destructor called"<<endl;
// }


class DecofCards
{
private:
    int current_Card;
    Cards deck[52];
public:
    DecofCards(int x=0);
    void shuffle();
    Cards deal_cards();
    bool more_card();
    // ~DecofCards();
};

DecofCards::DecofCards(int x)
{
    current_Card=x;
    int count=0;
    for(int i=0;i<=3;i++)
    {
        for (int j = 0; j <= 13; j++)
        {
            deck[count]=Cards(j,i);
            count++;
        }
        
    }
}
void DecofCards::shuffle()
{
    current_Card = 0;
    for (int i = 0; i < 52; i++)
    {
        int randomNumber = (rand()) % 52;
        Cards temp = deck[i];
        deck[i] = deck[randomNumber];
        deck[randomNumber] = temp;
    }
}
Cards DecofCards::deal_cards()
{
    if (current_Card>51)
    {
        // cout<<"No more cards to deal"<<endl;
        // int x=rand()%51;
        // return deck[x];
        shuffle();
    }
    else
    {
        return deck[current_Card++];
    }

}
bool DecofCards::more_card()
{
    if (current_Card>51)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// DecofCards::~DecofCards()
// {
// }

