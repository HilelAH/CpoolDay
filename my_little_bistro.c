int my_little_bistro(int value1, char op, int value2)
{
    if (op == '+') {
        return value1 + value2;
    } else if (op == '-') {
        return value1 - value2;
    } else if (op == '*') {
        return value1 * value2;
    } else if (op == '/') {
        return value1 / value2;
    } else if (op == '%') {
        return value1 % value2;
    }
}
