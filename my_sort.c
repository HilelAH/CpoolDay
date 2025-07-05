void print_number(int value);

int sorted(int *nlist, int size)
{
    for (int i = 1; i < size; i++) {
        if (nlist[i] < nlist[i-1]) {
            return 1;
        }
    }
    return 0;
}

void my_sort(int *nlist, int size) 
{
    while (sorted(nlist, size) == 1) {
        for (int i = 1; i < size; i++) {
            if (nlist[i] < nlist[i-1]) {
                int tmp = nlist[i];
                nlist[i] = nlist[i-1];
                nlist[i-1] = tmp;
            }
        }
    }
    for (int i = 0; i < size ; i++) {
        print_number(nlist[i]);
    }
}
