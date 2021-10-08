#include <stdio.h>
int DnC_Max(int a[], int index, int l);
int DnC_Min(int a[], int index, int l);
int DnC_Max(int a[], int index, int l)
{
    int max;
    if (index >= l - 2) {
        if (a[index] > a[index + 1])
            return a[index];
        else
            return a[index + 1];
    }

    max = DnC_Max(a, index + 1, l);

    if (a[index] > max)
        return a[index];
    else
        return max;
}

int DnC_Min(int a[], int index, int l)
{
    int min;
    if (index >= l - 2) {
        if (a[index] < a[index + 1])
            return a[index];
        else
            return a[index + 1];
    }

    min = DnC_Min(a, index + 1, l);

    if (a[index] < min)
        return a[index];
    else
        return min;
}

int main()
{
    int min, max, N;

    int a[7] = { 70, 250, 50, 80, 140, 12, 14 };

    max = DnC_Max(a, 0, 7);

    min = DnC_Min(a, 0, 7);
    printf("The minimum number is : %d\n", min);
    printf("The maximum number is : %d", max);
    return 0;
}

// This code is contributed by Ashish Rana (GFG Team)
