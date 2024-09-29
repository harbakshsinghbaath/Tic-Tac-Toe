#include <iostream>//+
#include <iomanip>//+
#include <string>//+
#include<ios>
#include<limits>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin(){
    if(square[1]==square[2] && square[2]==square[3]){
        return 1;
    }
    else if(square[4]==square[5] && square[5]==square[6]){
        return 1;
    }
    else if(square[7]==square[8] && square[8]==square[9]){
        return 1;
    }
    else if(square[1]==square[5]&&square[5]==square[9]){
        return 1;
    }
    else if(square[3]==square[5]&&square[7]==square[5]){
        return 1;
    }
    else if(square[1]==square[4] && square[4]==square[7]){
        return 1;
    }
    else if(square[2]==square[5] && square[5]==square[8]){
        return 1;
    }
    else if(square[3]==square[6] && square [6]==square[9]){
        return 1;
    }
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9'){
        return 0;
    }
    else{
        return -1;
    }
}
string name1;
string name2;


void board(){
    system("cls");
    cout <<"\n\n\tTic Tac Toe Game \n\n"<<endl;


    cout << " Player " << name1 << " (X) - Player " << name2 << " (O)" << endl << endl;//+
// {"conversationId":"e8972875-1546-4735-8628-5e08da201e95","source":"instruct"}
    cout<<endl;

    cout <<"   |    |     " <<endl;
    cout <<" " << square[1] << " |  " << square[2] << " | " << square[3] << endl;
    cout <<"___|____|___ "<<endl;
    cout <<"   |    |     "<<endl;
    cout <<" " << square[4] << " |  " << square[5] << " | " << square[6] << endl;
    cout <<"___|____|___ "<<endl;
    cout <<"   |    |     "<<endl;
    cout <<" " << square[7] << " |  " << square[8] << " | " << square[9] << endl;
    cout <<"   |    |     "<< endl << endl ;
 }
int main(){

    cout<< " Name of Player one (X) is : " <<endl;
    getline( cin, name1);
    cout<< " Name of Player two (O) is : " <<endl;
    getline( cin, name2);

    int player = 1, i, choice;
    char mark;

    do {

        board();
        player=(player%2)?1:2;

        cout << "Player " << player << " Enter the number: ";
        cin>> choice;

        mark=(player == 1) ? 'X' :'0';

        if(choice == 1 && square[1] == '1')
        {
            square[1] = mark;
        }
        else if(choice == 2 && square[2] == '2')
        {
            square[2] = mark;
        }
        else if(choice == 3 && square[3] == '3')
        {
            square[3] = mark;
        }else if(choice == 4 && square[4] == '4')
        {
            square[4] = mark;
        }
        else if(choice == 5 && square[5] == '5')
        {
            square[5] = mark;
        }
        else if(choice == 6 && square[6] == '6')
        {
            square[6] = mark;
        }
        else if(choice == 7 && square[7] == '7')
        {
            square[7] =mark;
        }
        else if(choice == 8 && square[8] == '8')
        {
            square[8] = mark;
        }
        else if(choice == 9 && square[9] == '9')
        {
            square[9] = mark;
        }
        else
        {
            cout <<"Invalid move!";

            player--;
            cin.ignore();
            cin.get(); 
        }       
        
        i = checkwin();
        player++;
        
    }
    while(i== -1);
    board();
    string A;
   if (--player == 0){
    A = name1;
   }
   else{
    A = name2;
   }
    if( i == 1)
    {
      cout<< "\aCONGRATULATIONS PLAYER " << A <<" WINS!";
    }
    else
    {
        cout << "\a Game Draw";
    }
    cin.ignore();
    cin.get();
    return 0;
}