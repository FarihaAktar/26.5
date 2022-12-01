#include<stdio.h>

// problem 1

int main()
{

    float a, b;

    scanf("%f %f", &a, &b);

    float* x = &a;
    float* y = &b;

    float avr = (*x + *y) / 2;
    printf("%f", avr);
    return 0;
}






//problem - 2


void bubble_sort(int arr[1000], int n)
{
    int swap;
    for(int i = 0; i<n; i++)
    {
        for(int j = i +1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);
    return 0;
}



// problem - 3


int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int* newArr[n];

    for(int j = 0; j<n; j++)
    {
        newArr[j] = &arr[j];
    }

    for(int j = 0; j<n; j++)
    {
        printf("%d ", *newArr[j]);
    }
    return 0;
}



// problem - 4


float area(float x)
{
    float ar = 3.1416 * x * x;
    return ar;
}

int main()
{
    float n;
    scanf("%f", &n);

    printf("%f", area(n));
    return 0;
}



// problem - 5


int sum_of_arr(int arr[1000], int n)
{
    int sum = 0;
    for(int i=0; i < n; i++)
    {
        if(arr[i] % 10 == 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", sum_of_arr(arr, n));
    return 0;
}


// problem - 6


char to_upper(char str[1000])
{
    for(int i = 0; i<strlen(str); i++)
    {
//        printf("%d\n", str[i]);
        if(str[i] % 2 == 0)
        {
            str[i] -= 32;
        }
    }

    return str;
}

int main()
{

    char arr[1000];

    scanf("%s", arr);

    to_upper(arr);


    return 0;
}


// code forces


#include<stdio.h>
#include<math.h>
#include <limits.h>

int sort(long long int arr[301], int n)
{
    long long int swap;
    for(int i = 0; i<n; i++)
    {
        for(int j= i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}


int minimum_operation(long long int arr[301], int n)
{
    sort(arr, n);

    long long int mini = INT_MAX;
    for(int i=2; i<n; i++)
    {
        long long int x = arr[i];
        long long int y = arr[i-1];
        long long int z = arr[i-2];

        long long int s = (x-y) + (y - z);
        mini = min(mini, s);

    }
    return mini;


}

int main()
{
    int t;

    scanf("%d", &t);

    int  n;

    for(int i = 0; i<t; i++)
    {
        scanf("%d", &n);
        long long int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long int num = minimum_operation(arr, n);
        printf("%lld\n", num);
    }

    return 0;
}
