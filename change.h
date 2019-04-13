#ifndef change_H_INCLUDED
#define change_H_INCLUDED

#include "variables.h"
#include "iostream"
using namespace std;
void change1()
{
	//cout << "c" << endl;


	if(run){

		if(runningImageIndex<7)
		{
			runningImageIndex++;
		}
		else 
		{
			runningImageIndex=0;
		}
	}
	else if(kickPressed)
	{
		if(kickingImageIndex<6)
		{
			kickingImageIndex++;
		}
		else
		{
			run = true;
			kickPressed = false;
			punchPressed = false;
			kickingImageIndex=0;
		}
	}
	else if(punchPressed)
	{
		if(punchImageIndexing<1)
		{
			punchImageIndexing++;
		}
		else 
		{
			run = true;
			kickPressed = false;
			punchPressed = false;
			punchImageIndexing =0;
		}
	}
	


	//cout << runningImageIndex << endl;
}

void change2()
{

		for(i=0;i<12;i++){
		background_x[i] -= 10;

		if(background_x[i] + 100 <0 )
		{

			background_x[i] = 100 + background_x[(i+10)%11];
		}
	}


}
void change_blade()
{


	//cout << "bladeCall"<< endl;
		for(int i =0; i<bladeImageSimultaion;i++)
		{
			bladeArr[i].blade_X -= 10;
			if(bladeArr[i].blade_X <= 10)
			{
				bladeArr[i].blade_X = screenWidth + rand()%700;


			}
			bladeArr[i].bladeImageIndex++;
			if(bladeArr[i].bladeImageIndex>9)
			{

				bladeArr[i].bladeImageIndex =0;
			}
		
	}
}

void change_dinosaurs()
{
	//cout << "dinosaursCall" << endl;

		for(int i =0; i<dinosaursImageSimultaion;i++)
		{
			dinosaursArr[i].dinosaurs_X -= 10;
			if(dinosaursArr[i].dinosaurs_X <= 10)
			{
				dinosaursArr[i].dinosaurs_X = screenWidth + rand()%700;

			}
			if(dinosaursArr[i].dinosaursImageIndex<4)
			dinosaursArr[i].dinosaurs_Y -=5;
			else 
				dinosaursArr[i].dinosaurs_Y +=6;
			dinosaursArr[i].dinosaursImageIndex++;
			if(dinosaursArr[i].dinosaursImageIndex>dinosaursAttackNumberOfImages-1)
			{

				dinosaursArr[i].dinosaursImageIndex =0;
			}
		
	}
}

void change_wrenchTerhune()
{
	//cout << "TerhuneCall" << endl;
	
	for(int i =0; i<wrenchTerhuneImageSimultaion;i++)
		{
			wrenchTerhuneArr[i].wrenchTerhune_X -= 10;
			if(wrenchTerhuneArr[i].wrenchTerhune_X <= 10)
			{
				wrenchTerhuneArr[i].wrenchTerhune_X = screenWidth + rand()%700;
			}
			wrenchTerhuneArr[i].wrenchTerhuneImageIndex++;
			if(wrenchTerhuneArr[i].wrenchTerhuneImageIndex>wrenchTerhuneAttackNumberOfImages-1)
			{

				wrenchTerhuneArr[i].wrenchTerhuneImageIndex =0;
			}
		
	}
}


#endif // !MYHEADER_H_INCLUDED