#include <stdio.h>
int pal_check(int in) {
    int n, reversedN = 0, remainder, originalN;
    n = in;
    originalN = n;
    printf("%d\n", n);

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
    {
        printf("!\n");
        return (1);
    }
    else
        return (0);
    return 0;
}

int main() {
    if (pal_check(99599) == 1)
    {
        printf("&&&&");
    }
    
    int temp;
    int result = 0;
    int i1 = 100;
    int i2 = 100;
    while (i1 < 1000)
    {
        i2 = 100;
        while (i2 < 1000)
        {
            temp = i1 * i2;
            
            if (pal_check(temp) == 1 && temp > result)
            {
                result = temp;
            }
            i2++;
            
        }
        i1++;
    }
    printf("%d\n", result);
    
}