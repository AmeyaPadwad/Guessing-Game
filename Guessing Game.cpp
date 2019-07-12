#include <iostream>

using namespace std;

int secretnum=7;
int usernum;
int guessnum=0;

int main()
{
    cout<<"WELCOME TO THE GUESSING GAME! ALL YOU HAVE TO DO IS GUESS THE SECRET NUMBER!"<<endl<<endl;
    cout<<"P.S. DONT ENTER INVALIDS OR THE GODS WILL HAVE SIN ON YOU!"<<endl<<endl;
    cout<<"You have 5 tries!"<<endl<<endl;

        while(usernum!=secretnum && guessnum<5)
        {
            cout<<"You have "<<5-guessnum<<" guess(es) left."<<endl;
            cout<<"Guess the secret number : ";
            cin>>usernum;
            guessnum++;

            if(usernum!=secretnum)
            {
                cout<<"Wrong guess."<<endl<<endl;
            }

            else
            {
                cout<<"YOU WIN!!!"<<endl<<endl;
            }
        }

        cout<<"YOU LOSE!!!"<<endl;

    return 0;
}
