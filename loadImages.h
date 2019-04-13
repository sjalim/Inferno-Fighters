#ifndef loadImages_H_INCLUDED
#define loadImages_H_INCLUDED

#include "variables.h"

void loadImages()
{

	for(i=0;i<homeNumberOfImages;i++)
	{
		Home[i] = iLoadImage2(Home_[i]);

	}


	for(i=0;i<mustofaKickNumberOfImages;i++)
	{

		mutofaArrowKick[i] = iLoadImage2(mutofaArrowKick_[i]);

	}

	for(i=0;i<mustofaPunchNumberOFImages;i++)
	{

		mustofaPunched[i] = iLoadImage2(mustofaPunched_[i]);

	}

	for(i=0;i<mustofaRunsNumberOFImages;i++)
	{

		mustofaRunning[i] = iLoadImage2(mustofaRunning_[i]);

	}
	for(i=0;i<sjRunsNumberOFImages;i++)
	{

		sjRunning[i] = iLoadImage2(sjRunning_[i]);

	}
	for(i=0;i<sjPunchNumberOFImages;i++)
	{

		sjPunched[i] = iLoadImage2(sjPunched_[i]);

	}
	for(i=0;i<sjKickNumberOfImages;i++)
	{

		sjKick[i] = iLoadImage2(sjKick_[i]);

	}
	for(i=0;i<marieKickNumberOfImages;i++)
	{

		marieKick[i] = iLoadImage2(marieKick_[i]);

	}
	for(i=0;i<mariePunchNumberOFImages ; i++)
	{
		mariePunched[i] = iLoadImage2(mariePunched_[i]);


	}
	for(i=0;i<marieRunsNumberOFImages;i++)
	{


		marieRunning[i] = iLoadImage2(marieRunning_[i]);
	}
	for(i=0;i<annahKickNumberOfImages;i++)
	{

		annahKick[i] = iLoadImage2(annahKick_[i]);

	}
	for(i=0;i<annahPunchNumberOFImages;i++)
	{
		annahPunched[i] = iLoadImage2(annahPunched_[i]);


	}
	for(i=0;i<annahRunsNumberOFImages;i++)
	{

		annahRunning[i] = iLoadImage2(annahRunning_[i]);

	}

			for(int j=0;j<12;j++)
		{
			backgroundPNG[0][j] = iLoadImage(backGround_1[j]);

		}
		for(int j=0;j<12;j++)
		{
			backgroundPNG[1][j] = iLoadImage(backGround_2[j]);

		}
		for(int j=0;j<12;j++)
		{
			backgroundPNG[2][j] = iLoadImage(backGround_3[j]);

		}
}


#endif // !MYHEADER_H_INCLUDED