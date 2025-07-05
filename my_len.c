int my_len(char *c)
{
    int i = 0;

    for (; c[i] != '\0'; i++);
    return i;
}

