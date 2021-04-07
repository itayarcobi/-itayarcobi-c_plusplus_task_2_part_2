#include <iostream>
using namespace std;
#include "Direction.hpp"
#include "Board.hpp"
#include <string>
#include<climits>
namespace ariel{
void Board::post(unsigned int row , unsigned int col , ariel::Direction d,string s){

    if(col<min_col){
        min_col=col;
    }
    if(row<min_row){
        min_row=row;
    }

    for (unsigned int i = 0; i < (unsigned int) s.length(); i++)
    {
        char l =s[i];
         Board::msg_board[row][col]=l;
         if(d==Direction::Horizontal){
             col++;
         }
         else{
             row++;
         }
  
    }
    if(col>max_col){
        max_col=col;
    }
    if(row>max_row){
        max_row=row;
    }
}
string Board::read (unsigned int row , unsigned int col , ariel::Direction d,unsigned int size){
    string ans;
    unsigned int r= row;
    unsigned int c =col;
    const int LOWEST_ASCI=31;
    const int HIGHEST_ASCI=127;

    for (int i = 0; i < size; i++)
    {
        char l=Board::msg_board[r][c];
        //using ascii table:
        if(l>LOWEST_ASCI && l<HIGHEST_ASCI){
        ans+=l;
        }
        else{
            string emp ="_";
        ans+=emp;
        }
         if(d==Direction::Horizontal){
             c++;
         }
         else{
             r++;
         }

    }
    return ans;
    
}
void Board::show(){
//  const string START_RED= "\x1B[31m";
// const string START_GREEN ="\x1B[32m";
// const string START_YELLOW ="\x1B[33m";
//  const string START_BLUE ="\x1B[34m";
// const string START_CYAN ="\x1B[36m";
// const string START_MAGENTA ="\x1B[35m";
// const string END_COLOR ="\033[0m\t\t";
    const int LOWEST_ASCI=31;
    const int HIGHEST_ASCI=127;
    // const int RAND_RED =0;
    // const int RAND_GREEN =1;
    // const int RAND_YELLOW =2;
    // const int RAND_BLUE =3;
    // const int RAND_CYAN =4;
    // int v1=0;

for (unsigned int i=min_row ; i<max_row; i++)
{
    for (unsigned int j=min_col ; j<max_col; j++)
    {
	char l= Board::msg_board[i][j];
    if(l>LOWEST_ASCI && l<HIGHEST_ASCI){
        cout<<l;
    }
    else{
                string emp ="_";
                cout<<emp;
            // if(v1==RAND_RED){
            //     cout<<START_RED<<emp;
            // }
            // else if (v1==RAND_GREEN){
            //     cout<<START_GREEN<<emp;
            // }
            // else if (v1==RAND_YELLOW)
            // {
            //     cout<<START_YELLOW<<emp;
            // }
            // else if (v1==RAND_BLUE)
            // {
            //     cout<<START_BLUE<<emp;
            // }
            // else if (v1==RAND_CYAN)
            // {
            //     cout<<START_CYAN<<emp;
            // }
            // else
            // {
            //     cout<<START_MAGENTA<<emp;
            // }
            // v1++;
            // if(v1>4){
            //     v1=0;
            // }
        }
    }
    cout <<endl;
}

}
};
