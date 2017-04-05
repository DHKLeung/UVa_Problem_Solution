#include <iostream>
#include <math.h>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-24 (YYYYMMDD)
***************************************/
int main(void) {
	int hr, min;
	float hrangle, minangle, angle;
	while (scanf("%d:%d", &hr, &min) && ((hr != 0) || (min != 00))) {
		hrangle = (360.0 / 12.0) * hr + (min / 60.0) * (360.0 / 12.0);
		minangle = (360.0 / 60.0) * min;
		angle = fabs(hrangle - minangle);
		if (angle > 180.000) {
			printf("%.3f\n", 360.000 - angle);
		}
		else {
			printf("%.3f\n", angle);
		}
	}
	return 0;
}