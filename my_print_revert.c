void print_char(char c);

int my_len(char *c)
{
    int i = 0;

    for (; c[i] != '\0'; i++);
    return i;
}

void my_print_revert(char *toRev)
{
    int len = my_len(toRev);
    char rev[len];
    for (int i = 0; i < len; i++) {
        rev[i] = toRev[i];
    }
    for (int i = 0; i < len / 2; i++) {
        char tmp = rev[i];
        rev[i] = rev[len - i - 1];
        rev[len - i - 1] = tmp;
    }
    
    for (int i = 0; i < len; i++) {
        print_char(rev[i]);
    }
}
