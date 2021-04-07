/**
 * Demo program for message-board exercise.
 * 
 * Author: Itay Arcobi
 * Since : 2021-03
 */
// #include <Mmsystem.h>
// #include <mciapi.h>
// #pragma comment (lib,"winm.lib")

#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	ariel::Board board;
	board.post(50,50, Direction::Vertical, "RIP UNCLE phil");
	board.post(60,70, Direction::Horizontal, "C++ course");
	board.post(65,60, Direction::Horizontal, "C++ programmers are needed for a large real estate project");
	board.post(52,85 ,Direction::Vertical, "irrelevant");
	board.post(74,80,Direction::Horizontal, "thank's for your help");
	board.post(71,60,Direction::Horizontal, "the dog is found");

	board.show();
}