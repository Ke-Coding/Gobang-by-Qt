#ifndef UI_SIZE_PARAM_H
#define UI_SIZE_PARAM_H

#include "base.h"

enum SCREEN_SIZE_PARAM
{
	SCREEN_W = 790,
	SCREEN_H = (int)(SCREEN_W * 1.082)
};

enum GRID_SIZE_PARAM
{
	GRID_W = 40,
	MARK_R = 2,
	CHESS_R = 14,
	DETECT_R = GRID_W/2-2
};

enum BOARD_SIZE_PARAM
{
	BOARD_W = (GRID_N+1) * GRID_W,
	BOARD_L = (SCREEN_W - BOARD_W)/2,
	BOARD_U = BOARD_L,
	BOARD_R = BOARD_L + BOARD_W,
	BOARD_D = BOARD_R
};

enum CTRL_BUTTON_SIZE_PARAM
{
	CTRL_BUTTON_W   =  86,// 80
	CTRL_BUTTON_H   =  36,// 32
	CTRL_BUTTON_L   =  BOARD_L + CTRL_BUTTON_H/4 + 3,
	CTRL_BUTTON_R   =  BOARD_R - CTRL_BUTTON_W - CTRL_BUTTON_H/4 - 3,
	CTRL_BUTTON_U   =  BOARD_D + CTRL_BUTTON_H * 6/5,
//	CTRL_BUTTON_U   =  BOARD_D + CTRL_BUTTON_H * 4/3,
	CTRL_BUTTON_ITV = (CTRL_BUTTON_R - CTRL_BUTTON_L)/(CTRL_BUTTON_N-1)
};

enum TITLE_BUTTON_SIZE_PARAM
{
	TITLE_BUTTON_W   =  30,
	TITLE_BUTTON_H   =  30,
	TITLE_BUTTON_ITV =  32,
	TITLE_BUTTON_L   =  SCREEN_W - TITLE_BUTTON_N * (int)(TITLE_BUTTON_ITV * 1.15),
	TITLE_BUTTON_U   =  TITLE_BUTTON_H/4,
	TITLE_BUTTON_D   =  TITLE_BUTTON_H + TITLE_BUTTON_H/4
};

#endif // UI_SIZE_PARAM_H
