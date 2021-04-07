#pragma once
#include "Direction.hpp"
#include <string>
#include <iostream>
#include<unordered_map>
namespace ariel {
	class Board{
		std::unordered_map<unsigned int, std::unordered_map<unsigned int,char>> msg_board;
		unsigned int max_row=0;
		unsigned int min_row=UINT32_MAX;
		unsigned int max_col=0;
		unsigned int min_col=UINT32_MAX;

		public:
		void post (unsigned int row , unsigned int col , Direction d,std::string s);
    	std::string read (unsigned int row , unsigned int col , Direction d,unsigned int size);
		void show();
 };
};