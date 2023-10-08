#include <stdio.h>
#include <math.h>
float func(float N ,float M ) {
	if (N/pow(M,2)<1)
		return fmax(2.72 * sin(pow(N,2))-sqrt(M),1/tan(cbrtf(N*pow(M,2))));
	if (N/pow(M,2)>=1)
		return cos(N*pow(M,2));
}
void main() {
for (float x=1;x<=3;x+=1.3)
	{
	for (float y=2;y<=4;y+=1.5){
		float res=func(x,y);
		printf("x=%f,",x);
		printf("y=%f,",y);
		printf("u(x,y)=%f\n",res);
		}
	}
}
