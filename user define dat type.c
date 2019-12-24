#include<stdio.h>


int main ()
{
    struct studentgrp
    {
        char name[100];
        int age;
        float cgpa;

    }

    int i, a;
    studentgrp x[30];
    for (i=0; i<30; i++)
    {
        scanf("%s%f%d",x[i].name,&x[i].cgpa,&x[i].age);
    }
}
