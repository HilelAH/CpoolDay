void print_char(char c);

int my_len(char *c)
{
    int i = 0;

    for (; c[i] != '\0'; i++);
    return i;
}

void my_get_words(char *sentance)
{
    for (int i = 0; i < my_len(sentance); ++i) {
        if (sentance[i] == ' ' || sentance[i] == '\t') {
            print_char('\n');
            while(sentance[i] == ' ' || sentance[i] == '\t')
            {
                i++;
            }
            i--;
        }
        else {
            print_char(sentance[i]);
        }
    }
    print_char('\n');
}
