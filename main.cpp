#include <stdio.h>
#include <locale.h>
#include <libintl.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "");
    bindtextdomain("main", ".");
    textdomain("main");
    printf(gettext("Hello world\n"));
    return (0);
}
