/*************************************************************************
	> File Name: 14_3_friend.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 06 Nov 2014 01:08:36 PM CST
 ************************************************************************/

#include <stdio.h>

#define LEN 20

const char * msgs[5] = 
{
    "   Thank you for the wonderful evening, ",
    "You certainly prove that a ",
    "is a special kind of guy. We must get together",
    "over a delicious ",
    "and have a few laughs"
};

struct names
{
    char first[LEN];
    char last[LEN];
};

struct guy
{
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow = {
        {"Ewen", "Villard"},
        "grilled salmon",
        "personality coach",
        58112.00
    };

    printf("Dear %s, \n\n", fellow.handle.first);
    printf("%s%s.\n", msgs[0], fellow.handle.first);
    printf("%s%s\n", msgs[1], fellow.job);
    printf("%s\n", msgs[2]);
    printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
    if (fellow.income > 75000.0)
    {
        puts("!!");
    }
    else
    {
        puts(".");
    }
    printf("\n%40s%s\n", " ", "See you soon, ");
    printf("%40s%s\n", " ", "Shalala");

    return 0;
}
