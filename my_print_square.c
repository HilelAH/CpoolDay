void print_char(char c);

void my_print_square(int size, char c)
{
    if (size < 1 ) {
        return;
    }
    if (c < 32 || c > 126) {
        return;
    }
    for (int i = 0; i < size; i++) {
        if (i == 0 || i == size) {
            for (int j = 0; j < size; j++) {
                print_char(c);
            }
        } else {
            print_char(c);
            for (int j = 0; j < size - 2; j++) {
                print_char(' ');
            }
            print_char(c);
        }
        
        print_char('\n');
    }
}
