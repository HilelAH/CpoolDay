int my_len(const char *c)
{
    int i = 0;

    for (; c[i] != '\0'; i++);
    return i;
}

int my_get_char_repeat(char to_find, const char *to_search)
{
    int r = 0;
    if (!to_search) {
        return 0;
    }
    for (int i = 0; i < my_len(to_search); i++) {
        if (to_search[i] == to_find) {
            r++;
        }
    }
    return r;
}

