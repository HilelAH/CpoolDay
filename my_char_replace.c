int my_len(char *c)
{
    int i = 0;

    for (; c[i] != '\0'; i++);
    return i;
}

char *my_char_replace(char *origin, char toFind, char toReplace)
{
    char *tmp = origin;
    for (int i = 0; i < my_len(origin); i++) {
        if (origin[i] == toFind) {
            tmp[i] = toReplace;
        }
    }
    return tmp;
}
