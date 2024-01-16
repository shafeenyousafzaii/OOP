
    #include<iostream>
using namespace std;
class Card{
    int face;
    int suit;
    static string faces[13];
  static string suits[4];
    public:
 Card(int a,int b);

string to_string();
};
string Card::faces[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
string Card::suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string Card::to_string()
{
    return faces[face]+"  of  "+suits[suit];
}
Card::Card(int a=0,int b=0 )
{
    face=a;
    suit=b;
}
class DeckofCards{
Card deck[52];
int current_Card;
public:
DeckofCards(int a);
void shuffle();
Card deal_cards();
bool more_card();
};
DeckofCards::DeckofCards(int a=0)
{
    current_Card=a;
    int count=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<14;j++)
        {
            deck[count]=Card(j,i);
            count++;
        }
    }
}
void DeckofCards::shuffle()
{
        current_Card = 0;
        for (int i = 0; i < 52; i++)
        {
            int randomNumber = (rand()) % 52;
            Card temp = deck[i];
            deck[i] = deck[randomNumber];
            deck[randomNumber] = temp;
        }
}
Card DeckofCards::deal_cards()
{
if (current_Card>51)
{
    shuffle();
}
else
return deck[current_Card++];
}
bool DeckofCards ::more_card()
{
       
        if (current_Card > 51)
        {
            return false;
        }
        else
        {
            return true;
        }
}
int main()
{
    DeckofCards deck;
    deck.shuffle();
    int a=1;
    while (deck.more_card()==true)
    {
       cout<<a<<":  "<<deck.deal_cards().to_string()<<endl;
       a++;
    }
    
}