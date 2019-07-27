#include <stdio.h>

int main()
{
    int nr;

    printf("\aInvatam sa folosim \"Escape sequences\"!\n");
    printf("\tIntroduceti un numar:________\b\b\b\b\b\b\b\b");

    scanf ("%d", &nr);
    printf("\a Ati introdus numarul \"%d\"  ", nr);

    return 0;
}

/**

\a	07	Alarm (Beep, Bell)
\b	08	Backspace
\f	0C	Formfeed
\n	0A	Newline (Line Feed); see notes below
\r	0D	Carriage Return
\t	09	Horizontal Tab
\v	0B	Vertical Tab
\\	5C	Backslash
\'	27	Single quotation mark
\"	22	Double quotation mark
\?	3F	Question mark

*/
