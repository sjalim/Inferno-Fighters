#ifndef wrenchTerhune_H_INCLUDED
#define wrenchTerhune_H_INCLUDED



#include"variables.h"
#include "iGraphics.h"
#include"life.h"

void wrenchTerhuneMovement()
{

	
	for(int i =0;i<wrenchTerhuneImageSimultaion;i++)
	{


if(wrenchTerhuneArr[i].wrenchTerhune_X>=characterX  &&  wrenchTerhuneArr[i].wrenchTerhune_X<=(characterX+100)  &&  (wrenchTerhuneArr[i].wrenchTerhune_Y+50)>=characterY  && (wrenchTerhuneArr[i].wrenchTerhune_Y+50) <=(characterY+100)  && (punchPressed || kickPressed))
	{

		wrenchTerhuneArr[i].wrenchTerhuneON = false;
		cout << point++ <<endl;


	}

if(wrenchTerhuneArr[i].wrenchTerhune_X>=characterX  &&  wrenchTerhuneArr[i].wrenchTerhune_X<=(characterX+100)  &&  (wrenchTerhuneArr[i].wrenchTerhune_Y+50)>=characterY  && (wrenchTerhuneArr[i].wrenchTerhune_Y+50) <=(characterY+100)  && !(punchPressed || kickPressed)&& wrenchTerhuneArr[i].wrenchTerhuneON)
	{

		lifeX+=2;


	}




		if(wrenchTerhuneArr[i].wrenchTerhuneON)
		{
			iShowBMP2(wrenchTerhuneArr[i].wrenchTerhune_X,wrenchTerhuneArr[i].wrenchTerhune_Y,wrenchTerhuneAttack[wrenchTerhuneArr[i].wrenchTerhuneImageIndex],0);
		}
	}
}

void setwrenchTerhuneVaribales()
{

	for(int i =0 ;i<wrenchTerhuneImageSimultaion;i++)
	{

		wrenchTerhuneArr[i].wrenchTerhune_X = screenWidth + rand()%700;
		wrenchTerhuneArr[i].wrenchTerhune_Y = rand() % 250;
		wrenchTerhuneArr[i].wrenchTerhuneON = true;

	}

}


#endif // !MYHEADER_H_INCLUDED
