#include <stdio.h>
main()
{char str0[100],longword[15];
gets(str0);
cechang(str0,longword);
puts(longword);
}
cechang(strl,word0)
{int i=0,j=0,t=0;
static char wordl[15];
for(;strl[i]!='\0';i++)
{if(!(strl[i]>=97&&strl[i]<=122||strl[i]>=65&&strl[i]<=90))
{t=j;j=0;continue;}
wordl[j]=strl[i];j++;
if(j>=t)strcpy(word0,wordl);}
}