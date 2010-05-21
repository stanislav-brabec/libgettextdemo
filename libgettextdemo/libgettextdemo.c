#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>

#ifdef ENABLE_NLS
#include <libintl.h>
#define _(string) dgettext (GETTEXT_PACKAGE, string)
#define N_(string) (string)
#define Q_(string1, stringm, n) dngettext (GETTEXT_PACKAGE, string1, stringm, n)
#else
#define _(string) (string)
#define N_(string) (string)
#define Q_(string1, stringm, n) (n == 1 ? string1, stringm)
#define dgettext(domain, string) (string)
#endif

void
libgettextdemo_hallo(void)
{
	printf (_("This string comes from libgettextdemo.\n"));
}

void
libgettextdemo_dog_counter(int dogs)
{
	printf (Q_("I see %d dog.\n", "I see %d dogs.\n", dogs), dogs);
}

static const char* animal_table[] = {
	N_("dog"),
	N_("cat"),
	N_("sheep"),
	N_("pig")
};

void
libgettextdemo_animal(int animal)
{
	if (animal >= 0 && animal < sizeof(animal_table)/sizeof(const char*))
		printf ("%s\n", dgettext(GETTEXT_PACKAGE, animal_table[animal]));
	else
		printf (_("bad animal number\n"));
}

void __attribute__ ((constructor))
libgettextdemo_init(void)
{
#ifdef ENABLE_NLS
	bindtextdomain(GETTEXT_PACKAGE, LOCALEDIR);
#endif
}
