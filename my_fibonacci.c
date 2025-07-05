void print_number(int value);

void my_fibonacci(int minimum, int maximum)
{
    if (minimum < 0) {
        return;
    }
    int fiboZ = 0;
    int fiboU = 1;
    int fibo = 0;
    while (fibo > minimum)
    {
        fibo = fiboU + fiboZ;
        fiboZ = fiboU;
        fiboU = fibo;
    }
    while (fibo < maximum)
    {
        print_number(fibo);
        fibo = fiboU + fiboZ;
        fiboZ = fiboU;
        fiboU = fibo;
    }
    
}

int main(void)
{
int minimum = -2;
int maximum = 10;
my_fibonacci(minimum, maximum);
return 0;
}