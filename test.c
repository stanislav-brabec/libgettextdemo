#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
#include "libgettextdemo.h"

int
main(void)
{
    int i;
    setlocale(LC_ALL, "");
    libgettextdemo_hallo();
    for (i=0; i<10; i++)
        libgettextdemo_dog_counter(i);
    for (i=0; i<5; i++)
        libgettextdemo_animal(i);
    return 0;
}
