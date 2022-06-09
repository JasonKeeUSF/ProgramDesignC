/* Jason Kee - U98628586
   Assignment 1 - Using Newton's Law of Universal Gravitation */

/* Citation - Verdantu Physics - https://www.vedantu.com/physics/newtons-law-of-gravity */

#include <stdio.h>
	
#define massSun 1.99E30
#define massEarth 5.98E24
#define massMoon 7.36E22
#define distSunEarth 1.496E10
#define distMoonEarth 3.84E8
#define gravConstant 6.67259E-11
#define gravForce(ma, mb, d) (ma * mb * gravConstant / (d * d))

int main()
{
	//Finding distance between Sun and Moon
	double distSunMoon = distSunEarth - distMoonEarth;

	//Force of Sun on Moon
	double forceSunMoon = gravForce (massSun, massMoon, distSunMoon);
	printf("The Force exerted by the Sun on the Moon is: %.1e\n", forceSunMoon);

	//Force of Earth on Moon
	double forceEarthMoon = gravForce (massEarth, massMoon, distMoonEarth);
	printf("The Force exerted by the Earth on the Moon is: %.1e\n", forceEarthMoon);

	//Force of Sun on Earth
	double forceSunEarth = gravForce (massSun, massEarth, distSunEarth);
	printf("The Force exerted by the Sun on the Earth is: %.1e\n", forceSunEarth);

	return 0;
}
	

