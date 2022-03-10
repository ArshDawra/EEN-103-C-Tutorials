#include <iostream>
using namespace std;
int Multiplyer (int m1 , int n1 , int A[] , int m2 , int n2 , int B[] , int R[])
	{
		
	if (n1 != m2)
		{
		
		return 0;
			
		}	
		
	for (int i = 0 ; i<m1 ; i++)
		{
			
		for (int j = 0 ; j<n2 ; j++)
			{
			
			for (int k = 0 ; k<n1 ; k++)
				{
			
				R[(i*n2)+j]+=A[(i*n1)+k]*B[(k*n2)+j];

				}
			
			}	
				
		}
	
	return 1;
	
	}

int main()
	{
		
	int m1,n1;
		
	cout<<"Enter no. of rows and columns of first matrix: \n";
	
	cin>>m1>>n1;
	
	int A[m1*n1];
	
	cout<<"Enter first Matrix \n";

	for (int k = 0; k<m1*n1; k++)
		{

		cin>>A[k];
			
		}
	
	int m2,n2;
		
	cout<<"Enter no. of rows and columns of second matrix: \n";
	
	cin>>m2>>n2;
	
	int B[m2*n2];
	
	cout<<"Enter second Matrix \n";

	for (int k = 0; k<m2*n2; k++)
		{

		cin>>B[k];
			
		}
	
	int R[m1*n2]={0};
	
	int x = Multiplyer (m1 , n1 , A , m2 , n2 , B , R);
	
	if (x)
		{
		
		cout<<"The Resulting Matrix is \n";
		
		for (int i = 0 ; i < m1 ; i++)
			{
			
			for (int j = 0 ; j < n2 ; j++)
				{
				
				cout<<R[(i*n2)+j]<<"\t";
				
				}	
				
			cout<<"\n";	
	
			}
		
		}
	
	else
		{
			
	cout<<"The matrices are incompatible with multiplication" ;	
			
		}	
		
	}