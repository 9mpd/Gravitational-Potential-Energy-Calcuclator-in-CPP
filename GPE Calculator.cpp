#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>

# define G 6.67*pow(10,-11)

using namespace std;

int main()
{
	// Each and every input is in SI unit
	int i; 
    long double x_0, x_1, n, area, dx, M1, M2, GPE1, GPE2, Error; 
	cout << "Please enter, in order and in SI unit, the limits of integration (x_0 and x_1) and dx" << endl; 
	cin >> x_0 >> x_1 >> dx;
	cout << "Please enter, in order and in SI unit, the values of M1 and M2"<< endl;
    cin>> M1 >> M2;
    n=(x_1-x_0)/dx; 
    i=1; 
    area=0; 
    for(i=1;i<=n;i++)
    {
    	area=area+dx*((G*M1*M2)/pow((x_0+i*dx),2));
	}
	GPE1 = -area;
	cout << "The gravitationaal potential energy at the point (x_0) is approximately " << GPE1 << "Joule" << endl;
	GPE2 = -((G*M1*M2)/x_0);
	Error = (((GPE2 - GPE1)/GPE2)*100);
	cout << "Percentage error in the value of gravitational potential energy is " << Error << "%" <<endl;
	
	return 0;
    
}

