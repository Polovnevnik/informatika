#include <stdio.h>

int main()



{   int ch;  
 printf("DEC   HEX   CHAR       ");
printf("DEC   HEX   CHAR       ");
printf("DEC   HEX   CHAR       ");
printf("DEC   HEX   CHAR\n");
 printf("0     0     NUL        ");
printf("1     1     SOH        ");
printf("2     2     STX        ");
printf("3     3     ETX\n");
 printf("4     4     EOT        ");
printf("5     5     ENQ        ");
printf("6     6     ACK        ");
printf("7     7     BEL\n");
 printf("8     8     BS         ");
printf("9     9     HT         ");
printf("10    A     LF         ");
printf("11    B     VT\n");
 printf("12    C     FF         ");
printf("13    D     CR         ");
printf("14    E     SO         ");
printf("15    F     SI\n");
 printf("16    10    DLE        ");
printf("17    11    DC1        ");
printf("18    12    DC2        ");
printf("19    13    DC3 \n");
 printf("20    14    DC4        ");
printf("21    15    NAK        ");
printf("22    16    SYN        ");
printf("23    17    ETB\n");
 printf("24    18    CAN        ");
printf("25    19    EM         ");
printf("26    20    SUB        ");
printf("27    1B    ESC\n");
 printf("28    1C    FS         ");
printf("29    1D    GS         ");
printf("30    1E    RS         ");
printf("31    1F    US\n");

    	
ch=32;
while(ch<123)
{
printf("%d%6x%5c",ch,ch,ch);
ch++;
printf("%12d%6x%5c",ch,ch,ch);
ch++;
printf("%12d%6x%5c",ch,ch,ch);
ch++;
printf("%12d%6x%5c\n",ch,ch,ch);
ch++;
    	
        } 
  printf("%d%6x%5c",124,124,124);
printf("%12d%6x%5c",125,125,125);
printf("%12d%6x%5c",126,126,126);
printf("%12d%6x    DEL\n",127,127);
	
	


return 0;
}
