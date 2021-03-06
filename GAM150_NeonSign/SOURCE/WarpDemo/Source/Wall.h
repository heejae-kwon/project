﻿/******************************************************************************/
/*!
\file   Wall.h
\title  Neon sign
\author Kim gue sik
\par    GAM150
\brief
Header file for Wall.cpp, to connect with Data.h

“All content © 2016 DigiPen (USA) Corporation, all rights reserved.”
*/
/******************************************************************************/
#ifndef WALL_H
#define WALL_H

#include "Data.h"
#include "MyHelper.h"

void CreateWall(Play &data);
void DrawWall(const Block *pWall, const Play &data);

#endif
