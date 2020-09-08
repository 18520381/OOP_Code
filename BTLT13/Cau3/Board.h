#pragma once
#include "King.h"
#include "Guard.h"
#include "Bishop.h"
#include "Castle.h"
#include "Knight.h"
#include "Cannon.h"
#include "Pawn.h"
#include "Chess.h"

class Board
{
	int Visit[10][9];
	Chess *Play[32];
public:
	Board()
	{}
	void init()
	{
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 9; j++) Visit[i][j] = -1;
		Play[0] = new Castle(0, 0);
		Visit[0][0] = 0;
		Play[1] = new Knight(0, 1);
		Visit[0][1] = 1;
		Play[2] = new Bishop(0, 2);
		Visit[0][2] = 2;
		Play[3] = new Guard(0, 3);
		Visit[0][3] = 3;
		Play[4] = new King(0, 4);
		Visit[0][4] = 4; 
		Play[5] = new Guard(0, 5);
		Visit[0][5] = 5;
		Play[6] = new Bishop(0, 6);
		Visit[0][6] = 6;
		Play[7] = new Knight(0, 7);
		Visit[0][7] = 7;
		Play[8] = new Castle(0, 8);
		Visit[0][8] = 8;
		Play[9] = new Cannon(2, 1);
		Visit[2][1] = 9;
		Play[10] = new Cannon(2, 7);
		Visit[2][7] = 10;
		Play[11] = new Pawn(3, 0);
		Visit[3][0] = 11;
		Play[12] = new Pawn(3, 2);
		Visit[3][2] = 12;
		Play[13] = new Pawn(3, 4);
		Visit[3][4] = 13;
		Play[14] = new Pawn(3, 6);
		Visit[3][6] = 14;
		Play[15] = new Pawn(3, 8);
		Visit[3][8] = 15;

		Play[16] = new Castle(9, 0);
		Visit[9][0] = 16;
		Play[17] = new Knight(9, 1);
		Visit[9][1] = 17;
		Play[18] = new Bishop(9, 2);
		Visit[9][2] = 18;
		Play[19] = new Guard(9, 3);
		Visit[9][3] = 19;
		Play[20] = new King(9, 4);
		Visit[9][4] = 20;
		Play[21] = new Guard(9, 5);
		Visit[9][5] = 21;
		Play[22] = new Bishop(9, 6);
		Visit[9][6] = 22;
		Play[23] = new Knight(9, 7);
		Visit[9][7] = 23;
		Play[24] = new Castle(9, 8);
		Visit[9][8] = 24;
		Play[25] = new Cannon(7, 1);
		Visit[7][1] = 25;
		Play[26] = new Cannon(7, 7);
		Visit[7][7] = 26;
		Play[27] = new Pawn(6, 0);
		Visit[6][0] = 27;
		Play[28] = new Pawn(6, 2);
		Visit[6][2] = 28;
		Play[29] = new Pawn(6, 4);
		Visit[6][4] = 29;
		Play[30] = new Pawn(6, 6);
		Visit[6][6] = 30;
		Play[31] = new Pawn(6, 8);
		Visit[6][8] = 31;
	}
	void Pick()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 9; j++) cout << Visit[i][j] << "\t";
			cout << endl;
		}
		int x;
		cout << "Nhap quan co muon chon: ";
		cin >> x;
		cout << "Cac nuoc ma quan co nay co the di:\n";
		Play[x]->CanGo(x,Visit);
	}

	~Board()
	{}
};
