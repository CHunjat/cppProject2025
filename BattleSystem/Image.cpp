#include "Image.h"

char slimeIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{" (*****)  "},
	{" (*   *)  "},
	{" (*****)  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char slimeBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"   aa     "},
	{"   aa     "},
	{" (*****)  "},
	{" (*   *)  "},
	{" (*****)  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char slimeMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"   **     "},
	{"  **      "},
	{" (*****)  "},
	{" (*mm *)  "},
	{" (*****)  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};

char PlayerIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"    し   "},
	{"    で   "},
	{"    さ   "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char PlayerBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"    し|  "},
	{"    で|| "},
	{"    さ|  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char PlayerMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"   し|   "},
	{"   で||  "},
	{"   さぁ"},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};