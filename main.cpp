#include <iostream>
#include <cmath>
using namespace std;
//double eval(int *pj);


double eval(int *pj);
//{
//	double score = 0;
//	for(int i = 0; i < 100; i++)
//	{
//		if ((i%2||i%3||i%5||i%7) == 0 && pj[i] == 1)
//		{
//			score++;
//		}
//		else if ((i%2||i%3||i%5||i%7) != 0 && pj[i] == 0)
//		{
//			score++;
//		}	
//	}
//	
//	return score;
//}


int main()
{
  int vec[100];

  int i;

  for(i = 0; i < 100; i++){
    vec[i] = 0;
  }
  double fBest, fNew;
  int *sBest=vec;
  int *sNew; 
  fBest = eval(vec);
int n;
double p=pow(10,10);
//float d;
int m=0;
for (i=0;i<p; i++)
{
	if (m<100)
	{	if (*(sNew+m)==0)
		*(sNew+m)=1;
		else
		*(sNew+m)=0;
	}
	
	else 	
	{ n=rand()%100;
		sNew=sBest;	
		if (*(sNew+n)==0)
			*(sNew+n)=1;
		else
			*(sNew+n)=0;
	}
	
	fNew=eval(sNew);
	
	if (fNew>=fBest)
		{
		sBest=sNew;
		fBest=fNew;	
		}
	//if (n==100)
	//	n=0;
	//else
	//	n=n;
	//d=(i+1)*100/p;
	m++;

cout << "fitness = " << fBest << "at iteration = "<< i << endl;
}

  
  
}

