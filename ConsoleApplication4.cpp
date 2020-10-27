#include <iostream>
#include <cmath>
#include <string>
using namespace std;



float ante(float a)
{
	float y, x1, x2;
	for (y = 100;; y++);
	{
		float a, x1;
		if (a * y * y == 0)
		{
			x1 = a;
			return x1;
		}

	}
	for (y = 100;; y--);
	{
		float a, x2;
		if (a * y * y == 0)
		{
			x2 = a;
			return x2;
		}

	}

}

float alpha(float x1, float x2)
{
	float alpha1;
	if (x1 > 0 and x2 > 0 or x1 + x2 > 0)
	{
		return(x2 - x1);
	}
	else
		return (x1 - x2);
}
float beta(float x1, float x2)
{
	float beta1;
	while (x1 == x2)
	{
		x1 = x1 + 0, 0001;
		x2 = x2 + 0, 0001;
	}
	return x1;

}

int main()
{
	float a, b, c, i, y, x1,x22,x11, x2, z, alpha1, beta1;
	x11 = 0;
	x22 = 0;
	cout << "vous deverer ecrire de maniere lineaire par ex x au carre =x*x sinon x*1 et pareil pour ax =1* x\n";
	cout << "la forme est:ax au carre - bx+c=1\n" << "ou ax au carre + bx+c=2\n" << "ou ax au carre - bx -c=3\n" << "ou ax au carre - bx-c=1 ax-bx+c=2\n";
	cin >> i;
	cout << "juste devant le x1\n";
	cin >> a;
	cout << "juste devant le x2\n";
	cin >> b;
	cout << "juste c \n";
	cin >> c;
	ante(a);
	x1 = ante(x11);
	x2 = ante(x22);
	alpha1=alpha(x1, x2);
	beta1=beta(x1, x2);
	cout << a << "( x - " << alpha1 << " )² +" << beta1 << endl;

	return 0;
}
