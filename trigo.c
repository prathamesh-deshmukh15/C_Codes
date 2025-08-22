#include<stdio.h>
#include<math.h>
int main(){
    double angle = 1;
    double sin_val=sin(angle);
    double cos_val=cos(angle);
    double tan_val=tan(angle);

    printf("For Angle %.2f\n",angle);
    printf("Sine:%.2f\n",sin_val);
    printf("Cosine:%.2f\n",cos_val);
    printf("Tangent:%.2f\n",tan_val);
    
}