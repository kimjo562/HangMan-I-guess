#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;
int main()

{
string phrase; /// Phrase of the word.
char guess; /// The Word Guessing
int lencount=0; /// Keeping track of the guesses.
int lencount2=0; /// Counting Repeated Letters.
int space=0; /// Space Counter
int len; /// The Length of the guess.
int loss=0; /// Wrong Counter
int lives=5; ///Number of Lives


char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


int choices; /// Choice
cout<<"**************************************************"<<endl;
cout<<"*              GUESS MY WORD GAME           ?    *"<<endl;
cout<<"*    Player 1 - Enter Word               .   .   *"<<endl;
cout<<"*    Player 2 - Try to Guess Word          >     *"<<endl;
cout<<"*                                        ----    *"<<endl;
cout<<"**************************************************"<<endl;
cout<<endl<<endl;
cout<<"Note: (No Capitals)"<<endl;
cout<<"Player 1 - Enter Word: ";
getline(cin,phrase);

len=phrase.length();
char blank[len]; /// Array for Blanks

system("cls");

cout<<"Player 2 - You will now begin the game."<<endl<<endl;
cout<<endl<<endl;
cout<<"There are no capital letters."<<endl;
cout<<"Here is your word to guess."<<endl<<endl;
for (int i=0; i<len; i++)
{
    if(phrase[i]==' ')
    {
        blank[i]=' ';
        cout<<blank[i]<<"  ";
        space++;
    }
        else
        {
            blank[i]='_';
            cout<<blank[i]<<" ";
        }
}
cout<<endl<<endl;

do
{
    do
    {


cout<<endl;
cout<<"Make a Guess: ";
cin>>guess;
cout<<endl;

        for (int i=0; i<26; i++)
        {
            if(guess==alpha[i])
                {
                    alpha[i]=' ';
                    lencount2++;
                }
        }

    }
    while(lencount2==0);
    lencount2=0;
    system("cls");

  cout<<endl;
  for (int i=0; i<len; i++)
  {
      if(phrase[i]==guess)
      {
          lencount++;
          blank[i]=guess;
          cout<<blank[i]<<"  ";
          loss++;
      }
        else
        {
            cout<<blank[i]<<"  ";
        }
  }

    for(int i=0; i<26; i++)
    {
        cout<<alpha[i];
    }
cout<<endl<<endl<<endl;
if(loss==0)
{
    lives--;
    cout<<"Guesses Left: "<<lives<<endl<<endl;
    if(lives==0)
    {
    lencount=len-space;
    }

}
loss=0;


cout<<endl<<endl;
}
while(lencount!=len-space);

if(lives==0)
{
system("cls");
cout<<endl;
cout<<"Sorry, You Lost."<<endl;
}
else
{
cout<<endl;
cout<<"You Win!"<<endl;
}


lencount=0;
{
    cout<<"1. *Out of Order*"<<endl;
    cout<<"2. Quit"<<endl<<endl;
}
cin>>choices;

if(choices==1)
{
exit(0);
}
if(choices==2)
{
exit(0);
}


return 0;
}

