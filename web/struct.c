#include<stdio.h>
struct umar
{
    // int name;
    float height;
};
void show(float a)
{
    printf("%f",a);
}

int main()
{
    struct umar u1={69.4};
    struct umar h1={5.10};
 show(h1.height);
    
return 0;
}