#include<iostream>
#include<conio.h>
using namespace std;

int choice;
		
		char turn ='x';
		
		int row;
        int column;
        	
        bool draw =false;
        	
char  board[3][3]={{'1','2','3'},{'4','5','6',},{'7','8','9'}};

void display_board()
{
	system("cls");

	cout<<"\n\n\t\tT i c k  C r o s s   G a m e"<<endl;
	
	cout<<"Player1 for [x]"<<endl;
	cout<<"Player2 for [0]"<<endl;
	
	cout<<"\n\n\n";
	
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1] <<"  |  "<<board[0][2]<<" \n";
	cout<<"\t\t_____|_____|_____\n"<<endl;
	cout<<"\t\t     |     |     \n"<<endl;
    cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1] <<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t     |     |     \n";
	cout<<"\t\t_____|_____|_____\n"<<endl;
	cout<<"\t\t     |     |     \n"<<endl;
    cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1] <<"  |  "<<board[2][2] <<" \n";
	cout<<"\t\t     |     |     \n";
}

void player_turn()
{
		
		if(turn=='x')
	cout<<"\n Player1 [x] turn :";
	
	    if(turn=='o')
	cout<<"\n Player2 [o] turn :";
	
	
	cin>>choice;
	
	switch(choice)
	{
		case 1: row=0; column=0; break;
		case 2: row=0; column=1; break;
		case 3: row=0; column=2; break;
		case 4: row=1; column=0; break;
		case 5: row=1; column=1; break;
		case 6: row=1; column=2; break;
		case 7: row=2; column=0; break;
		case 8: row=2; column=1; break;
		case 9: row=2; column=2; break;
		
		default:
			
			cout<<"invalid choice \n";
			break;
		
	}
	if(turn=='x' && board [row][column]!='x' && board [row][column]!='o' )
	{
		board[row][column]='x';
		
		turn='o';
	}
	
    else	if(turn=='o'&& board [row][column]!='x' && board [row][column]!='o' )
	{
		board[row][column]='o';
		
		turn='x';
	}
	
	else
	{
		cout<<"\n";
		cout<<"\t\t\tplease enter valid box \n ";
		
		player_turn();
	}
		
	display_board();	
}
 bool gameover()
 {
 	//check win
 	
 	for(int i=0; i<3; i++)
 	
 	if(board[i][0]==board[i][1]  && board[i][0]==board[i][2] || board[0][i]==board[1][i]  && board[0][i]==board[2][i])
 	
 	return false;
 	
 	if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] &&  board[0][2]==board[2][0])
 	
 	return false;
 	
 	//if there is any box not filled
 	
 		for(int i=0; i<3; i++)
 			for(int j=0; j<3; j++)
 			if(board[i][j]!='x' && board[i][j]!='o')
 			return true;
 	//draw	
	 	
 		draw = true;
 		
 		return false;
 }
int main()
{
	while(gameover())
	{
	
	display_board();
	
	player_turn();
	
	gameover();
		
   }
   
   if(turn=='x' && draw==false)
   
   cout<<"Player2 [o] win  !! ! congratulation !!!! \n";
   
    else if(turn=='o'&& draw==false)
   
   cout<<"Player1 [x] win .....  congratulation !!!!! \n";
   
   else
   
   cout<<"\t\t \n\n Game Draw \n";
	
		getch();
	return 0;
	
}
