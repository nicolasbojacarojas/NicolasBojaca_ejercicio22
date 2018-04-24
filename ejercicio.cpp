#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

void inicializa(double *u, double dx, double n);
void evolucion(double *un, double *uv, double dx, double dt, double n, double D);
void copia(double *un, double *uv, double n);

void inicializa(double *uv, double dx, double n, double sigma)
{
	double x;
	for (int i = 0, i < n, i ++)
	{
		x = i*dx;
		uv[i] = exp(-pow(x,2)/sigma);
	}
}

void evolucion(double *un, double *uv, double dx, double dt, double n, double D);
{
	for (int i = 0;, i < n; i++)
	{
		if(u[i]<=0.5)
		{
			un[i] = uv[i-1] + D*dt/(pow(dx,2))*(uv[i]-2*uv[i-1]+uv[i-2]);  
		}
	}	
}

void copia(double *un, double *uv, double n);
{
	for(int i = 0; i < n; i++)
	{
		un[i] = uv[i];
	}
}


int main()
{
	double dx = 0.01;
	double dt = 0.01;
	double D = 1.0;
	double x_max = 2.0;
	int n = x_max/dx;
	double T = 0.5;
	double *uv = new double[n];
	double *un = new double[n];
	double sigma = 0.5;
	inicializa(uv, dx, n, sigma);
	double t = 0.0;
	while (t<T)
	{
		evolucion(un, uv, dx, dt, n, D)
		copia(un, uv, n)
		t += dt
	}
	for(int i = 0; i < n, i ++)
	{
		cout << un[i] << " " << t << " " << x << endl;
	}

	return 0;
}
