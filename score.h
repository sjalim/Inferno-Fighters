#ifndef score_H_INCLUDED
#define score_H_INCLUDED
#include"variables.h"




void score()
{

file = fopen("highScore.txt","r");

	for(int i = 0 ; i < 6 ; i ++)
	{
		fscanf(file , "%s %d %d" , &scoreArr[i].name  , &scoreArr[i].point ,&scoreArr[i].levelMark);
	}

	fclose(file);

	for (int i = 0 ; i<5 ; i++)
	{
		for(int j = 0 ; j< 6-i-1 ; j++)
		{
			if( scoreArr[j].point < scoreArr[j+1].point )
			{
				tempScore = scoreArr[j+1].point;
				scoreArr[j+1].point = scoreArr[j].point;
				scoreArr[j].point = tempScore;

				strcpy( tempName , scoreArr[j+1].name);
				strcpy( scoreArr[j+1].name , scoreArr[j].name);
				strcpy( scoreArr[j].name , tempName);

				tempLevelMark = scoreArr[j].levelMark;
				scoreArr[j+1].levelMark = scoreArr[j].levelMark;
				scoreArr[j].levelMark = tempLevelMark;


			}
		}
		
	}
	cout << scoreArr[5].name << endl;
	file = fopen("highScore.txt", "w");

	for(int i = 0; i<5 ; i++)
	{
		fprintf(file , "%s\t%d\t%d\r\n" , scoreArr[i].name  , scoreArr[i].point,scoreArr[i].levelMark);
	}

	fclose(file);
}

void showScores()
{

		iSetColor(251,160,38);
			iText(160,490, "Name ",GLUT_BITMAP_TIMES_ROMAN_24);
			iText(375,490, "Score ",GLUT_BITMAP_TIMES_ROMAN_24);
			iText(555,490,"Level",GLUT_BITMAP_TIMES_ROMAN_24);
			file = fopen("highScore.txt","a+");

			for(int i = 0 ; i < 5 ; i ++)
			{
			 

				fscanf(file , "%s %d %d" , &scoreArr[i].name , &scoreArr[i].point,&scoreArr[i].levelMark);
			}


			fclose(file);

			iSetColor(225,220,30);

			iText( 165 , 450  , "1. " , GLUT_BITMAP_TIMES_ROMAN_24 );
			iText( 165 , 410  , "2. " , GLUT_BITMAP_TIMES_ROMAN_24 );
			iText( 165 , 370  , "3. " , GLUT_BITMAP_TIMES_ROMAN_24 );
			iText( 165 , 330  , "4. " , GLUT_BITMAP_TIMES_ROMAN_24 );
			iText( 165 , 290  , "5. " , GLUT_BITMAP_TIMES_ROMAN_24 );


			iSetColor(53,204,236);

			for(int i = 0 ; i < 5 ; i++)
			{
				if(scoreArr[i].levelMark==1)
				{
					iText( 195 , 450 - i *40 , scoreArr[i].name , GLUT_BITMAP_TIMES_ROMAN_24 );
					itoa(scoreArr[i].point , highScoreString , 10);
					iText( 375 , 450 - i *40 , highScoreString , GLUT_BITMAP_TIMES_ROMAN_24 );
					iText(555 , 450 - i *40 , "Easy" , GLUT_BITMAP_TIMES_ROMAN_24);
				}
				else if(scoreArr[i].levelMark==2)
				{
					iText( 195 , 450 - i *40 , scoreArr[i].name , GLUT_BITMAP_TIMES_ROMAN_24 );
					itoa(scoreArr[i].point , highScoreString , 10);
					iText( 375 , 450 - i *40 , highScoreString , GLUT_BITMAP_TIMES_ROMAN_24 );
					iText(555 , 450 - i *40 , "Hard" , GLUT_BITMAP_TIMES_ROMAN_24);
				}
				else if(scoreArr[i].levelMark==3)
				{

					iText( 195 , 450 - i *40 , scoreArr[i].name , GLUT_BITMAP_TIMES_ROMAN_24 );
					itoa(scoreArr[i].point , highScoreString , 10);
					iText( 375 , 450 - i *40 , highScoreString , GLUT_BITMAP_TIMES_ROMAN_24 );
					iText(555 , 450 - i *40 , "Insane" , GLUT_BITMAP_TIMES_ROMAN_24);
				}

			}


}


#endif // !MYHEADER_H_INCLUDED