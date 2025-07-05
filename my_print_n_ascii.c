void print_char(char c);


void my_print_n_ascii(int howMany) {
    if (howMany > 127 - 33) {
        return;
    }
    for (int i = 33; i <= 32 + howMany; i++) {
        print_char(i);
    }
}
