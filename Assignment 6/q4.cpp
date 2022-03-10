#include <iostream>
using namespace std;
int Determinant1x1(int* a)
	{
		
	int Determinant = 0;
	
	Determinant = *a;
	
	return Determinant;	
		
	}

int Determinant2x2(int* a , int* b)
	{
		
	int Determinant = 0;
	
	Determinant+= (*a) * (Determinant1x1(b+4));
	Determinant-= (*b) * (Determinant1x1(a+4));
	
	return Determinant;	
		
	}

int Determinant3x3(int* a , int* b , int* c)
	{
		
	int Determinant = 0;
	
	Determinant+= (*a) * (Determinant2x2(b+4,c+4));
	Determinant-= (*b) * (Determinant2x2(a+4,c+4));
	Determinant+= (*c) * (Determinant2x2(a+4,b+4));
	
	return Determinant;	
		
	}	

int Determinant4x4(int* a , int* b , int* c , int* d)
	{
		
	int Determinant = 0;
	
	Determinant+= (*a) * (Determinant3x3(b+4,c+4,d+4));
	Determinant-= (*b) * (Determinant3x3(a+4,c+4,d+4));
	Determinant+= (*c) * (Determinant3x3(a+4,b+4,d+4));
	Determinant-= (*d) * (Determinant3x3(a+4,b+4,c+4));

	return Determinant;	
		
	}	
		
int main()
	{
		
	int A[4][4];
	
	cout<<"Enter the Matrix \n";

	for (int i = 0; i<4; i++)
		{
			
		for (int j = 0; j<4; j++)
			{
				
			std::cin>>A[i][j];
				
			}	
			
		}
	
	cout<<"The Determinant is "<<Determinant4x4(&(A[0][0]),&(A[0][1]),&(A[0][2]),&(A[0][3]));
	
		
	}